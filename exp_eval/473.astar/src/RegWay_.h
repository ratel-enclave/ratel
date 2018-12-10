

#ifndef RegWay_h
#define RegWay_h

#include "RegMng_.h"


typedef flexarray <regobjpt> regboundart;

class regwayobj
{
  regboundart bound1arp,bound2arp;
  i32 filltact;
  i32 regfillnum;
  regmngobjpt regmngp;
  bool flend;
  regobjpt rend;
  regobjpt rstart;

  virtual bool isaddtobound(regobjpt initialregionp, regobjpt regionp);
  void addtobound(regboundart& boundarp, regobjpt regionp);
  void makebound2(regboundart& b1arp, regboundart& b2arp);

  bool fill(regobjpt rstart, regobjpt rend);
  i32 getway(regobjpt rend, regobjppt& wayar);

  public:

  bool createway(regobjpt rstart, regobjpt rfinish, regobjppt& wayar, i32& waylength);
  virtual void create(regmngobjpt regmngpin);
  virtual void destroy();
};


#endif


