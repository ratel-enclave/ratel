//
// Generated file, do not edit! Created by opp_msgc.
//

#ifndef ETHERFRAME_M_H_
#define ETHERFRAME_M_H_

#include <omnetpp.h>
// cplusplus {{ ... }} section:

#include "utils.h"
#include "Ethernet.h"
#include "MACAddress.h"
#include "EtherCtrl_m.h" 
// end cplusplus


class EtherFrame : public cMessage
{
  protected:
    MACAddress dest;
    MACAddress src;
  public:
    EtherFrame(const char *name=NULL, int kind=0);
    EtherFrame(const EtherFrame& other);
    virtual ~EtherFrame();
    EtherFrame& operator=(const EtherFrame& other);
    virtual cObject *dup() const {return new EtherFrame(*this);}

    // field getter/setter methods
    virtual MACAddress& getDest();
    virtual void setDest(const MACAddress& dest);
    virtual MACAddress& getSrc();
    virtual void setSrc(const MACAddress& src);
};

class EthernetIIFrame : public EtherFrame
{
  protected:
    int etherType;
  public:
    EthernetIIFrame(const char *name=NULL, int kind=0);
    EthernetIIFrame(const EthernetIIFrame& other);
    virtual ~EthernetIIFrame();
    EthernetIIFrame& operator=(const EthernetIIFrame& other);
    virtual cObject *dup() const {return new EthernetIIFrame(*this);}

    // field getter/setter methods
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
};

class EtherFrameWithLLC : public EtherFrame
{
  protected:
    int ssap;
    int dsap;
    int control;
  public:
    EtherFrameWithLLC(const char *name=NULL, int kind=0);
    EtherFrameWithLLC(const EtherFrameWithLLC& other);
    virtual ~EtherFrameWithLLC();
    EtherFrameWithLLC& operator=(const EtherFrameWithLLC& other);
    virtual cObject *dup() const {return new EtherFrameWithLLC(*this);}

    // field getter/setter methods
    virtual int getSsap() const;
    virtual void setSsap(int ssap);
    virtual int getDsap() const;
    virtual void setDsap(int dsap);
    virtual int getControl() const;
    virtual void setControl(int control);
};

class EtherFrameWithSNAP : public EtherFrame
{
  protected:
    long orgCode;
    int localcode;
  public:
    EtherFrameWithSNAP(const char *name=NULL, int kind=0);
    EtherFrameWithSNAP(const EtherFrameWithSNAP& other);
    virtual ~EtherFrameWithSNAP();
    EtherFrameWithSNAP& operator=(const EtherFrameWithSNAP& other);
    virtual cObject *dup() const {return new EtherFrameWithSNAP(*this);}

    // field getter/setter methods
    virtual long getOrgCode() const;
    virtual void setOrgCode(long orgCode);
    virtual int getLocalcode() const;
    virtual void setLocalcode(int localcode);
};

class EtherPauseFrame : public EtherFrame
{
  protected:
    int pauseTime;
  public:
    EtherPauseFrame(const char *name=NULL, int kind=0);
    EtherPauseFrame(const EtherPauseFrame& other);
    virtual ~EtherPauseFrame();
    EtherPauseFrame& operator=(const EtherPauseFrame& other);
    virtual cObject *dup() const {return new EtherPauseFrame(*this);}

    // field getter/setter methods
    virtual int getPauseTime() const;
    virtual void setPauseTime(int pauseTime);
};

class EtherAutoconfig : public cMessage
{
  protected:
    double txrate;
    bool halfDuplex;
  public:
    EtherAutoconfig(const char *name=NULL, int kind=0);
    EtherAutoconfig(const EtherAutoconfig& other);
    virtual ~EtherAutoconfig();
    EtherAutoconfig& operator=(const EtherAutoconfig& other);
    virtual cObject *dup() const {return new EtherAutoconfig(*this);}

    // field getter/setter methods
    virtual double getTxrate() const;
    virtual void setTxrate(double txrate);
    virtual bool getHalfDuplex() const;
    virtual void setHalfDuplex(bool halfDuplex);
};

#endif // ETHERFRAME_M_H_
