/********************************************************************************  
  This module's spec_qsort is used to eliminate nondeterministic cross-platform 
  behavior for elements with identical values when one using a system's stdlib
  qsort.  The C standard says: "If two elements compare as equal, their order in 
  the resulting sorted array is unspecified" -- i.e. platforms can differ.

  By including a custom qsort along with this benchmark, qsort results
  will be identical no matter what platform it is compiled on.

  This code implements a generic qsort algorithm, and chooses the pivot to be
  the second element of the array (or array segment).  Arguments are identical 
  to those of qsort in the standard library.
*********************************************************************************/

#include <cstdlib>
#include "spec_qsort.h"

static void spec_swap(void *x, void *y, std::size_t l) {
   /* Swap elements of an array byte by byte.  Note that a version specialized to
      operate on a specific data type (e.g. int) would be faster. */
   char *a = (char *)x, *b = (char *)y, c;
   while(l--) {
      c = *a;
      *a++ = *b;
      *b++ = c;
   }
}


static void spec_sort(char *array, std::size_t size, int begin, int end, int (*cmp)(const void*,const void*)) {
   /* Generic qsort algorithm */
   if (end > begin) {
      void *pivot = array + begin;
      int l = begin + size;
      int r = end;
      while(l < r) {
         if (cmp(array+l,pivot) <= 0) {
            l += size;
         } else {
            r -= size;
            spec_swap(array+l, array+r, size); 
         }
      }
      l -= size;
      spec_swap(array+begin, array+l, size);
      spec_sort(array, size, begin, l, cmp);
      spec_sort(array, size, r, end, cmp);
   }
}


void spec_qsort(void *array, std::size_t nitems, std::size_t size, int (*cmp)(const void*,const void*)) {
   spec_sort((char *)array, size, 0, (nitems-1)*size, cmp);
} 
