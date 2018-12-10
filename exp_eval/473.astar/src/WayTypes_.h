
#ifndef WayTypesH
#define WayTypesH


struct levelplacet
{
  i16 x,y;
  rnumt rx,ry;
  rnumt hiding;
};
typedef levelplacet* levelplacept;


struct createwayinfot
{
  rvectort startp;
  rvectort finishp;
  bool flcorrect;
};

struct wayinfot
{
  bool flexist;
  rvectorpt wayarp;
  i32 wayarsize;
  bool flcorrect;
};


#endif

