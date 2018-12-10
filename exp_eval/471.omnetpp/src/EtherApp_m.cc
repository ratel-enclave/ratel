//
// Generated file, do not edit! Created by opp_msgc.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include "EtherApp_m.h"

Register_Class(EtherAppReq);

EtherAppReq::EtherAppReq(const char *name, int kind) : cMessage30(name,kind)
{
    unsigned int i;
    this->requestId = 0;
    this->responseBytes = 0;
}

EtherAppReq::EtherAppReq(const EtherAppReq& other) : cMessage30()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherAppReq::~EtherAppReq()
{
}

EtherAppReq& EtherAppReq::operator=(const EtherAppReq& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage30::operator=(other);
    this->requestId = other.requestId;
    this->responseBytes = other.responseBytes;
    return *this;
}

long EtherAppReq::getRequestId() const
{
    return requestId;
}

void EtherAppReq::setRequestId(long requestId)
{
    this->requestId = requestId;
}

long EtherAppReq::getResponseBytes() const
{
    return responseBytes;
}

void EtherAppReq::setResponseBytes(long responseBytes)
{
    this->responseBytes = responseBytes;
}

class EtherAppReqDescriptor : public cStructDescriptor
{
  public:
    EtherAppReqDescriptor(void *p=NULL);
    virtual ~EtherAppReqDescriptor();
    EtherAppReqDescriptor& operator=(const EtherAppReqDescriptor& other);
    virtual cObject *dup() const {return new EtherAppReqDescriptor(*this);}

    virtual int getFieldCount();
    virtual const char *getFieldName(int field);
    virtual int getFieldType(int field);
    virtual const char *getFieldTypeString(int field);
    virtual const char *getFieldEnumName(int field);
    virtual int getArraySize(int field);

    virtual bool getFieldAsString(int field, int i, char *resultbuf, int bufsize);
    virtual bool setFieldAsString(int field, int i, const char *value);

    virtual const char *getFieldStructName(int field);
    virtual void *getFieldStructPointer(int field, int i);
    virtual sFieldWrapper *getFieldWrapper(int field, int i);
};

Register_Class(EtherAppReqDescriptor);

EtherAppReqDescriptor::EtherAppReqDescriptor(void *p) : cStructDescriptor(p)
{
}

EtherAppReqDescriptor::~EtherAppReqDescriptor()
{
}

int EtherAppReqDescriptor::getFieldCount()
{
    return 2;
}

int EtherAppReqDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_BASIC;
        case 1: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherAppReqDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "requestId";
        case 1: return "responseBytes";
        default: return NULL;
    }
}

const char *EtherAppReqDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "long";
        case 1: return "long";
        default: return NULL;
    }
}

const char *EtherAppReqDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int EtherAppReqDescriptor::getArraySize(int field)
{
    EtherAppReq *pp = (EtherAppReq *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherAppReqDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    EtherAppReq *pp = (EtherAppReq *)p;
    switch (field) {
        case 0: long2string(pp->getRequestId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getResponseBytes(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherAppReqDescriptor::setFieldAsString(int field, int i, const char *value)
{
    EtherAppReq *pp = (EtherAppReq *)p;
    switch (field) {
        case 0: pp->setRequestId(string2long(value)); return true;
        case 1: pp->setResponseBytes(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherAppReqDescriptor::getFieldStructName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

void *EtherAppReqDescriptor::getFieldStructPointer(int field, int i)
{
    EtherAppReq *pp = (EtherAppReq *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherAppReqDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EtherAppResp);

EtherAppResp::EtherAppResp(const char *name, int kind) : cMessage30(name,kind)
{
    unsigned int i;
    this->requestId = 0;
    this->numFrames = 0;
}

EtherAppResp::EtherAppResp(const EtherAppResp& other) : cMessage30()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherAppResp::~EtherAppResp()
{
}

EtherAppResp& EtherAppResp::operator=(const EtherAppResp& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage30::operator=(other);
    this->requestId = other.requestId;
    this->numFrames = other.numFrames;
    return *this;
}

int EtherAppResp::getRequestId() const
{
    return requestId;
}

void EtherAppResp::setRequestId(int requestId)
{
    this->requestId = requestId;
}

int EtherAppResp::getNumFrames() const
{
    return numFrames;
}

void EtherAppResp::setNumFrames(int numFrames)
{
    this->numFrames = numFrames;
}

class EtherAppRespDescriptor : public cStructDescriptor
{
  public:
    EtherAppRespDescriptor(void *p=NULL);
    virtual ~EtherAppRespDescriptor();
    EtherAppRespDescriptor& operator=(const EtherAppRespDescriptor& other);
    virtual cObject *dup() const {return new EtherAppRespDescriptor(*this);}

    virtual int getFieldCount();
    virtual const char *getFieldName(int field);
    virtual int getFieldType(int field);
    virtual const char *getFieldTypeString(int field);
    virtual const char *getFieldEnumName(int field);
    virtual int getArraySize(int field);

    virtual bool getFieldAsString(int field, int i, char *resultbuf, int bufsize);
    virtual bool setFieldAsString(int field, int i, const char *value);

    virtual const char *getFieldStructName(int field);
    virtual void *getFieldStructPointer(int field, int i);
    virtual sFieldWrapper *getFieldWrapper(int field, int i);
};

Register_Class(EtherAppRespDescriptor);

EtherAppRespDescriptor::EtherAppRespDescriptor(void *p) : cStructDescriptor(p)
{
}

EtherAppRespDescriptor::~EtherAppRespDescriptor()
{
}

int EtherAppRespDescriptor::getFieldCount()
{
    return 2;
}

int EtherAppRespDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_BASIC;
        case 1: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherAppRespDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "requestId";
        case 1: return "numFrames";
        default: return NULL;
    }
}

const char *EtherAppRespDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *EtherAppRespDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int EtherAppRespDescriptor::getArraySize(int field)
{
    EtherAppResp *pp = (EtherAppResp *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherAppRespDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    EtherAppResp *pp = (EtherAppResp *)p;
    switch (field) {
        case 0: long2string(pp->getRequestId(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getNumFrames(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherAppRespDescriptor::setFieldAsString(int field, int i, const char *value)
{
    EtherAppResp *pp = (EtherAppResp *)p;
    switch (field) {
        case 0: pp->setRequestId(string2long(value)); return true;
        case 1: pp->setNumFrames(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherAppRespDescriptor::getFieldStructName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

void *EtherAppRespDescriptor::getFieldStructPointer(int field, int i)
{
    EtherAppResp *pp = (EtherAppResp *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherAppRespDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

