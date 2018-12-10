//
// Generated file, do not edit! Created by opp_msgc.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include "EtherCtrl_m.h"

static sEnumBuilder _EtherMessageKind( "EtherMessageKind",
    JAM_SIGNAL, "JAM_SIGNAL",
    ETH_FRAME, "ETH_FRAME",
    ETH_PAUSE, "ETH_PAUSE",
    ETHCTRL_DATA, "ETHCTRL_DATA",
    ETHCTRL_REGISTER_DSAP, "ETHCTRL_REGISTER_DSAP",
    ETHCTRL_DEREGISTER_DSAP, "ETHCTRL_DEREGISTER_DSAP",
    ETHCTRL_SENDPAUSE, "ETHCTRL_SENDPAUSE",
    0, NULL
);

static sEnumBuilder _EtherType( "EtherType",
    ETHERTYPE_IP, "ETHERTYPE_IP",
    ETHERTYPE_ARP, "ETHERTYPE_ARP",
    ETHERTYPE_RARP, "ETHERTYPE_RARP",
    0, NULL
);

static sEnumBuilder _SAPCode( "SAPCode",
    SAP_IBM_SNA, "SAP_IBM_SNA",
    SAP_IP, "SAP_IP",
    SAP_3COM, "SAP_3COM",
    SAP_SNAP, "SAP_SNAP",
    SAP_BANYAN, "SAP_BANYAN",
    SAP_NOVELL_IPX, "SAP_NOVELL_IPX",
    SAP_LAN_MANAGER, "SAP_LAN_MANAGER",
    SAP_CLNS, "SAP_CLNS",
    0, NULL
);

EtherCtrl::EtherCtrl() : cPolymorphic()
{
    unsigned int i;
    this->etherType = 0;
    this->ssap = 0;
    this->dsap = 0;
    this->pauseUnits = 0;
}

EtherCtrl::EtherCtrl(const EtherCtrl& other) : cPolymorphic()
{
    unsigned int i;
    operator=(other);
}

EtherCtrl::~EtherCtrl()
{
}

EtherCtrl& EtherCtrl::operator=(const EtherCtrl& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cPolymorphic::operator=(other);
    this->src = other.src;
    this->dest = other.dest;
    this->etherType = other.etherType;
    this->ssap = other.ssap;
    this->dsap = other.dsap;
    this->pauseUnits = other.pauseUnits;
    return *this;
}

MACAddress& EtherCtrl::getSrc()
{
    return src;
}

void EtherCtrl::setSrc(const MACAddress& src)
{
    this->src = src;
}

MACAddress& EtherCtrl::getDest()
{
    return dest;
}

void EtherCtrl::setDest(const MACAddress& dest)
{
    this->dest = dest;
}

int EtherCtrl::getEtherType() const
{
    return etherType;
}

void EtherCtrl::setEtherType(int etherType)
{
    this->etherType = etherType;
}

int EtherCtrl::getSsap() const
{
    return ssap;
}

void EtherCtrl::setSsap(int ssap)
{
    this->ssap = ssap;
}

int EtherCtrl::getDsap() const
{
    return dsap;
}

void EtherCtrl::setDsap(int dsap)
{
    this->dsap = dsap;
}

int EtherCtrl::getPauseUnits() const
{
    return pauseUnits;
}

void EtherCtrl::setPauseUnits(int pauseUnits)
{
    this->pauseUnits = pauseUnits;
}

class EtherCtrlDescriptor : public cStructDescriptor
{
  public:
    EtherCtrlDescriptor(void *p=NULL);
    virtual ~EtherCtrlDescriptor();
    EtherCtrlDescriptor& operator=(const EtherCtrlDescriptor& other);
    virtual cObject *dup() const {return new EtherCtrlDescriptor(*this);}

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

Register_Class(EtherCtrlDescriptor);

EtherCtrlDescriptor::EtherCtrlDescriptor(void *p) : cStructDescriptor(p)
{
}

EtherCtrlDescriptor::~EtherCtrlDescriptor()
{
}

int EtherCtrlDescriptor::getFieldCount()
{
    return 6;
}

int EtherCtrlDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_STRUCT;
        case 1: return FT_STRUCT;
        case 2: return FT_BASIC;
        case 3: return FT_BASIC;
        case 4: return FT_BASIC;
        case 5: return FT_BASIC;
        default: return FT_INVALID;
    }
}

const char *EtherCtrlDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "src";
        case 1: return "dest";
        case 2: return "etherType";
        case 3: return "ssap";
        case 4: return "dsap";
        case 5: return "pauseUnits";
        default: return NULL;
    }
}

const char *EtherCtrlDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "MACAddress";
        case 1: return "MACAddress";
        case 2: return "int";
        case 3: return "int";
        case 4: return "int";
        case 5: return "int";
        default: return NULL;
    }
}

const char *EtherCtrlDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int EtherCtrlDescriptor::getArraySize(int field)
{
    EtherCtrl *pp = (EtherCtrl *)p;
    switch (field) {
        default: return 0;
    }
}

bool EtherCtrlDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    EtherCtrl *pp = (EtherCtrl *)p;
    switch (field) {
        case 0: return false;
        case 1: return false;
        case 2: long2string(pp->getEtherType(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getSsap(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getDsap(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getPauseUnits(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool EtherCtrlDescriptor::setFieldAsString(int field, int i, const char *value)
{
    EtherCtrl *pp = (EtherCtrl *)p;
    switch (field) {
        case 0: return false;
        case 1: return false;
        case 2: pp->setEtherType(string2long(value)); return true;
        case 3: pp->setSsap(string2long(value)); return true;
        case 4: pp->setDsap(string2long(value)); return true;
        case 5: pp->setPauseUnits(string2long(value)); return true;
        default: return false;
    }
}

const char *EtherCtrlDescriptor::getFieldStructName(int field)
{
    switch (field) {
        case 0: return "MACAddress"; break;
        case 1: return "MACAddress"; break;
        default: return NULL;
    }
}

void *EtherCtrlDescriptor::getFieldStructPointer(int field, int i)
{
    EtherCtrl *pp = (EtherCtrl *)p;
    switch (field) {
        case 0: return (void *)&pp->getSrc(); break;
        case 1: return (void *)&pp->getDest(); break;
        default: return NULL;
    }
}

sFieldWrapper *EtherCtrlDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

