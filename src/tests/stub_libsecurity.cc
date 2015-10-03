/*
 * Copyright (C) 1996-2015 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#include "squid.h"
#include "comm/Connection.h"

#define STUB_API "security/libsecurity.la"
#include "tests/STUB.h"

#include "security/EncryptorAnswer.h"
Security::EncryptorAnswer::~EncryptorAnswer() {}
std::ostream &Security::operator <<(std::ostream &os, const Security::EncryptorAnswer &) STUB_RETVAL(os)

#include "security/PeerOptions.h"
Security::PeerOptions Security::ProxyOutgoingConfig;
void Security::PeerOptions::parse(char const*) STUB
Security::ContextPointer Security::PeerOptions::createClientContext(bool) STUB_RETVAL(NULL)
void Security::PeerOptions::updateTlsVersionLimits() STUB
void Security::PeerOptions::updateContextCa(Security::ContextPointer &) STUB
void Security::PeerOptions::updateContextCrl(Security::ContextPointer &) STUB
void Security::PeerOptions::dumpCfg(Packable*, char const*) const STUB
long Security::PeerOptions::parseOptions() STUB_RETVAL(0)
long Security::PeerOptions::parseFlags() STUB_RETVAL(0)
void parse_securePeerOptions(Security::PeerOptions *) STUB

