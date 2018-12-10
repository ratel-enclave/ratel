//
// Generated file, do not edit! Created by opp_msgc.
//

#ifndef MACADDRESS_M_H_
#define MACADDRESS_M_H_

#include <omnetpp.h>

class MACAddress_Base
{
  protected:
    // make constructors protected to avoid instantiation
    MACAddress_Base();
    MACAddress_Base(const MACAddress_Base& other);
  public:
    virtual ~MACAddress_Base();
    MACAddress_Base& operator=(const MACAddress_Base& other);

    // field getter/setter methods
    virtual unsigned int getAddressArraySize() const = 0;
    virtual unsigned char getAddress(unsigned int k) const = 0;
    virtual void setAddress(unsigned int k, unsigned char address) = 0;
};

/*
* The minimum code to be written for MACAddress:
* (methods that cannot be inherited from MACAddress_Base)
*
* class MACAddress : public MACAddress_Base
* {
*   public:
*     MACAddress() : MACAddress_Base() {}
*     MACAddress(const MACAddress& other) : MACAddress_Base() {operator=(other);}
*     MACAddress& operator=(const MACAddress& other) {MACAddress_Base::operator=(other); return *this;}
* };
*/

#endif // MACADDRESS_M_H_
