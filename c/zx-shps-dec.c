/* c/zx-shps-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
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
#include "c/zx-shps-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x)
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

int zx_DEC_ELEM_shps_CallbackEPR(struct zx_ctx* c, struct zx_shps_CallbackEPR_s* x)
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




int zx_DEC_ATTR_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_Delete(struct zx_ctx* c, struct zx_shps_Delete_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_DeleteResponse(struct zx_ctx* c, struct zx_shps_DeleteResponse_s* x)
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




int zx_DEC_ATTR_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_GetStatus(struct zx_ctx* c, struct zx_shps_GetStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_GetStatusResponse(struct zx_ctx* c, struct zx_shps_GetStatusResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_shps_GetStatusResponseItem_ELEM:
    if (!x->GetStatusResponseItem)
      x->GetStatusResponseItem = (struct zx_shps_GetStatusResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_GetStatusResponseItem(struct zx_ctx* c, struct zx_shps_GetStatusResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;
  case zx_shps_ServiceStatus_ELEM:
    if (!x->ServiceStatus)
      x->ServiceStatus = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_InvocationContext(struct zx_ctx* c, struct zx_shps_InvocationContext_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_InvokingProvider_ELEM:
    if (!x->InvokingProvider)
      x->InvokingProvider = el;
    return 1;
  case zx_shps_InvokingPrincipal_ELEM:
    if (!x->InvokingPrincipal)
      x->InvokingPrincipal = el;
    return 1;
  case zx_di_SecurityMechID_ELEM:
    if (!x->SecurityMechID)
      x->SecurityMechID = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_InvokeItem(struct zx_ctx* c, struct zx_shps_InvokeItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_InvokeResponse(struct zx_ctx* c, struct zx_shps_InvokeResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_shps_InvokeResponseItem_ELEM:
    if (!x->InvokeResponseItem)
      x->InvokeResponseItem = (struct zx_shps_InvokeResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_InvokeResponseItem(struct zx_ctx* c, struct zx_shps_InvokeResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_wait_ATTR:  x->wait = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_Poll(struct zx_ctx* c, struct zx_shps_Poll_s* x)
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




int zx_DEC_ATTR_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_nextPoll_ATTR:  x->nextPoll = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_PollResponse(struct zx_ctx* c, struct zx_shps_PollResponse_s* x)
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




int zx_DEC_ATTR_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_ProxyInvoke(struct zx_ctx* c, struct zx_shps_ProxyInvoke_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ProxyInvokeItem_ELEM:
    if (!x->ProxyInvokeItem)
      x->ProxyInvokeItem = (struct zx_shps_ProxyInvokeItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_ProxyInvokeItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;
  case zx_shps_InvocationContext_ELEM:
    if (!x->InvocationContext)
      x->InvocationContext = (struct zx_shps_InvocationContext_s*)el;
    return 1;
  case zx_shps_RequestHeaders_ELEM:
    if (!x->RequestHeaders)
      x->RequestHeaders = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_ProxyInvokeResponse(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_shps_ProxyInvokeResponseItem_ELEM:
    if (!x->ProxyInvokeResponseItem)
      x->ProxyInvokeResponseItem = (struct zx_shps_ProxyInvokeResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_ProxyInvokeResponseItem(struct zx_ctx* c, struct zx_shps_ProxyInvokeResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;
  case zx_shps_ResponseHeaders_ELEM:
    if (!x->ResponseHeaders)
      x->ResponseHeaders = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_Query(struct zx_ctx* c, struct zx_shps_Query_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_di_RequestedService_ELEM:
    if (!x->RequestedService)
      x->RequestedService = (struct zx_di_RequestedService_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_QueryRegistered(struct zx_ctx* c, struct zx_shps_QueryRegistered_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_QueryRegisteredResponse(struct zx_ctx* c, struct zx_shps_QueryRegisteredResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_a_EndpointReference_ELEM:
    if (!x->EndpointReference)
      x->EndpointReference = (struct zx_a_EndpointReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_QueryResponse(struct zx_ctx* c, struct zx_shps_QueryResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_a_EndpointReference_ELEM:
    if (!x->EndpointReference)
      x->EndpointReference = (struct zx_a_EndpointReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_Register(struct zx_ctx* c, struct zx_shps_Register_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_EndpointReference_ELEM:
    if (!x->EndpointReference)
      x->EndpointReference = (struct zx_a_EndpointReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_RegisterResponse(struct zx_ctx* c, struct zx_shps_RegisterResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_shps_RegisterResponseItem_ELEM:
    if (!x->RegisterResponseItem)
      x->RegisterResponseItem = (struct zx_shps_RegisterResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_RegisterResponseItem(struct zx_ctx* c, struct zx_shps_RegisterResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_SetStatus(struct zx_ctx* c, struct zx_shps_SetStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_SetStatusItem_ELEM:
    if (!x->SetStatusItem)
      x->SetStatusItem = (struct zx_shps_SetStatusItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_SetStatusItem(struct zx_ctx* c, struct zx_shps_SetStatusItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceStatus_ELEM:
    if (!x->ServiceStatus)
      x->ServiceStatus = el;
    return 1;
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_SetStatusResponse(struct zx_ctx* c, struct zx_shps_SetStatusResponse_s* x)
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




int zx_DEC_ATTR_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_Update(struct zx_ctx* c, struct zx_shps_Update_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_UpdateItem_ELEM:
    if (!x->UpdateItem)
      x->UpdateItem = (struct zx_shps_UpdateItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_itemID_ATTR:  x->itemID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_UpdateItem(struct zx_ctx* c, struct zx_shps_UpdateItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_shps_ServiceHandle_ELEM:
    if (!x->ServiceHandle)
      x->ServiceHandle = el;
    return 1;
  case zx_a_EndpointReference_ELEM:
    if (!x->EndpointReference)
      x->EndpointReference = (struct zx_a_EndpointReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_shps_UpdateResponse(struct zx_ctx* c, struct zx_shps_UpdateResponse_s* x)
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


/* EOF -- c/zx-shps-dec.c */