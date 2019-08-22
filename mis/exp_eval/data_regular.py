#!/usr/bin/python

import os
import sys


def unify_format(fname, outf, ngap):
    with open(fname, "r") as inf, open(outf, "w+") as of:
        for l in inf:
            fs = l.split("=")
            assert(len(fs) == 2)
            x = int(fs[1], 16)
            x += ngap
            nl = "tag = " + hex(x) + "\n"
            of.writelines(nl)
        #end while
    #end with

def unify_log(fref, frfy):
    """
    data format:
    tag = 0x600016932c30
    """

    ngap = 0
    l1 = None
    l2 = None
    with open(fref, "r") as f1, open(frfy, "r") as f2:
        #only read the first line
        l1 = f1.readline()  
        l2 = f2.readline()
    #end with
    #exit(0)

    #check file format
    fs = l1.split("=")
    assert(len(fs) == 2)
    x1 = int(fs[1], 16)

    fs = l2.split("=")
    assert(len(fs) == 2)
    x2 = int(fs[1], 16)

    r1 = x1 & 0xfff
    r2 = x2 & 0xfff
    if (r1 != r2):
        print "Wrong data fomat, the first data element should have the same offset"
        print ""
        "ref_file                |         target_file"
        "tag = 0x7ffff7d4bc30    |         tag = 0x60002600ac30"

    #rectify data 
    ngap = x1 - x2
    
    if ngap != 0:
        outf = frfy + ".rfy.txt"
        unify_format(frfy, outf, ngap)


#-------------------------------start unit-test-------------------------------#
import unittest
class unit_test(unittest.TestCase):
    test_flog1 = "del_flog1"
    test_flog2 = "del_flog2"

    # def generate_unittest_log(self):
    @classmethod
    def setUpClass(cls):
        log1 = "tag = 0x600016932c30\n" \
        "tag = 0x6000169339b0\n" \
        "tag = 0x600016933a05\n"
  
        log2 = "tag = 0x7ffff7d4bc30\n" \
        "tag = 0x7ffff7d4c9b0\n" \
        "tag = 0x7ffff7d4ca05\n"
 
   
        flog1 = "del_flog1"
        flog2 = "del_flog2"
        with open(flog1, "w+") as f1, open(flog2, "w+") as f2:
            f1.writelines(log1)
            f2.writelines(log2)

    
        # self.generate_unittest_log()
    
    @classmethod
    def tearDownClass(cls):
        flog1 = "del_flog1"
        flog2 = "del_flog2"
        os.unlink(flog1)
        os.unlink(flog2)

    def test_add_gap(self):
        flog1 = self.test_flog1
        flog2 = self.test_flog2
        outf = flog2 + ".rfy.txt"

        unify_log(flog1, flog2)
        
        with open(flog1, "r") as f1, open(outf, "r") as f2:
            l1 = f1.readlines()
            l2 = f2.readlines()
            self.assertEqual(l1, l2)

        os.unlink(outf)

    def test_sub_gap(self):
        flog1 = self.test_flog1
        flog2 = self.test_flog2
        outf = flog1 + ".rfy.txt"

        unify_log(flog2, flog1)
        with open(flog2, "r") as f1, open(outf, "r") as f2:
            l1 = f1.readlines()
            l2 = f2.readlines()
            self.assertEqual(l1, l2)

        os.unlink(outf)

#---------------------------------end unit-test-------------------------------#


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print "Usage:\n\t%s reference_log_file1 rectify_log_file2\n" %(sys.argv[0])

        #do unit-test
        unittest.main()
        exit(0)
    
    else:
        fref = sys.argv[1]
        frfy = sys.argv[2]  

        unify_log(fref, frfy)

#end if
