//
// Generated file, do not edit! Created by opp_msgc.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include "EtherFrame_m.h"

Register_Class(EtherFrame);

EtherFrame::EtherFrame(const char *name, int kind) : cMessage(name,kind)
{
    unsigned int i;
}

EtherFrame::EtherFrame(const EtherFrame& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherFrame::~EtherFrame()
{
}

EtherFrame& EtherFrame::operator=(const EtherFrame& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->dest = other.dest;
    this->src = other.src;
    return *this;
}

MACAddress& EtherFrame::getDest()
{
    return dest;
}

void EtherFrame::setDest(const MACAddress& dest)
{
    this->dest = dest;
}

MACAddress& EtherFrame::getSrc()
{
    return src;
}

void EtherFrame::setSrc(const MACAddress& src)
{
    this->src = src;
}

class EtherFrameDescriptor : public cStructDescriptor
{
  public:
    EtherFrameDescriptor(void *p=NULL);
    virtual ~EtherFrameDescriptor();
    EtherFrameDescriptor& operator=(const EtherFrameDescriptor& other);
    virtual cObject *dup() const {return new EtherFrameDescriptor(*this);}

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

Register_Class(EtherFrameDescriptor);

EtherFrameDescriptor::EtherFrameDescriptor(void *p) : cStructDescriptor(p)
{
}

EtherFrameDescriptor::~EtherFrameDescriptor()
{
}

int EtherFrameDescriptor::getFieldCount()
{
    return 2;
}

int EtherFrameDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_STRUCT;
        case 1: return FT_STRUCT;
        default: return FT_INVALID;
    }
}

const char *EtherFrameDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "dest";
        case 1: return "src";
        default: return NULL;
    }
}

const char *EtherFrameDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "MACAddress";
        default: return NULL;
    }
}

const char *EtherFrameDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int EtherFrameDescriptor::getArraySize(int field)
{
    EtherFrame *pp = (EtherFrame *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherFrameDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    EtherFrame *pp = (EtherFrame *)p;
    switch (field) {
        case 0: return false;
        case 1: return false;
        default: return false;
    }
}

bool EtherFrameDescriptor::setFieldAsString(int field, int i, const char *value)
{
    EtherFrame *pp = (EtherFrame *)p;
    switch (field) {
        case 0: return false;
        case 1: return false;
        default: return false;
    }
}

const char *EtherFrameDescriptor::getFieldStructName(int field)
{
    switch (field) {
        case 0: return "MACAddress"; break;
        case 1: return "MACAddress"; break;
        default: return NULL;
    }
}

void *EtherFrameDescriptor::getFieldStructPointer(int field, int i)
{
    EtherFrame *pp = (EtherFrame *)p;
    switch (field) {
        case 0: return (void *)&pp->getDest(); break;
        case 1: return (void *)&pp->getSrc(); break;
        default: return NULL;
    }
}

sFieldWrapper *EtherFrameDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EthernetIIFrame);

EthernetIIFrame::EthernetIIFrame(const char *name, int kind) : EtherFrame(name,kind)
{
    unsigned int i;
    this->etherType = 0;
}

EthernetIIFrame::EthernetIIFrame(const EthernetIIFrame& other) : EtherFrame()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EthernetIIFrame::~EthernetIIFrame()
{
}

EthernetIIFrame& EthernetIIFrame::operator=(const EthernetIIFrame& other)
{
    if (this==&other) return *this;
    unsigned int i;
    EtherFrame::operator=(other);
    this->etherType = other.etherType;
    return *this;
}

int EthernetIIFrame::getEtherType() const
{
    return etherType;
}

void EthernetIIFrame::setEtherType(int etherType)
{
    this->etherType = etherType;
}

class EthernetIIFrameDescriptor : public EtherFrameDescriptor
{
  public:
    EthernetIIFrameDescriptor(void *p=NULL);
    virtual ~EthernetIIFrameDescriptor();
    EthernetIIFrameDescriptor& operator=(const EthernetIIFrameDescriptor& other);
    virtual cObject *dup() const {return new EthernetIIFrameDescriptor(*this);}

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

Register_Class(EthernetIIFrameDescriptor);

EthernetIIFrameDescriptor::EthernetIIFrameDescriptor(void *p) : EtherFrameDescriptor(p)
{
}

EthernetIIFrameDescriptor::~EthernetIIFrameDescriptor()
{
}

int EthernetIIFrameDescriptor::getFieldCount()
{
    return EtherFrameDescriptor::getFieldCount() + 1;
}

int EthernetIIFrameDescriptor::getFieldType(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldType(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EthernetIIFrameDescriptor::getFieldName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "etherType";
        default: return NULL;
    }
}

const char *EthernetIIFrameDescriptor::getFieldTypeString(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldTypeString(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *EthernetIIFrameDescriptor::getFieldEnumName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldEnumName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

int EthernetIIFrameDescriptor::getArraySize(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getArraySize(field);
    field -= EtherFrameDescriptor::getFieldCount();
    EthernetIIFrame *pp = (EthernetIIFrame *)p;
    switch (field) {
        default: return 0;
    }
}

bool EthernetIIFrameDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldAsString(field,i,resultbuf,bufsize);
    field -= EtherFrameDescriptor::getFieldCount();
    EthernetIIFrame *pp = (EthernetIIFrame *)p;
    switch (field) {
        case 0: long2string(pp->getEtherType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EthernetIIFrameDescriptor::setFieldAsString(int field, int i, const char *value)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::setFieldAsString(field,i,value);
    field -= EtherFrameDescriptor::getFieldCount();
    EthernetIIFrame *pp = (EthernetIIFrame *)p;
    switch (field) {
        case 0: pp->setEtherType(string2long(value)); return true;
        default: return false;
    }
}

const char *EthernetIIFrameDescriptor::getFieldStructName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

void *EthernetIIFrameDescriptor::getFieldStructPointer(int field, int i)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructPointer(field, i);
    field -= EtherFrameDescriptor::getFieldCount();
    EthernetIIFrame *pp = (EthernetIIFrame *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EthernetIIFrameDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EtherFrameWithLLC);

EtherFrameWithLLC::EtherFrameWithLLC(const char *name, int kind) : EtherFrame(name,kind)
{
    unsigned int i;
    this->ssap = 0;
    this->dsap = 0;
    this->control = 0;
}

EtherFrameWithLLC::EtherFrameWithLLC(const EtherFrameWithLLC& other) : EtherFrame()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherFrameWithLLC::~EtherFrameWithLLC()
{
}

EtherFrameWithLLC& EtherFrameWithLLC::operator=(const EtherFrameWithLLC& other)
{
    if (this==&other) return *this;
    unsigned int i;
    EtherFrame::operator=(other);
    this->ssap = other.ssap;
    this->dsap = other.dsap;
    this->control = other.control;
    return *this;
}

int EtherFrameWithLLC::getSsap() const
{
    return ssap;
}

void EtherFrameWithLLC::setSsap(int ssap)
{
    this->ssap = ssap;
}

int EtherFrameWithLLC::getDsap() const
{
    return dsap;
}

void EtherFrameWithLLC::setDsap(int dsap)
{
    this->dsap = dsap;
}

int EtherFrameWithLLC::getControl() const
{
    return control;
}

void EtherFrameWithLLC::setControl(int control)
{
    this->control = control;
}

class EtherFrameWithLLCDescriptor : public EtherFrameDescriptor
{
  public:
    EtherFrameWithLLCDescriptor(void *p=NULL);
    virtual ~EtherFrameWithLLCDescriptor();
    EtherFrameWithLLCDescriptor& operator=(const EtherFrameWithLLCDescriptor& other);
    virtual cObject *dup() const {return new EtherFrameWithLLCDescriptor(*this);}

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

Register_Class(EtherFrameWithLLCDescriptor);

EtherFrameWithLLCDescriptor::EtherFrameWithLLCDescriptor(void *p) : EtherFrameDescriptor(p)
{
}

EtherFrameWithLLCDescriptor::~EtherFrameWithLLCDescriptor()
{
}

int EtherFrameWithLLCDescriptor::getFieldCount()
{
    return EtherFrameDescriptor::getFieldCount() + 3;
}

int EtherFrameWithLLCDescriptor::getFieldType(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldType(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return FT_BASIC;
        case 1: return FT_BASIC;
        case 2: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherFrameWithLLCDescriptor::getFieldName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "ssap";
        case 1: return "dsap";
        case 2: return "control";
        default: return NULL;
    }
}

const char *EtherFrameWithLLCDescriptor::getFieldTypeString(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldTypeString(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        case 2: return "int";
        default: return NULL;
    }
}

const char *EtherFrameWithLLCDescriptor::getFieldEnumName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldEnumName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

int EtherFrameWithLLCDescriptor::getArraySize(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getArraySize(field);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithLLC *pp = (EtherFrameWithLLC *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherFrameWithLLCDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldAsString(field,i,resultbuf,bufsize);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithLLC *pp = (EtherFrameWithLLC *)p;
    switch (field) {
        case 0: long2string(pp->getSsap(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDsap(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getControl(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherFrameWithLLCDescriptor::setFieldAsString(int field, int i, const char *value)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::setFieldAsString(field,i,value);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithLLC *pp = (EtherFrameWithLLC *)p;
    switch (field) {
        case 0: pp->setSsap(string2long(value)); return true;
        case 1: pp->setDsap(string2long(value)); return true;
        case 2: pp->setControl(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherFrameWithLLCDescriptor::getFieldStructName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

void *EtherFrameWithLLCDescriptor::getFieldStructPointer(int field, int i)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructPointer(field, i);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithLLC *pp = (EtherFrameWithLLC *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherFrameWithLLCDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EtherFrameWithSNAP);

EtherFrameWithSNAP::EtherFrameWithSNAP(const char *name, int kind) : EtherFrame(name,kind)
{
    unsigned int i;
    this->orgCode = 0;
    this->localcode = 0;
}

EtherFrameWithSNAP::EtherFrameWithSNAP(const EtherFrameWithSNAP& other) : EtherFrame()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherFrameWithSNAP::~EtherFrameWithSNAP()
{
}

EtherFrameWithSNAP& EtherFrameWithSNAP::operator=(const EtherFrameWithSNAP& other)
{
    if (this==&other) return *this;
    unsigned int i;
    EtherFrame::operator=(other);
    this->orgCode = other.orgCode;
    this->localcode = other.localcode;
    return *this;
}

long EtherFrameWithSNAP::getOrgCode() const
{
    return orgCode;
}

void EtherFrameWithSNAP::setOrgCode(long orgCode)
{
    this->orgCode = orgCode;
}

int EtherFrameWithSNAP::getLocalcode() const
{
    return localcode;
}

void EtherFrameWithSNAP::setLocalcode(int localcode)
{
    this->localcode = localcode;
}

class EtherFrameWithSNAPDescriptor : public EtherFrameDescriptor
{
  public:
    EtherFrameWithSNAPDescriptor(void *p=NULL);
    virtual ~EtherFrameWithSNAPDescriptor();
    EtherFrameWithSNAPDescriptor& operator=(const EtherFrameWithSNAPDescriptor& other);
    virtual cObject *dup() const {return new EtherFrameWithSNAPDescriptor(*this);}

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

Register_Class(EtherFrameWithSNAPDescriptor);

EtherFrameWithSNAPDescriptor::EtherFrameWithSNAPDescriptor(void *p) : EtherFrameDescriptor(p)
{
}

EtherFrameWithSNAPDescriptor::~EtherFrameWithSNAPDescriptor()
{
}

int EtherFrameWithSNAPDescriptor::getFieldCount()
{
    return EtherFrameDescriptor::getFieldCount() + 2;
}

int EtherFrameWithSNAPDescriptor::getFieldType(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldType(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return FT_BASIC;
        case 1: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherFrameWithSNAPDescriptor::getFieldName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "orgCode";
        case 1: return "localcode";
        default: return NULL;
    }
}

const char *EtherFrameWithSNAPDescriptor::getFieldTypeString(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldTypeString(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "long";
        case 1: return "int";
        default: return NULL;
    }
}

const char *EtherFrameWithSNAPDescriptor::getFieldEnumName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldEnumName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

int EtherFrameWithSNAPDescriptor::getArraySize(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getArraySize(field);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithSNAP *pp = (EtherFrameWithSNAP *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherFrameWithSNAPDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldAsString(field,i,resultbuf,bufsize);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithSNAP *pp = (EtherFrameWithSNAP *)p;
    switch (field) {
        case 0: long2string(pp->getOrgCode(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getLocalcode(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherFrameWithSNAPDescriptor::setFieldAsString(int field, int i, const char *value)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::setFieldAsString(field,i,value);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithSNAP *pp = (EtherFrameWithSNAP *)p;
    switch (field) {
        case 0: pp->setOrgCode(string2long(value)); return true;
        case 1: pp->setLocalcode(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherFrameWithSNAPDescriptor::getFieldStructName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

void *EtherFrameWithSNAPDescriptor::getFieldStructPointer(int field, int i)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructPointer(field, i);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherFrameWithSNAP *pp = (EtherFrameWithSNAP *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherFrameWithSNAPDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EtherPauseFrame);

EtherPauseFrame::EtherPauseFrame(const char *name, int kind) : EtherFrame(name,kind)
{
    unsigned int i;
    this->pauseTime = 0;
}

EtherPauseFrame::EtherPauseFrame(const EtherPauseFrame& other) : EtherFrame()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherPauseFrame::~EtherPauseFrame()
{
}

EtherPauseFrame& EtherPauseFrame::operator=(const EtherPauseFrame& other)
{
    if (this==&other) return *this;
    unsigned int i;
    EtherFrame::operator=(other);
    this->pauseTime = other.pauseTime;
    return *this;
}

int EtherPauseFrame::getPauseTime() const
{
    return pauseTime;
}

void EtherPauseFrame::setPauseTime(int pauseTime)
{
    this->pauseTime = pauseTime;
}

class EtherPauseFrameDescriptor : public EtherFrameDescriptor
{
  public:
    EtherPauseFrameDescriptor(void *p=NULL);
    virtual ~EtherPauseFrameDescriptor();
    EtherPauseFrameDescriptor& operator=(const EtherPauseFrameDescriptor& other);
    virtual cObject *dup() const {return new EtherPauseFrameDescriptor(*this);}

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

Register_Class(EtherPauseFrameDescriptor);

EtherPauseFrameDescriptor::EtherPauseFrameDescriptor(void *p) : EtherFrameDescriptor(p)
{
}

EtherPauseFrameDescriptor::~EtherPauseFrameDescriptor()
{
}

int EtherPauseFrameDescriptor::getFieldCount()
{
    return EtherFrameDescriptor::getFieldCount() + 1;
}

int EtherPauseFrameDescriptor::getFieldType(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldType(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherPauseFrameDescriptor::getFieldName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "pauseTime";
        default: return NULL;
    }
}

const char *EtherPauseFrameDescriptor::getFieldTypeString(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldTypeString(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *EtherPauseFrameDescriptor::getFieldEnumName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldEnumName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

int EtherPauseFrameDescriptor::getArraySize(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getArraySize(field);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherPauseFrame *pp = (EtherPauseFrame *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherPauseFrameDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldAsString(field,i,resultbuf,bufsize);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherPauseFrame *pp = (EtherPauseFrame *)p;
    switch (field) {
        case 0: long2string(pp->getPauseTime(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherPauseFrameDescriptor::setFieldAsString(int field, int i, const char *value)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::setFieldAsString(field,i,value);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherPauseFrame *pp = (EtherPauseFrame *)p;
    switch (field) {
        case 0: pp->setPauseTime(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherPauseFrameDescriptor::getFieldStructName(int field)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructName(field);
    field -= EtherFrameDescriptor::getFieldCount();
    switch (field) {
        default: return NULL;
    }
}

void *EtherPauseFrameDescriptor::getFieldStructPointer(int field, int i)
{
    if (field < EtherFrameDescriptor::getFieldCount())
        return EtherFrameDescriptor::getFieldStructPointer(field, i);
    field -= EtherFrameDescriptor::getFieldCount();
    EtherPauseFrame *pp = (EtherPauseFrame *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherPauseFrameDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

Register_Class(EtherAutoconfig);

EtherAutoconfig::EtherAutoconfig(const char *name, int kind) : cMessage(name,kind)
{
    unsigned int i;
    this->txrate = 0;
    this->halfDuplex = false;
}

EtherAutoconfig::EtherAutoconfig(const EtherAutoconfig& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

EtherAutoconfig::~EtherAutoconfig()
{
}

EtherAutoconfig& EtherAutoconfig::operator=(const EtherAutoconfig& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->txrate = other.txrate;
    this->halfDuplex = other.halfDuplex;
    return *this;
}

double EtherAutoconfig::getTxrate() const
{
    return txrate;
}

void EtherAutoconfig::setTxrate(double txrate)
{
    this->txrate = txrate;
}

bool EtherAutoconfig::getHalfDuplex() const
{
    return halfDuplex;
}

void EtherAutoconfig::setHalfDuplex(bool halfDuplex)
{
    this->halfDuplex = halfDuplex;
}

class EtherAutoconfigDescriptor : public cStructDescriptor
{
  public:
    EtherAutoconfigDescriptor(void *p=NULL);
    virtual ~EtherAutoconfigDescriptor();
    EtherAutoconfigDescriptor& operator=(const EtherAutoconfigDescriptor& other);
    virtual cObject *dup() const {return new EtherAutoconfigDescriptor(*this);}

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

Register_Class(EtherAutoconfigDescriptor);

EtherAutoconfigDescriptor::EtherAutoconfigDescriptor(void *p) : cStructDescriptor(p)
{
}

EtherAutoconfigDescriptor::~EtherAutoconfigDescriptor()
{
}

int EtherAutoconfigDescriptor::getFieldCount()
{
    return 2;
}

int EtherAutoconfigDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_BASIC;
        case 1: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherAutoconfigDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "txrate";
        case 1: return "halfDuplex";
        default: return NULL;
    }
}

const char *EtherAutoconfigDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "double";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *EtherAutoconfigDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int EtherAutoconfigDescriptor::getArraySize(int field)
{
    EtherAutoconfig *pp = (EtherAutoconfig *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherAutoconfigDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    EtherAutoconfig *pp = (EtherAutoconfig *)p;
    switch (field) {
        case 0: double2string(pp->getTxrate(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->getHalfDuplex(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherAutoconfigDescriptor::setFieldAsString(int field, int i, const char *value)
{
    EtherAutoconfig *pp = (EtherAutoconfig *)p;
    switch (field) {
        case 0: pp->setTxrate(string2double(value)); return true;
        case 1: pp->setHalfDuplex(string2bool(value)); return true;
        default: return false;
    }
}

const char *EtherAutoconfigDescriptor::getFieldStructName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

void *EtherAutoconfigDescriptor::getFieldStructPointer(int field, int i)
{
    EtherAutoconfig *pp = (EtherAutoconfig *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *EtherAutoconfigDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

