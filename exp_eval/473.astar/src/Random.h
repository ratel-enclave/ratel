

#ifndef Random_H
#define Random_H


#include "Types.h"

//namespace randomfunctions
//{

rnumt myrandom();
rnumt myrandom(rnumt lo, rnumt hi);
i32 myrandom(i32 lo, i32 hi);
i32 random1(i32 max);
inline i32 irandom(int lo, int hi) { return myrandom((i32)lo,(i32)hi); }

void initrandom();
//};


#endif
