//
// Generated file, do not edit! Created by opp_msgc 4.0 from linklayer/mfcore/AirFrame.msg.
//

#ifndef _AIRFRAME_M_H_
#define _AIRFRAME_M_H_

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
#include "Coord.h"
// end cplusplus



/**
 * Class generated from <tt>linklayer/mfcore/AirFrame.msg</tt> by opp_msgc.
 * <pre>
 * packet AirFrame
 * {
 *     double pSend; 
 *     int channelNumber; 
 *     simtime_t duration; 
 *     double bitrate;
 *     Coord senderPos;
 * }
 * </pre>
 */
class INET_API AirFrame : public cPacket
{
  protected:
    double pSend_var;
    int channelNumber_var;
    simtime_t duration_var;
    double bitrate_var;
    Coord senderPos_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AirFrame&);

  public:
    AirFrame(const char *name=NULL, int kind=0);
    AirFrame(const AirFrame& other);
    virtual ~AirFrame();
    AirFrame& operator=(const AirFrame& other);
    virtual AirFrame *dup() const {return new AirFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getPSend() const;
    virtual void setPSend(double pSend_var);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber_var);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration_var);
    virtual double getBitrate() const;
    virtual void setBitrate(double bitrate_var);
    virtual Coord& getSenderPos();
    virtual const Coord& getSenderPos() const {return const_cast<AirFrame*>(this)->getSenderPos();}
    virtual void setSenderPos(const Coord& senderPos_var);
};

inline void doPacking(cCommBuffer *b, AirFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AirFrame& obj) {obj.parsimUnpack(b);}


#endif // _AIRFRAME_M_H_
