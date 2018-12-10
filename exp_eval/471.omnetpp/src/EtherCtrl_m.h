//
// Generated file, do not edit! Created by opp_msgc.
//

#ifndef ETHERCTRL_M_H_
#define ETHERCTRL_M_H_

#include <omnetpp.h>
// cplusplus {{ ... }} section:

#include "Ethernet.h"
#include "MACAddress.h"
#include "cmessage30.h"
// end cplusplus


enum EtherMessageKind {
    JAM_SIGNAL = 2000,
    ETH_FRAME = 2001,
    ETH_PAUSE = 2002,
    ETHCTRL_DATA = 2003,
    ETHCTRL_REGISTER_DSAP = 2004,
    ETHCTRL_DEREGISTER_DSAP = 2005,
    ETHCTRL_SENDPAUSE = 2006
};

enum EtherType {
    ETHERTYPE_IP = 0x0800,
    ETHERTYPE_ARP = 0x0806,
    ETHERTYPE_RARP = 0x8035
};

enum SAPCode {
    SAP_IBM_SNA = 0x04,
    SAP_IP = 0x06,
    SAP_3COM = 0x80,
    SAP_SNAP = 0xAA,
    SAP_BANYAN = 0xBC,
    SAP_NOVELL_IPX = 0xE0,
    SAP_LAN_MANAGER = 0xF4,
    SAP_CLNS = 0xFE
};

class EtherCtrl : public cPolymorphic
{
  protected:
    MACAddress src;
    MACAddress dest;
    int etherType;
    int ssap;
    int dsap;
    int pauseUnits;
  public:
    EtherCtrl();
    EtherCtrl(const EtherCtrl& other);
    virtual ~EtherCtrl();
    EtherCtrl& operator=(const EtherCtrl& other);

    // field getter/setter methods
    virtual MACAddress& getSrc();
    virtual void setSrc(const MACAddress& src);
    virtual MACAddress& getDest();
    virtual void setDest(const MACAddress& dest);
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
    virtual int getSsap() const;
    virtual void setSsap(int ssap);
    virtual int getDsap() const;
    virtual void setDsap(int dsap);
    virtual int getPauseUnits() const;
    virtual void setPauseUnits(int pauseUnits);
};

#endif // ETHERCTRL_M_H_
