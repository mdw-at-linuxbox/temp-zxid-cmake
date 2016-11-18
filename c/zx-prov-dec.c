/* c/zx-prov-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
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
#include "c/zx-prov-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMActivateItem_ELEM:
    if (!x->PMActivateItem)
      x->PMActivateItem = (struct zx_prov_PMActivateItem_s*)el;
    return 1;
  case zx_dp_NotifyTo_ELEM:
    if (!x->NotifyTo)
      x->NotifyTo = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_at_ATTR:  x->at = x->gg.attr; return 1;
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDeactivateItem_ELEM:
    if (!x->PMDeactivateItem)
      x->PMDeactivateItem = (struct zx_prov_PMDeactivateItem_s*)el;
    return 1;
  case zx_dp_NotifyTo_ELEM:
    if (!x->NotifyTo)
      x->NotifyTo = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_at_ATTR:  x->at = x->gg.attr; return 1;
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDeleteItem_ELEM:
    if (!x->PMDeleteItem)
      x->PMDeleteItem = (struct zx_prov_PMDeleteItem_s*)el;
    return 1;
  case zx_dp_NotifyTo_ELEM:
    if (!x->NotifyTo)
      x->NotifyTo = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_activate_ATTR:  x->activate = x->gg.attr; return 1;
    case zx_activateAt_ATTR:  x->activateAt = x->gg.attr; return 1;
    case zx_deactivateAt_ATTR:  x->deactivateAt = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;
  case zx_prov_PMInitData_ELEM:
    if (!x->PMInitData)
      x->PMInitData = el;
    return 1;
  case zx_prov_PMRTData_ELEM:
    if (!x->PMRTData)
      x->PMRTData = el;
    return 1;
  case zx_ds_Signature_ELEM:
    if (!x->Signature)
      x->Signature = (struct zx_ds_Signature_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_EngineData_ELEM:
    if (!x->EngineData)
      x->EngineData = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_PMEInfo_ELEM:
    if (!x->PMEInfo)
      x->PMEInfo = (struct zx_prov_PMEInfo_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_method_ATTR:  x->method = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;
  case zx_prov_PMECreatorID_ELEM:
    if (!x->PMECreatorID)
      x->PMECreatorID = el;
    return 1;
  case zx_prov_PMEWhenCreated_ELEM:
    if (!x->PMEWhenCreated)
      x->PMEWhenCreated = el;
    return 1;
  case zx_prov_PMEEnabled_ELEM:
    if (!x->PMEEnabled)
      x->PMEEnabled = el;
    return 1;
  case zx_prov_PMEWhenEnabled_ELEM:
    if (!x->PMEWhenEnabled)
      x->PMEWhenEnabled = el;
    return 1;
  case zx_prov_PMESize_ELEM:
    if (!x->PMESize)
      x->PMESize = el;
    return 1;
  case zx_prov_PMEHash_ELEM:
    if (!x->PMEHash)
      x->PMEHash = (struct zx_prov_PMEHash_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;
  case zx_prov_PMESize_ELEM:
    if (!x->PMESize)
      x->PMESize = el;
    return 1;
  case zx_prov_PMEHash_ELEM:
    if (!x->PMEHash)
      x->PMEHash = (struct zx_prov_PMEHash_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_PMEUploadMax_ELEM:
    if (!x->PMEUploadMax)
      x->PMEUploadMax = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_offset_ATTR:  x->offset = x->gg.attr; return 1;
    case zx_remaining_ATTR:  x->remaining = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMEngineRef_ELEM:
    if (!x->PMEngineRef)
      x->PMEngineRef = el;
    return 1;
  case zx_prov_EngineData_ELEM:
    if (!x->EngineData)
      x->EngineData = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDArtifact_ELEM:
    if (!x->PMDArtifact)
      x->PMDArtifact = el;
    return 1;
  case zx_prov_CallbackEPR_ELEM:
    if (!x->CallbackEPR)
      x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_PMDescriptor_ELEM:
    if (!x->PMDescriptor)
      x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_PMStatus_ELEM:
    if (!x->PMStatus)
      x->PMStatus = (struct zx_prov_PMStatus_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_issuer_ATTR:  x->issuer = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMRegisterDescriptorItem_ELEM:
    if (!x->PMRegisterDescriptorItem)
      x->PMRegisterDescriptorItem = (struct zx_prov_PMRegisterDescriptorItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDescriptor_ELEM:
    if (!x->PMDescriptor)
      x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_prov_PMRegisterDescriptorResponseItem_ELEM:
    if (!x->PMRegisterDescriptorResponseItem)
      x->PMRegisterDescriptorResponseItem = (struct zx_prov_PMRegisterDescriptorResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_ProvisioningHandle_ELEM:
    if (!x->ProvisioningHandle)
      x->ProvisioningHandle = (struct zx_prov_ProvisioningHandle_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMStatus_ELEM:
    if (!x->PMStatus)
      x->PMStatus = (struct zx_prov_PMStatus_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;
  case zx_prov_State_ELEM:
    if (!x->State)
      x->State = (struct zx_prov_State_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMUpdateItem_ELEM:
    if (!x->PMUpdateItem)
      x->PMUpdateItem = (struct zx_prov_PMUpdateItem_s*)el;
    return 1;
  case zx_dp_NotifyTo_ELEM:
    if (!x->NotifyTo)
      x->NotifyTo = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_at_ATTR:  x->at = x->gg.attr; return 1;
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;
    case zx_type_ATTR:  x->type = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDescriptor_ELEM:
    if (!x->PMDescriptor)
      x->PMDescriptor = (struct zx_prov_PMDescriptor_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_wait_ATTR:  x->wait = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Action_ELEM:
    if (!x->Action)
      x->Action = (struct zx_a_Action_s*)el;
    return 1;
  case zx_dp_Response_ELEM:
    if (!x->Response)
      x->Response = (struct zx_dp_Response_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_nextPoll_ATTR:  x->nextPoll = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_dp_Request_ELEM:
    if (!x->Request)
      x->Request = (struct zx_dp_Request_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_expires_ATTR:  x->expires = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMDArtifact_ELEM:
    if (!x->PMDArtifact)
      x->PMDArtifact = el;
    return 1;
  case zx_prov_ProvisioningServiceEPR_ELEM:
    if (!x->ProvisioningServiceEPR)
      x->ProvisioningServiceEPR = (struct zx_prov_ProvisioningServiceEPR_s*)el;
    return 1;
  case zx_ds_Signature_ELEM:
    if (!x->Signature)
      x->Signature = (struct zx_ds_Signature_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_asof_ATTR:  x->asof = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_UpdateEPRItem_ELEM:
    if (!x->UpdateEPRItem)
      x->UpdateEPRItem = (struct zx_prov_UpdateEPRItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_prov_PMID_ELEM:
    if (!x->PMID)
      x->PMID = (struct zx_prov_PMID_s*)el;
    return 1;
  case zx_prov_CallbackEPR_ELEM:
    if (!x->CallbackEPR)
      x->CallbackEPR = (struct zx_prov_CallbackEPR_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}


/* EOF -- c/zx-prov-dec.c */
