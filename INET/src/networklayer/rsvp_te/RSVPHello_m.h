//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/RSVPHello.msg.
//

#ifndef _RSVPHELLO_M_H_
#define _RSVPHELLO_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{ ... }} section:

#include "RSVPPacket.h"
// end cplusplus



/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPHello.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPHelloMsg extends RSVPMessage
 * {
 *     @customize(true);
 *     bool request;
 *     bool ack;
 * 
 *     int srcInstance;
 *     int dstInstance;
 * 
 *     int rsvpKind = HELLO_MESSAGE;
 * }
 * </pre>
 *
 * RSVPHelloMsg_Base is only useful if it gets subclassed, and RSVPHelloMsg is derived from it.
 * The minimum code to be written for RSVPHelloMsg is the following:
 *
 * <pre>
 * class INET_API RSVPHelloMsg : public RSVPHelloMsg_Base
 * {
 *   public:
 *     RSVPHelloMsg(const char *name=NULL, int kind=0) : RSVPHelloMsg_Base(name,kind) {}
 *     RSVPHelloMsg(const RSVPHelloMsg& other) : RSVPHelloMsg_Base(other.getName()) {operator=(other);}
 *     RSVPHelloMsg& operator=(const RSVPHelloMsg& other) {RSVPHelloMsg_Base::operator=(other); return *this;}
 *     virtual RSVPHelloMsg *dup() const {return new RSVPHelloMsg(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPHelloMsg_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPHelloMsg);
 * </pre>
 */
class INET_API RSVPHelloMsg_Base : public RSVPMessage
{
  protected:
    bool request_var;
    bool ack_var;
    int srcInstance_var;
    int dstInstance_var;
    int rsvpKind_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPHelloMsg_Base&);
    // make constructors protected to avoid instantiation
    RSVPHelloMsg_Base(const char *name=NULL, int kind=0);
    RSVPHelloMsg_Base(const RSVPHelloMsg_Base& other);
    // make assignment operator protected to force the user override it
    RSVPHelloMsg_Base& operator=(const RSVPHelloMsg_Base& other);

  public:
    virtual ~RSVPHelloMsg_Base();
    virtual RSVPHelloMsg_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPHelloMsg");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getRequest() const;
    virtual void setRequest(bool request_var);
    virtual bool getAck() const;
    virtual void setAck(bool ack_var);
    virtual int getSrcInstance() const;
    virtual void setSrcInstance(int srcInstance_var);
    virtual int getDstInstance() const;
    virtual void setDstInstance(int dstInstance_var);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind_var);
};


#endif // _RSVPHELLO_M_H_
