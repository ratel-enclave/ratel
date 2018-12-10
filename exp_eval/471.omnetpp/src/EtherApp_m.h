//
// Generated file, do not edit! Created by opp_msgc.
//

#ifndef ETHERAPP_M_H_
#define ETHERAPP_M_H_

#include <omnetpp.h>
// cplusplus {{ ... }} section:

#include "cmessage30.h"

#define ETHERAPP_CLI_SAP  0xf0
#define ETHERAPP_SRV_SAP  0xf1
// end cplusplus


class EtherAppReq : public cMessage30
{
  protected:
    long requestId;
    long responseBytes;
  public:
    EtherAppReq(const char *name=NULL, int kind=0);
    EtherAppReq(const EtherAppReq& other);
    virtual ~EtherAppReq();
    EtherAppReq& operator=(const EtherAppReq& other);
    virtual cObject *dup() const {return new EtherAppReq(*this);}

    // field getter/setter methods
    virtual long getRequestId() const;
    virtual void setRequestId(long requestId);
    virtual long getResponseBytes() const;
    virtual void setResponseBytes(long responseBytes);
};

class EtherAppResp : public cMessage30
{
  protected:
    int requestId;
    int numFrames;
  public:
    EtherAppResp(const char *name=NULL, int kind=0);
    EtherAppResp(const EtherAppResp& other);
    virtual ~EtherAppResp();
    EtherAppResp& operator=(const EtherAppResp& other);
    virtual cObject *dup() const {return new EtherAppResp(*this);}

    // field getter/setter methods
    virtual int getRequestId() const;
    virtual void setRequestId(int requestId);
    virtual int getNumFrames() const;
    virtual void setNumFrames(int numFrames);
};

#endif // ETHERAPP_M_H_
