//
// Generated file, do not edit! Created by opp_msgc 4.1 from transport/udp/UDPPacket.msg.
//

#ifndef _UDPPACKET_M_H_
#define _UDPPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "INETDefs.h"
// }}



/**
 * Class generated from <tt>transport/udp/UDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet UDPPacket
 * {
 *     unsigned short sourcePort;
 *     unsigned short destinationPort;
 * }
 * </pre>
 */
class UDPPacket : public ::cPacket
{
  protected:
    unsigned short sourcePort_var;
    unsigned short destinationPort_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UDPPacket&);

  public:
    UDPPacket(const char *name=NULL, int kind=0);
    UDPPacket(const UDPPacket& other);
    virtual ~UDPPacket();
    UDPPacket& operator=(const UDPPacket& other);
    virtual UDPPacket *dup() const {return new UDPPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getSourcePort() const;
    virtual void setSourcePort(unsigned short sourcePort_var);
    virtual unsigned short getDestinationPort() const;
    virtual void setDestinationPort(unsigned short destinationPort_var);
};

inline void doPacking(cCommBuffer *b, UDPPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, UDPPacket& obj) {obj.parsimUnpack(b);}


#endif // _UDPPACKET_M_H_
