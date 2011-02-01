/*
 * $Id$
 *
 * DEBUG: section 54    Interprocess Communication
 *
 */


#include "config.h"
#include "Debug.h"
#include "ipc/Messages.h"
#include "ipc/StrandCoord.h"
#include "ipc/TypedMsgHdr.h"


Ipc::StrandCoord::StrandCoord(): kidId(-1), pid(0)
{
}

Ipc::StrandCoord::StrandCoord(int aKidId, pid_t aPid): kidId(aKidId), pid(aPid)
{
}

void
Ipc::StrandCoord::unpack(const TypedMsgHdr &hdrMsg)
{
    hdrMsg.getPod(kidId);
    hdrMsg.getPod(pid);
    hdrMsg.getString(tag);
}

void Ipc::StrandCoord::pack(TypedMsgHdr &hdrMsg) const
{
    hdrMsg.putPod(kidId);
    hdrMsg.putPod(pid);
    hdrMsg.putString(tag);
}


Ipc::HereIamMessage::HereIamMessage(const StrandCoord &aStrand):
    strand(aStrand)
{
}

Ipc::HereIamMessage::HereIamMessage(const TypedMsgHdr &hdrMsg)
{
    hdrMsg.checkType(mtRegistration);
    strand.unpack(hdrMsg);
}

void Ipc::HereIamMessage::pack(TypedMsgHdr &hdrMsg) const
{
    hdrMsg.setType(mtRegistration);
    strand.pack(hdrMsg);
}
