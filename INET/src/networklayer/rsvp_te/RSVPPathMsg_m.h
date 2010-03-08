//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/rsvp_te/RSVPPathMsg.msg.
//

#ifndef _RSVPPATHMSG_M_H_
#define _RSVPPATHMSG_M_H_

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

#include "IntServ.h"
#include "RSVPPacket.h"
// end cplusplus



/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathMsg extends RSVPPacket
 * {
 *     @customize(true);
 *     RsvpHopObj_t hop;
 *     LabelRequestObj_t label_request;
 *     SenderDescriptor_t sender_descriptor;
 *     EroVector ERO;
 *     int color;
 * 
 *     int rsvpKind = PATH_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathMsg_Base is only useful if it gets subclassed, and RSVPPathMsg is derived from it.
 * The minimum code to be written for RSVPPathMsg is the following:
 *
 * <pre>
 * class INET_API RSVPPathMsg : public RSVPPathMsg_Base
 * {
 *   public:
 *     RSVPPathMsg(const char *name=NULL, int kind=0) : RSVPPathMsg_Base(name,kind) {}
 *     RSVPPathMsg(const RSVPPathMsg& other) : RSVPPathMsg_Base(other.getName()) {operator=(other);}
 *     RSVPPathMsg& operator=(const RSVPPathMsg& other) {RSVPPathMsg_Base::operator=(other); return *this;}
 *     virtual RSVPPathMsg *dup() const {return new RSVPPathMsg(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathMsg_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathMsg);
 * </pre>
 */
class INET_API RSVPPathMsg_Base : public RSVPPacket
{
  protected:
    RsvpHopObj_t hop_var;
    LabelRequestObj_t label_request_var;
    SenderDescriptor_t sender_descriptor_var;
    EroVector ERO_var;
    int color_var;
    int rsvpKind_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathMsg_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathMsg_Base(const char *name=NULL, int kind=0);
    RSVPPathMsg_Base(const RSVPPathMsg_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathMsg_Base& operator=(const RSVPPathMsg_Base& other);

  public:
    virtual ~RSVPPathMsg_Base();
    virtual RSVPPathMsg_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathMsg");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual RsvpHopObj_t& getHop();
    virtual const RsvpHopObj_t& getHop() const {return const_cast<RSVPPathMsg_Base*>(this)->getHop();}
    virtual void setHop(const RsvpHopObj_t& hop_var);
    virtual LabelRequestObj_t& getLabel_request();
    virtual const LabelRequestObj_t& getLabel_request() const {return const_cast<RSVPPathMsg_Base*>(this)->getLabel_request();}
    virtual void setLabel_request(const LabelRequestObj_t& label_request_var);
    virtual SenderDescriptor_t& getSender_descriptor();
    virtual const SenderDescriptor_t& getSender_descriptor() const {return const_cast<RSVPPathMsg_Base*>(this)->getSender_descriptor();}
    virtual void setSender_descriptor(const SenderDescriptor_t& sender_descriptor_var);
    virtual EroVector& getERO();
    virtual const EroVector& getERO() const {return const_cast<RSVPPathMsg_Base*>(this)->getERO();}
    virtual void setERO(const EroVector& ERO_var);
    virtual int getColor() const;
    virtual void setColor(int color_var);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind_var);
};

/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathTear extends RSVPPacket
 * {
 *     @customize(true);
 *     RsvpHopObj_t hop;
 *     SenderTemplateObj_t senderTemplate;
 *     bool force;
 *     int rsvpKind = PTEAR_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathTear_Base is only useful if it gets subclassed, and RSVPPathTear is derived from it.
 * The minimum code to be written for RSVPPathTear is the following:
 *
 * <pre>
 * class INET_API RSVPPathTear : public RSVPPathTear_Base
 * {
 *   public:
 *     RSVPPathTear(const char *name=NULL, int kind=0) : RSVPPathTear_Base(name,kind) {}
 *     RSVPPathTear(const RSVPPathTear& other) : RSVPPathTear_Base(other.getName()) {operator=(other);}
 *     RSVPPathTear& operator=(const RSVPPathTear& other) {RSVPPathTear_Base::operator=(other); return *this;}
 *     virtual RSVPPathTear *dup() const {return new RSVPPathTear(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathTear_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathTear);
 * </pre>
 */
class INET_API RSVPPathTear_Base : public RSVPPacket
{
  protected:
    RsvpHopObj_t hop_var;
    SenderTemplateObj_t senderTemplate_var;
    bool force_var;
    int rsvpKind_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathTear_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathTear_Base(const char *name=NULL, int kind=0);
    RSVPPathTear_Base(const RSVPPathTear_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathTear_Base& operator=(const RSVPPathTear_Base& other);

  public:
    virtual ~RSVPPathTear_Base();
    virtual RSVPPathTear_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathTear");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual RsvpHopObj_t& getHop();
    virtual const RsvpHopObj_t& getHop() const {return const_cast<RSVPPathTear_Base*>(this)->getHop();}
    virtual void setHop(const RsvpHopObj_t& hop_var);
    virtual SenderTemplateObj_t& getSenderTemplate();
    virtual const SenderTemplateObj_t& getSenderTemplate() const {return const_cast<RSVPPathTear_Base*>(this)->getSenderTemplate();}
    virtual void setSenderTemplate(const SenderTemplateObj_t& senderTemplate_var);
    virtual bool getForce() const;
    virtual void setForce(bool force_var);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind_var);
};

/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathError extends RSVPPacket
 * {
 *     @customize(true);
 *     IPAddress errorNode;
 *     int errorCode;
 *     SenderDescriptor_t sender_descriptor;
 * 
 *     int rsvpKind = PERROR_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathError_Base is only useful if it gets subclassed, and RSVPPathError is derived from it.
 * The minimum code to be written for RSVPPathError is the following:
 *
 * <pre>
 * class INET_API RSVPPathError : public RSVPPathError_Base
 * {
 *   public:
 *     RSVPPathError(const char *name=NULL, int kind=0) : RSVPPathError_Base(name,kind) {}
 *     RSVPPathError(const RSVPPathError& other) : RSVPPathError_Base(other.getName()) {operator=(other);}
 *     RSVPPathError& operator=(const RSVPPathError& other) {RSVPPathError_Base::operator=(other); return *this;}
 *     virtual RSVPPathError *dup() const {return new RSVPPathError(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathError_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathError);
 * </pre>
 */
class INET_API RSVPPathError_Base : public RSVPPacket
{
  protected:
    IPAddress errorNode_var;
    int errorCode_var;
    SenderDescriptor_t sender_descriptor_var;
    int rsvpKind_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathError_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathError_Base(const char *name=NULL, int kind=0);
    RSVPPathError_Base(const RSVPPathError_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathError_Base& operator=(const RSVPPathError_Base& other);

  public:
    virtual ~RSVPPathError_Base();
    virtual RSVPPathError_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathError");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getErrorNode();
    virtual const IPAddress& getErrorNode() const {return const_cast<RSVPPathError_Base*>(this)->getErrorNode();}
    virtual void setErrorNode(const IPAddress& errorNode_var);
    virtual int getErrorCode() const;
    virtual void setErrorCode(int errorCode_var);
    virtual SenderDescriptor_t& getSender_descriptor();
    virtual const SenderDescriptor_t& getSender_descriptor() const {return const_cast<RSVPPathError_Base*>(this)->getSender_descriptor();}
    virtual void setSender_descriptor(const SenderDescriptor_t& sender_descriptor_var);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind_var);
};


#endif // _RSVPPATHMSG_M_H_
