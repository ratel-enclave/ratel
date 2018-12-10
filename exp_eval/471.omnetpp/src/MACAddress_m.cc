//
// Generated file, do not edit! Created by opp_msgc.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include "MACAddress_m.h"

MACAddress_Base::MACAddress_Base()
{
    unsigned int i;
}

MACAddress_Base::MACAddress_Base(const MACAddress_Base& other)
{
    unsigned int i;
    operator=(other);
}

MACAddress_Base::~MACAddress_Base()
{
}

MACAddress_Base& MACAddress_Base::operator=(const MACAddress_Base& other)
{
    if (this==&other) return *this;
    unsigned int i;
    return *this;
}

class MACAddressDescriptor : public cStructDescriptor
{
  public:
    MACAddressDescriptor(void *p=NULL);
    virtual ~MACAddressDescriptor();
    MACAddressDescriptor& operator=(const MACAddressDescriptor& other);
    virtual cObject *dup() const {return new MACAddressDescriptor(*this);}

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

Register_Class(MACAddressDescriptor);

MACAddressDescriptor::MACAddressDescriptor(void *p) : cStructDescriptor(p)
{
}

MACAddressDescriptor::~MACAddressDescriptor()
{
}

int MACAddressDescriptor::getFieldCount()
{
    return 1;
}

int MACAddressDescriptor::getFieldType(int field)
{
    switch (field) {
        case 0: return FT_BASIC_ARRAY;
        default: return FT_INVALID;
    }
}

const char *MACAddressDescriptor::getFieldName(int field)
{
    switch (field) {
        case 0: return "address";
        default: return NULL;
    }
}

const char *MACAddressDescriptor::getFieldTypeString(int field)
{
    switch (field) {
        case 0: return "unsigned char";
        default: return NULL;
    }
}

const char *MACAddressDescriptor::getFieldEnumName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

int MACAddressDescriptor::getArraySize(int field)
{
    MACAddress_Base *pp = (MACAddress_Base *)p;
    switch (field) {
        case 0: return 6;
        default: return 0;
    }
}

bool MACAddressDescriptor::getFieldAsString(int field, int i, char *resultbuf, int bufsize)
{
    MACAddress_Base *pp = (MACAddress_Base *)p;
    switch (field) {
        case 0: long2string(pp->getAddress(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool MACAddressDescriptor::setFieldAsString(int field, int i, const char *value)
{
    MACAddress_Base *pp = (MACAddress_Base *)p;
    switch (field) {
        case 0: pp->setAddress(i,string2long(value)); return true;
        default: return false;
    }
}

const char *MACAddressDescriptor::getFieldStructName(int field)
{
    switch (field) {
        default: return NULL;
    }
}

void *MACAddressDescriptor::getFieldStructPointer(int field, int i)
{
    MACAddress_Base *pp = (MACAddress_Base *)p;
    switch (field) {
        default: return NULL;
    }
}

sFieldWrapper *MACAddressDescriptor::getFieldWrapper(int field, int i)
{
    return NULL;
}

