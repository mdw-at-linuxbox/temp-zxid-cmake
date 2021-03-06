/* c/zx-sec12-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** dec-templ.c  -  XML decoder template, used in code generation
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: dec-templ.c,v 1.30 2008-10-04 23:42:14 sampo Exp $
 **
 ** 28.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 ** 23.9.2006, added collection of WO information --Sampo
 ** 21.6.2007, improved handling of undeclared namespace prefixes --Sampo
 ** 27.10.2010, CSE refactoring, re-engineered namespace handling --Sampo
 ** 21.11.2010, re-engineered to extract most code to zx_DEC_elem, leaving just switches --Sampo
 **
 ** N.B: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-sec12-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_ProxyInfoConfirmationData(struct zx_ctx* c, struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_AssertionIDReference_ELEM:
    if (!x->AssertionIDReference)
      x->AssertionIDReference = el;
    return 1;
  case zx_sec12_Issuer_ELEM:
    if (!x->Issuer)
      x->Issuer = el;
    return 1;
  case zx_sec12_IssueInstant_ELEM:
    if (!x->IssueInstant)
      x->IssueInstant = el;
    return 1;
  case zx_ds_Signature_ELEM:
    if (!x->Signature)
      x->Signature = (struct zx_ds_Signature_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_ProxySubject(struct zx_ctx* c, struct zx_sec12_ProxySubject_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_NameIdentifier_ELEM:
    if (!x->NameIdentifier)
      x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)el;
    return 1;
  case zx_sa11_SubjectConfirmation_ELEM:
    if (!x->SubjectConfirmation)
      x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_ProxyTransitedStatement(struct zx_ctx* c, struct zx_sec12_ProxyTransitedStatement_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_Subject_ELEM:
    if (!x->Subject)
      x->Subject = (struct zx_sa11_Subject_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_ResourceAccessStatement(struct zx_ctx* c, struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_Subject_ELEM:
    if (!x->Subject)
      x->Subject = (struct zx_sa11_Subject_s*)el;
    return 1;
  case zx_di12_ResourceID_ELEM:
    if (!x->ResourceID)
      x->ResourceID = (struct zx_di12_ResourceID_s*)el;
    return 1;
  case zx_di12_EncryptedResourceID_ELEM:
    if (!x->EncryptedResourceID)
      x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)el;
    return 1;
  case zx_sec12_ProxySubject_ELEM:
    if (!x->ProxySubject)
      x->ProxySubject = (struct zx_sec12_ProxySubject_s*)el;
    return 1;
  case zx_sec12_SessionContext_ELEM:
    if (!x->SessionContext)
      x->SessionContext = (struct zx_sec12_SessionContext_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_AssertionIssueInstant_ATTR:  x->AssertionIssueInstant = x->gg.attr; return 1;
    case zx_AuthenticationInstant_ATTR:  x->AuthenticationInstant = x->gg.attr; return 1;
    case zx_SessionIndex_ATTR:  x->SessionIndex = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_SessionContext(struct zx_ctx* c, struct zx_sec12_SessionContext_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sec12_SessionSubject_ELEM:
    if (!x->SessionSubject)
      x->SessionSubject = (struct zx_sec12_SessionSubject_s*)el;
    return 1;
  case zx_sec12_ProviderID_ELEM:
    if (!x->ProviderID)
      x->ProviderID = el;
    return 1;
  case zx_ff12_RequestAuthnContext_ELEM:
    if (!x->RequestAuthnContext)
      x->RequestAuthnContext = (struct zx_ff12_RequestAuthnContext_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_SessionContextStatement(struct zx_ctx* c, struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_Subject_ELEM:
    if (!x->Subject)
      x->Subject = (struct zx_sa11_Subject_s*)el;
    return 1;
  case zx_sec12_ProxySubject_ELEM:
    if (!x->ProxySubject)
      x->ProxySubject = (struct zx_sec12_ProxySubject_s*)el;
    return 1;
  case zx_sec12_SessionContext_ELEM:
    if (!x->SessionContext)
      x->SessionContext = (struct zx_sec12_SessionContext_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_SessionSubject(struct zx_ctx* c, struct zx_sec12_SessionSubject_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa11_NameIdentifier_ELEM:
    if (!x->NameIdentifier)
      x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)el;
    return 1;
  case zx_sa11_SubjectConfirmation_ELEM:
    if (!x->SubjectConfirmation)
      x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)el;
    return 1;
  case zx_ff12_IDPProvidedNameIdentifier_ELEM:
    if (!x->IDPProvidedNameIdentifier)
      x->IDPProvidedNameIdentifier = (struct zx_ff12_IDPProvidedNameIdentifier_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_sec12_ValidityRestrictionCondition(struct zx_ctx* c, struct zx_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sec12_NumberOfUses_ELEM:
    if (!x->NumberOfUses)
      x->NumberOfUses = el;
    return 1;

  default: return 0;
  }
}


/* EOF -- c/zx-sec12-dec.c */
