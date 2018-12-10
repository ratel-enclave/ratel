#ifndef _SPECQSORTH_
#define _SPECQSORTH_

static void spec_swap(void *x, void *y, std::size_t l);

static void spec_sort(char *array, std::size_t size, int begin, int end, int (*cmp)(const void*,const void*));

void spec_qsort(void *array, std::size_t nitems, std::size_t size, int (*cmp)(const void*,const void*));

#endif
