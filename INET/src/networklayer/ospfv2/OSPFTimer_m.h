//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ospfv2/OSPFTimer.msg.
//

#ifndef _OSPFTIMER_M_H_
#define _OSPFTIMER_M_H_

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

#include "INETDefs.h"
// end cplusplus



/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFTimer.msg</tt> by opp_msgc.
 * <pre>
 * enum OSPFTimerType
 * {
 * 
 *     InterfaceHelloTimer = 0;
 *     InterfaceWaitTimer = 1;
 *     InterfaceAcknowledgementTimer = 3;
 *     NeighborInactivityTimer = 4;
 *     NeighborPollTimer = 5;
 *     NeighborDDRetransmissionTimer = 6;
 *     NeighborUpdateRetransmissionTimer = 7;
 *     NeighborRequestRetransmissionTimer = 8;
 *     DatabaseAgeTimer = 9;
 * }
 * </pre>
 */
enum OSPFTimerType {
    InterfaceHelloTimer = 0,
    InterfaceWaitTimer = 1,
    InterfaceAcknowledgementTimer = 3,
    NeighborInactivityTimer = 4,
    NeighborPollTimer = 5,
    NeighborDDRetransmissionTimer = 6,
    NeighborUpdateRetransmissionTimer = 7,
    NeighborRequestRetransmissionTimer = 8,
    DatabaseAgeTimer = 9
};

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFTimer.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFTimer extends cMessage
 * {
 *     char timerKind enum(OSPFTimerType) = InterfaceHelloTimer;
 * }
 * </pre>
 */
class INET_API OSPFTimer : public cMessage
{
  protected:
    char timerKind_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFTimer&);

  public:
    OSPFTimer(const char *name=NULL, int kind=0);
    OSPFTimer(const OSPFTimer& other);
    virtual ~OSPFTimer();
    OSPFTimer& operator=(const OSPFTimer& other);
    virtual OSPFTimer *dup() const {return new OSPFTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getTimerKind() const;
    virtual void setTimerKind(char timerKind_var);
};

inline void doPacking(cCommBuffer *b, OSPFTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFTimer& obj) {obj.parsimUnpack(b);}


#endif // _OSPFTIMER_M_H_