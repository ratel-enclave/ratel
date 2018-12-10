$benchnum  = '471';
$benchname = 'omnetpp';
$exename   = 'omnetpp';
$benchlang = 'CXX';
$need_math = 'yes';
$reltol = 0.00001;
$abstol = 0.000001;
@base_exe  = ($exename);
$bench_flags = '-I. -Iomnet_include -Ilibs/envir';

@sources=qw(
          EtherAppCli.cc EtherAppCli_n.cc EtherAppSrv.cc EtherAppSrv_n.cc EtherApp_m.cc EtherBus.cc EtherBus_n.cc EtherCtrl_m.cc EtherEncap.cc EtherEncap_n.cc EtherFrame_m.cc EtherHost_n.cc EtherHub.cc EtherHub_n.cc EtherLLC.cc EtherLLC_n.cc EtherMAC.cc EtherMAC_n.cc EtherSwitch_n.cc LargeNet_n.cc MACAddress.cc MACAddress_m.cc MACRelayUnitBase.cc MACRelayUnitNP.cc MACRelayUnitNP_n.cc MACRelayUnitPP.cc MACRelayUnitPP_n.cc MACRelayUnit_n.cc Networks_n.cc eth-index_n.cc utils.cc
	libs/cmdenv/cmdenv.cc libs/cmdenv/enumstr.cc 
	libs/cmdenv/heap.cc 
	libs/envir/akoutvectormgr.cc libs/envir/args.cc libs/envir/cenvir.cc libs/envir/cinifile.cc libs/envir/filemgrs.cc libs/envir/main.cc libs/envir/omnetapp.cc libs/envir/patmatch.cc libs/envir/platdep.cc libs/envir/seeds.cc libs/envir/slaveapp.cc libs/envir/speedmtr.cc 
	libs/sim/carray.cc libs/sim/cexception.cc libs/sim/cmessage.cc libs/sim/cpar.cc libs/sim/ctypes.cc libs/sim/task.cc 
	libs/sim/cchannel.cc libs/sim/cfsm.cc libs/sim/cmodule.cc libs/sim/cpsquare.cc libs/sim/cvarhist.cc libs/sim/util.cc 
	libs/sim/ccoroutine.cc libs/sim/cgate.cc libs/sim/cmsgheap.cc libs/sim/cqueue.cc libs/sim/cwatch.cc 
	libs/sim/cdensity.cc libs/sim/chead.cc libs/sim/cnetmod.cc libs/sim/csimul.cc libs/sim/distrib.cc 
	libs/sim/cdetect.cc libs/sim/chist.cc libs/sim/cobject.cc libs/sim/cstat.cc libs/sim/errmsg.cc 
	libs/sim/cdispstr.cc libs/sim/cksplit.cc libs/sim/coutvect.cc libs/sim/cstruct.cc libs/sim/onstartup.cc 
	libs/sim/cenum.cc libs/sim/cllist.cc libs/sim/cpacket.cc libs/sim/ctopo.cc libs/sim/random.cc 
	libs/sim/std/netpack.cc
        libs/spec/spec_qsort.cc

 );

sub invoke {
	my ($me) = @_;
	my $name;
 	my @rc;
	my $exe = $me->exe_file;

	for ($me->input_files_base) {
		push @rc, { 'command' => $exe,
			     'args'    => [ $_ ],
			     'output'  => "omnetpp.log",
			     'error'   => "omnetpp.err",
			    };
        }
        @rc;
}
1;
