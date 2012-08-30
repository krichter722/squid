/*
 * DEBUG: section 21    Misc Functions
 * AUTHOR: Harvest Derived
 *
 * SQUID Web Proxy Cache          http://www.squid-cache.org/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from
 *  the Internet community; see the CONTRIBUTORS file for full
 *  details.   Many organizations have provided support for Squid's
 *  development; see the SPONSORS file for full details.  Squid is
 *  Copyrighted (C) 2001 by the Regents of the University of
 *  California; see the COPYRIGHT file for full details.  Squid
 *  incorporates software developed and/or copyrighted by other
 *  sources; see the CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */

#ifndef SQUID_TOOLS_H_
#define SQUID_TOOLS_H_

/* for kb_t */
#include "typedefs.h"

class MemBuf;

extern void kb_incr(kb_t *, size_t);
extern void parseEtcHosts(void);
extern int getMyPort(void);
extern void setUmask(mode_t mask);
extern void strwordquote(MemBuf * mb, const char *str);

/* packs, then prints an object using debugs() */
extern void debugObj(int section, int level, const char *label, void *obj, ObjPackMethod pm);

extern const char *getMyHostname(void);
extern const char *uniqueHostname(void);

extern void death(int sig);
extern void sigusr2_handle(int sig);
extern void sig_child(int sig);
extern void sig_shutdown(int sig); ///< handles shutdown notifications from kids
extern void leave_suid(void);
extern void enter_suid(void);
extern void no_suid(void);
extern void writePidFile(void);
extern void setMaxFD(void);
extern void setSystemLimits(void);
extern void squid_signal(int sig, SIGHDLR *, int flags);
extern pid_t readPidFile(void);
extern void keepCapabilities(void);
extern void BroadcastSignalIfAny(int& sig);


#endif /* SQUID_TOOLS_H_ */
