/*
 * Copyright (C) 1996-2015 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#include "squid.h"
#include "fatal.h"

/* Stub File for the ssl/libsslutil.la convenience library */

#define STUB_BASE "ssl/libsslutil.la"

#define STUB { fatal(STUB_BASE " required."); }
#define STUB_RETVAL(x) { fatal(STUB_BASE " required."); return (x); }
#define STUB_RETREF(x) { fatal(STUB_BASE " required."); static x v; return v; }
#define STUB_RETREF2(x,y) { fatal(STUB_BASE " required."); static x v((y)); return v; }

#include "ssl/crtd_message.h"
Ssl::CrtdMessage::CrtdMessage() STUB
Ssl::CrtdMessage::ParseResult Ssl::CrtdMessage::parse(const char * buffer, size_t len) STUB_RETVAL(ERROR)
std::string const & Ssl::CrtdMessage::getBody() const STUB_RETREF(std::string)
std::string const & Ssl::CrtdMessage::getCode() const STUB_RETREF(std::string)
void Ssl::CrtdMessage::setBody(std::string const & aBody) STUB
void Ssl::CrtdMessage::setCode(std::string const & aCode) STUB
std::string Ssl::CrtdMessage::compose() const STUB_RETREF(std::string)
void Ssl::CrtdMessage::clear() STUB
void Ssl::CrtdMessage::parseBody(BodyParams & map, std::string & other_part) const STUB
void Ssl::CrtdMessage::composeBody(BodyParams const & map, std::string const & other_part) STUB

#include "ssl/gadgets.h"
X509_REQ * Ssl::createNewX509Request(EVP_PKEY_Pointer const &, const char *) STUB_RETVAL(NULL)
bool Ssl::writeCertAndPrivateKeyToMemory(Security::CertPointer const &, EVP_PKEY_Pointer const &, std::string &) STUB_RETVAL(false)
bool Ssl::writeCertAndPrivateKeyToFile(Security::CertPointer const &, EVP_PKEY_Pointer const &, char const *) STUB_RETVAL(false)
bool Ssl::readCertAndPrivateKeyFromMemory(Security::CertPointer &, EVP_PKEY_Pointer &, char const *) STUB_RETVAL(false)
X509 * Ssl::signRequest(X509_REQ_Pointer const &, Security::CertPointer const &, EVP_PKEY_Pointer const &, ASN1_TIME *, BIGNUM const *) STUB_RETVAL(NULL)
bool Ssl::generateSslCertificateAndPrivateKey(char const *, Security::CertPointer const &, EVP_PKEY_Pointer const &, Security::CertPointer &, EVP_PKEY_Pointer &, BIGNUM const *) STUB_RETVAL(false)
void Ssl::readCertAndPrivateKeyFromFiles(Security::CertPointer &, EVP_PKEY_Pointer &, char const *, char const *) STUB
bool Ssl::sslDateIsInTheFuture(char const *) STUB_RETVAL(false)

#include "ssl/helper.h"
Ssl::Helper * Ssl::Helper::GetInstance() STUB_RETVAL(NULL)
void Ssl::Helper::Init() STUB
void Ssl::Helper::Shutdown() STUB
void Ssl::Helper::sslSubmit(Ssl::CrtdMessage const & message, HLPCB * callback, void *data) STUB

