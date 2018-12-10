/*
 * Copyright (C) 2004 Andras Varga
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef __CMESSAGE30_H
#define __CMESSAGE30_H

#include <omnetpp.h>

#if OMNETPP_VERSION>0x0230
#define OPP3
#endif


#ifdef OPP3

typedef cMessage cMessage30;
#define M30(p)  (p)

#else

/**
 * Generic base class.
 */
class cPolymorphic
{
  public:
    virtual ~cPolymorphic() {}
    virtual const char *className() const  {return opp_typename(typeid(*this));}
    virtual const char *fullName() const  {return "";}
    virtual const char *fullPath() const {return fullName();}
};

template<class T>
T check_and_cast(cPolymorphic *p)
{
    if (!p)
        throw new cException("check_and_cast(): cannot cast NULL pointer to type '%s'",opp_typename(typeid(T)));
    T ret = dynamic_cast<T>(p);
    if (!ret)
        throw new cException("check_and_cast(): cannot cast (%s *)%s to type '%s'",p->className(),p->fullPath(),opp_typename(typeid(T)));
    return ret;
}

/**
 * cMessage with controlInfo()
 */
class cMessage30 : public cMessage
{
  protected:
    cPolymorphic *ctrlp;
  public:
    explicit cMessage30(const char *name=NULL, int kind=0) : cMessage(name,kind) {ctrlp=NULL;}
    cMessage30(const cMessage30& m) : cMessage() {setName(m.name());ctrlp=NULL;operator=(m);}
    cMessage30& operator=(const cMessage30& m)  {if(this==&m) return *this; ASSERT(!ctrlp); cMessage::operator=(m); return *this;}
    virtual cObject *dup() const {return new cMessage30(*this);}
    cPolymorphic *controlInfo() const {return ctrlp;}
    cPolymorphic *removeControlInfo() {cPolymorphic *p=ctrlp;ctrlp=NULL; return p;}
    void setControlInfo(cPolymorphic *p)  {ASSERT(p&&!ctrlp);ctrlp=p;}
};

#define M30(p)  check_and_cast<cMessage30*>(p)

#endif

#endif


