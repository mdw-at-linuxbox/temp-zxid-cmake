/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf c/zx-attrs.gperf  */
/* Computed positions: -k'1,3-5,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "c/zx-attrs.gperf"

/* c/zx-attrs.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 337
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 922
/* maximum key range = 916, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_attr_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned short asso_values[] =
    {
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 310, 135, 275, 230, 365,
      255, 923, 923, 115, 923,  15, 395, 255,  30,  55,
      125,  15, 145, 120, 325, 245, 355,  10, 923, 923,
      923, 923, 923, 923, 923, 923, 923,  20, 315,  20,
        0,   0, 200, 135, 210,   5,  90,  15, 100,  75,
        5,  95, 110, 315,   0,  10,   5,  45, 180, 195,
       75, 125,  10, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923, 923, 923, 923, 923,
      923, 923, 923, 923, 923, 923
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct zx_at_tok zx_at_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "c/zx-attrs.gperf"
    {"id"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 58 "c/zx-attrs.gperf"
    {"redirect"},
    {""},
#line 145 "c/zx-attrs.gperf"
    {"event"},
    {""},
#line 180 "c/zx-attrs.gperf"
    {"intervalType"},
#line 55 "c/zx-attrs.gperf"
    {"interact"},
#line 83 "c/zx-attrs.gperf"
    {"code"},
    {""}, {""},
#line 259 "c/zx-attrs.gperf"
    {"at"},
    {""}, {""}, {""}, {""},
#line 154 "c/zx-attrs.gperf"
    {"currencyCode"},
    {""},
#line 28 "c/zx-attrs.gperf"
    {"case"},
#line 202 "c/zx-attrs.gperf"
    {"currentEmployer"},
    {""},
#line 165 "c/zx-attrs.gperf"
    {"currentlyEnrolled"},
#line 26 "c/zx-attrs.gperf"
    {"duration"},
    {""},
#line 62 "c/zx-attrs.gperf"
    {"sortWeight"},
    {""},
#line 151 "c/zx-attrs.gperf"
    {"context"},
    {""}, {""}, {""},
#line 147 "c/zx-attrs.gperf"
    {"description"},
#line 135 "c/zx-attrs.gperf"
    {"consent"},
#line 237 "c/zx-attrs.gperf"
    {"use"},
#line 213 "c/zx-attrs.gperf"
    {"used"},
#line 98 "c/zx-attrs.gperf"
    {"attributes"},
#line 86 "c/zx-attrs.gperf"
    {"starts"},
#line 211 "c/zx-attrs.gperf"
    {"created"},
    {""}, {""}, {""},
#line 192 "c/zx-attrs.gperf"
    {"attendanceStatus"},
#line 111 "c/zx-attrs.gperf"
    {"descriptionIDRefs"},
#line 47 "c/zx-attrs.gperf"
    {"uri"},
#line 176 "c/zx-attrs.gperf"
    {"dunsNumberType"},
#line 140 "c/zx-attrs.gperf"
    {"Nonce"},
#line 177 "c/zx-attrs.gperf"
    {"contactType"},
#line 263 "c/zx-attrs.gperf"
    {"deactivateAt"},
    {""},
#line 172 "c/zx-attrs.gperf"
    {"academicHonors"},
    {""},
#line 265 "c/zx-attrs.gperf"
    {"issuer"},
#line 87 "c/zx-attrs.gperf"
    {"success"},
    {""},
#line 142 "c/zx-attrs.gperf"
    {"returnLocation"},
    {""}, {""},
#line 326 "c/zx-attrs.gperf"
    {"OK"},
    {""}, {""}, {""}, {""},
#line 144 "c/zx-attrs.gperf"
    {"srsName"},
#line 183 "c/zx-attrs.gperf"
    {"classificationName"},
#line 159 "c/zx-attrs.gperf"
    {"dateOfIncident"},
#line 48 "c/zx-attrs.gperf"
    {"updateType"},
    {""},
#line 23 "c/zx-attrs.gperf"
    {"notOnOrAfter"},
#line 199 "c/zx-attrs.gperf"
    {"issuingRegion"},
#line 42 "c/zx-attrs.gperf"
    {"name"},
#line 79 "c/zx-attrs.gperf"
    {"count"},
#line 185 "c/zx-attrs.gperf"
    {"countryCode"},
    {""},
#line 37 "c/zx-attrs.gperf"
    {"min"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 231 "c/zx-attrs.gperf"
    {"namespace"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 141 "c/zx-attrs.gperf"
    {"NotOnOrAfter"},
    {""},
#line 239 "c/zx-attrs.gperf"
    {"Name"},
#line 75 "c/zx-attrs.gperf"
    {"overrideAllowed"},
#line 317 "c/zx-attrs.gperf"
    {"metric"},
    {""}, {""}, {""},
#line 225 "c/zx-attrs.gperf"
    {"title"},
    {""},
#line 20 "c/zx-attrs.gperf"
    {"Id"},
#line 188 "c/zx-attrs.gperf"
    {"interval"},
#line 146 "c/zx-attrs.gperf"
    {"type"},
#line 73 "c/zx-attrs.gperf"
    {"predefined"},
    {""},
#line 200 "c/zx-attrs.gperf"
    {"jurisdiction"},
#line 174 "c/zx-attrs.gperf"
    {"unitOfMeasure"},
#line 277 "c/zx-attrs.gperf"
    {"Namespace"},
#line 21 "c/zx-attrs.gperf"
    {"actor"},
#line 201 "c/zx-attrs.gperf"
    {"leader"},
    {""},
#line 254 "c/zx-attrs.gperf"
    {"encodingStyle"},
#line 160 "c/zx-attrs.gperf"
    {"expirationDate"},
    {""}, {""},
#line 77 "c/zx-attrs.gperf"
    {"expires"},
#line 139 "c/zx-attrs.gperf"
    {"NameQualifier"},
#line 101 "c/zx-attrs.gperf"
    {"sizelimit"},
#line 38 "c/zx-attrs.gperf"
    {"credentialLevel"},
#line 94 "c/zx-attrs.gperf"
    {"script"},
    {""},
#line 143 "c/zx-attrs.gperf"
    {"gid"},
#line 223 "c/zx-attrs.gperf"
    {"link"},
#line 204 "c/zx-attrs.gperf"
    {"percentage"},
    {""},
#line 203 "c/zx-attrs.gperf"
    {"positionType"},
    {""}, {""},
#line 168 "c/zx-attrs.gperf"
    {"degreeType"},
#line 210 "c/zx-attrs.gperf"
    {"timeOffType"},
    {""}, {""}, {""}, {""}, {""},
#line 197 "c/zx-attrs.gperf"
    {"documentType"},
#line 179 "c/zx-attrs.gperf"
    {"currency"},
    {""},
#line 67 "c/zx-attrs.gperf"
    {"nextOffset"},
#line 226 "c/zx-attrs.gperf"
    {"signed"},
    {""},
#line 33 "c/zx-attrs.gperf"
    {"nym"},
#line 76 "c/zx-attrs.gperf"
    {"endReason"},
#line 219 "c/zx-attrs.gperf"
    {"index"},
#line 171 "c/zx-attrs.gperf"
    {"measureType"},
#line 295 "c/zx-attrs.gperf"
    {"issueTo"},
    {""},
#line 280 "c/zx-attrs.gperf"
    {"SessionNotOnOrAfter"},
    {""},
#line 109 "c/zx-attrs.gperf"
    {"resultsType"},
#line 24 "c/zx-attrs.gperf"
    {"rankKey"},
#line 250 "c/zx-attrs.gperf"
    {"addressCoding"},
    {""}, {""},
#line 96 "c/zx-attrs.gperf"
    {"contingency"},
    {""}, {""}, {""}, {""},
#line 127 "c/zx-attrs.gperf"
    {"Issuer"},
#line 34 "c/zx-attrs.gperf"
    {"sharing"},
    {""},
#line 284 "c/zx-attrs.gperf"
    {"NotBefore"},
    {""}, {""},
#line 84 "c/zx-attrs.gperf"
    {"comment"},
    {""}, {""},
#line 205 "c/zx-attrs.gperf"
    {"natureOfRelationship"},
    {""},
#line 126 "c/zx-attrs.gperf"
    {"IssueInstant"},
#line 29 "c/zx-attrs.gperf"
    {"excludedChars"},
    {""}, {""}, {""},
#line 95 "c/zx-attrs.gperf"
    {"changedSince"},
#line 228 "c/zx-attrs.gperf"
    {"multiple"},
#line 102 "c/zx-attrs.gperf"
    {"timelimit"},
#line 272 "c/zx-attrs.gperf"
    {"Structured"},
    {""},
#line 71 "c/zx-attrs.gperf"
    {"changeFormat"},
    {""}, {""}, {""},
#line 85 "c/zx-attrs.gperf"
    {"includeData"},
#line 258 "c/zx-attrs.gperf"
    {"service"},
#line 97 "c/zx-attrs.gperf"
    {"includeCommonAttributes"},
#line 316 "c/zx-attrs.gperf"
    {"vers"},
#line 294 "c/zx-attrs.gperf"
    {"usage"},
#line 35 "c/zx-attrs.gperf"
    {"medium"},
#line 49 "c/zx-attrs.gperf"
    {"version"},
    {""},
#line 46 "c/zx-attrs.gperf"
    {"timestamp"},
    {""},
#line 167 "c/zx-attrs.gperf"
    {"studentInGoodStanding"},
    {""},
#line 353 "c/zx-attrs.gperf"
    {"ReturnContext"},
#line 260 "c/zx-attrs.gperf"
    {"wait"},
#line 64 "c/zx-attrs.gperf"
    {"objectType"},
#line 170 "c/zx-attrs.gperf"
    {"graduatingDegree"},
    {""},
#line 261 "c/zx-attrs.gperf"
    {"activate"},
#line 186 "c/zx-attrs.gperf"
    {"ownership"},
#line 100 "c/zx-attrs.gperf"
    {"scope"},
#line 166 "c/zx-attrs.gperf"
    {"enrollmentStatus"},
#line 99 "c/zx-attrs.gperf"
    {"derefaliases"},
#line 215 "c/zx-attrs.gperf"
    {"all"},
#line 212 "c/zx-attrs.gperf"
    {"firstUsed"},
#line 262 "c/zx-attrs.gperf"
    {"activateAt"},
#line 184 "c/zx-attrs.gperf"
    {"primaryIndicator"},
    {""},
#line 36 "c/zx-attrs.gperf"
    {"max"},
    {""},
#line 169 "c/zx-attrs.gperf"
    {"examPassed"},
#line 209 "c/zx-attrs.gperf"
    {"shiftPeriod"},
#line 133 "c/zx-attrs.gperf"
    {"SessionIndex"},
#line 335 "c/zx-attrs.gperf"
    {"ParameterName"},
#line 68 "c/zx-attrs.gperf"
    {"notSorted"},
#line 206 "c/zx-attrs.gperf"
    {"relocationConsidered"},
#line 163 "c/zx-attrs.gperf"
    {"typeId"},
    {""},
#line 132 "c/zx-attrs.gperf"
    {"ReauthenticateOnOrAfter"},
#line 157 "c/zx-attrs.gperf"
    {"companyOffered"},
    {""}, {""}, {""}, {""},
#line 69 "c/zx-attrs.gperf"
    {"remaining"},
#line 315 "c/zx-attrs.gperf"
    {"ctlpt"},
#line 193 "c/zx-attrs.gperf"
    {"hierarchicalRole"},
#line 155 "c/zx-attrs.gperf"
    {"relationship"},
    {""}, {""}, {""}, {""}, {""},
#line 240 "c/zx-attrs.gperf"
    {"entityID"},
    {""},
#line 164 "c/zx-attrs.gperf"
    {"dateDescription"},
    {""}, {""},
#line 338 "c/zx-attrs.gperf"
    {"PolicyId"},
#line 103 "c/zx-attrs.gperf"
    {"typesonly"},
#line 283 "c/zx-attrs.gperf"
    {"SPNameQualifier"},
#line 344 "c/zx-attrs.gperf"
    {"PolicySetId"},
    {""}, {""}, {""}, {""},
#line 302 "c/zx-attrs.gperf"
    {"Destination"},
#line 148 "c/zx-attrs.gperf"
    {"idOwner"},
#line 233 "c/zx-attrs.gperf"
    {"cacheDuration"},
    {""},
#line 343 "c/zx-attrs.gperf"
    {"PolicyCombiningAlgId"},
#line 191 "c/zx-attrs.gperf"
    {"organizationType"},
    {""},
#line 198 "c/zx-attrs.gperf"
    {"idSource"},
    {""}, {""},
#line 271 "c/zx-attrs.gperf"
    {"Offset"},
#line 242 "c/zx-attrs.gperf"
    {"FriendlyName"},
#line 281 "c/zx-attrs.gperf"
    {"Decision"},
#line 120 "c/zx-attrs.gperf"
    {"IsPassive"},
#line 45 "c/zx-attrs.gperf"
    {"serverMechanism"},
#line 309 "c/zx-attrs.gperf"
    {"Reason"},
    {""}, {""}, {""},
#line 57 "c/zx-attrs.gperf"
    {"maxInteractTime"},
#line 25 "c/zx-attrs.gperf"
    {"RelationshipType"},
#line 216 "c/zx-attrs.gperf"
    {"Binding"},
#line 91 "c/zx-attrs.gperf"
    {"modifier"},
    {""},
#line 305 "c/zx-attrs.gperf"
    {"ForceAuthn"},
#line 194 "c/zx-attrs.gperf"
    {"typeOfGroup"},
#line 53 "c/zx-attrs.gperf"
    {"maxProcessingTime"},
#line 56 "c/zx-attrs.gperf"
    {"language"},
#line 136 "c/zx-attrs.gperf"
    {"Recipient"},
#line 333 "c/zx-attrs.gperf"
    {"FunctionId"},
#line 90 "c/zx-attrs.gperf"
    {"modificationTime"},
#line 327 "c/zx-attrs.gperf"
    {"Context"},
    {""}, {""}, {""}, {""},
#line 301 "c/zx-attrs.gperf"
    {"Consent"},
#line 282 "c/zx-attrs.gperf"
    {"Resource"},
    {""},
#line 351 "c/zx-attrs.gperf"
    {"ResourceId"},
#line 74 "c/zx-attrs.gperf"
    {"format"},
#line 337 "c/zx-attrs.gperf"
    {"ObligationId"},
    {""}, {""}, {""}, {""}, {""},
#line 108 "c/zx-attrs.gperf"
    {"storeRef"},
    {""},
#line 273 "c/zx-attrs.gperf"
    {"CreatedDateTime"},
#line 80 "c/zx-attrs.gperf"
    {"offset"},
#line 196 "c/zx-attrs.gperf"
    {"otherPayType"},
#line 266 "c/zx-attrs.gperf"
    {"nextPoll"},
#line 65 "c/zx-attrs.gperf"
    {"timeStamp"},
#line 178 "c/zx-attrs.gperf"
    {"employerOrgType"},
#line 104 "c/zx-attrs.gperf"
    {"adminNotifyToRef"},
#line 214 "c/zx-attrs.gperf"
    {"purpose"},
    {""}, {""}, {""},
#line 300 "c/zx-attrs.gperf"
    {"regexp"},
#line 287 "c/zx-attrs.gperf"
    {"Address"},
    {""}, {""},
#line 227 "c/zx-attrs.gperf"
    {"value"},
#line 329 "c/zx-attrs.gperf"
    {"AttributeId"},
    {""},
#line 289 "c/zx-attrs.gperf"
    {"AttributeName"},
    {""}, {""},
#line 236 "c/zx-attrs.gperf"
    {"protocolSupportEnumeration"},
    {""},
#line 290 "c/zx-attrs.gperf"
    {"AttributeNamespace"},
    {""},
#line 270 "c/zx-attrs.gperf"
    {"Count"},
    {""},
#line 182 "c/zx-attrs.gperf"
    {"primary"},
    {""}, {""},
#line 123 "c/zx-attrs.gperf"
    {"PrefixList"},
#line 298 "c/zx-attrs.gperf"
    {"AssertionIssueInstant"},
#line 18 "c/zx-attrs.gperf"
    {"ID"},
#line 253 "c/zx-attrs.gperf"
    {"replyDeadline"},
#line 22 "c/zx-attrs.gperf"
    {"mustUnderstand"},
#line 246 "c/zx-attrs.gperf"
    {"WantAssertionsSigned"},
    {""},
#line 252 "c/zx-attrs.gperf"
    {"replyChargingSize"},
#line 241 "c/zx-attrs.gperf"
    {"WantAuthnRequestsSigned"},
#line 59 "c/zx-attrs.gperf"
    {"messageID"},
    {""},
#line 251 "c/zx-attrs.gperf"
    {"displayOnly"},
#line 175 "c/zx-attrs.gperf"
    {"suppliedByOrganization"},
    {""}, {""},
#line 297 "c/zx-attrs.gperf"
    {"confirmationURI"},
#line 138 "c/zx-attrs.gperf"
    {"Format"},
#line 324 "c/zx-attrs.gperf"
    {"Dialect"},
#line 275 "c/zx-attrs.gperf"
    {"NodeType"},
    {""},
#line 162 "c/zx-attrs.gperf"
    {"typeDescription"},
#line 347 "c/zx-attrs.gperf"
    {"RuleId"},
#line 113 "c/zx-attrs.gperf"
    {"entryID"},
#line 161 "c/zx-attrs.gperf"
    {"lastUsed"},
#line 149 "c/zx-attrs.gperf"
    {"validFrom"},
    {""}, {""},
#line 129 "c/zx-attrs.gperf"
    {"MinorVersion"},
#line 158 "c/zx-attrs.gperf"
    {"required"},
    {""},
#line 243 "c/zx-attrs.gperf"
    {"NameFormat"},
    {""},
#line 125 "c/zx-attrs.gperf"
    {"InResponseTo"},
#line 249 "c/zx-attrs.gperf"
    {"sequence"},
#line 93 "c/zx-attrs.gperf"
    {"lang"},
    {""},
#line 218 "c/zx-attrs.gperf"
    {"ResponseLocation"},
#line 278 "c/zx-attrs.gperf"
    {"Version"},
#line 318 "c/zx-attrs.gperf"
    {"val"},
    {""}, {""},
#line 319 "c/zx-attrs.gperf"
    {"Digest"},
#line 150 "c/zx-attrs.gperf"
    {"validTo"},
#line 30 "c/zx-attrs.gperf"
    {"requiredChars"},
    {""},
#line 350 "c/zx-attrs.gperf"
    {"VariableId"},
#line 264 "c/zx-attrs.gperf"
    {"method"},
    {""},
#line 328 "c/zx-attrs.gperf"
    {"Sig"},
    {""},
#line 234 "c/zx-attrs.gperf"
    {"validUntil"},
#line 181 "c/zx-attrs.gperf"
    {"prefix"},
    {""},
#line 173 "c/zx-attrs.gperf"
    {"honorsProgram"},
    {""},
#line 187 "c/zx-attrs.gperf"
    {"smsEnabled"},
#line 27 "c/zx-attrs.gperf"
    {"number"},
    {""},
#line 54 "c/zx-attrs.gperf"
    {"ref"},
#line 66 "c/zx-attrs.gperf"
    {"itemIDRef"},
#line 323 "c/zx-attrs.gperf"
    {"Usage"},
    {""},
#line 288 "c/zx-attrs.gperf"
    {"DNSName"},
    {""},
#line 31 "c/zx-attrs.gperf"
    {"mechanism"},
    {""},
#line 50 "c/zx-attrs.gperf"
    {"redirectURL"},
    {""}, {""}, {""}, {""},
#line 352 "c/zx-attrs.gperf"
    {"InputContextOnly"},
#line 121 "c/zx-attrs.gperf"
    {"ProviderName"},
#line 195 "c/zx-attrs.gperf"
    {"otherInterval"},
    {""},
#line 207 "c/zx-attrs.gperf"
    {"schoolType"},
#line 156 "c/zx-attrs.gperf"
    {"numberOfStudents"},
    {""},
#line 331 "c/zx-attrs.gperf"
    {"MustBePresent"},
#line 303 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceIndex"},
#line 304 "c/zx-attrs.gperf"
    {"AttributeConsumingServiceIndex"},
#line 105 "c/zx-attrs.gperf"
    {"notifyToRef"},
    {""},
#line 342 "c/zx-attrs.gperf"
    {"LatestVersion"},
    {""}, {""},
#line 63 "c/zx-attrs.gperf"
    {"itemID"},
    {""}, {""}, {""},
#line 312 "c/zx-attrs.gperf"
    {"ProxyCount"},
#line 248 "c/zx-attrs.gperf"
    {"allowAdaptations"},
    {""},
#line 307 "c/zx-attrs.gperf"
    {"Loc"},
#line 117 "c/zx-attrs.gperf"
    {"Type"},
    {""},
#line 235 "c/zx-attrs.gperf"
    {"libertyPrincipalIdentifier"},
    {""},
#line 107 "c/zx-attrs.gperf"
    {"objectID"},
#line 293 "c/zx-attrs.gperf"
    {"IPAddress"},
#line 40 "c/zx-attrs.gperf"
    {"DeviceType"},
    {""},
#line 39 "c/zx-attrs.gperf"
    {"DeviceInHand"},
    {""},
#line 220 "c/zx-attrs.gperf"
    {"isDefault"},
    {""}, {""}, {""},
#line 217 "c/zx-attrs.gperf"
    {"Location"},
    {""}, {""}, {""},
#line 128 "c/zx-attrs.gperf"
    {"MajorVersion"},
    {""}, {""},
#line 43 "c/zx-attrs.gperf"
    {"advisoryAuthnID"},
#line 340 "c/zx-attrs.gperf"
    {"PolicyIdRef"},
    {""},
#line 190 "c/zx-attrs.gperf"
    {"minValue"},
#line 345 "c/zx-attrs.gperf"
    {"PolicySetIdRef"},
#line 320 "c/zx-attrs.gperf"
    {"DigestAlgorithm"},
    {""},
#line 61 "c/zx-attrs.gperf"
    {"sortAlg"},
    {""}, {""},
#line 306 "c/zx-attrs.gperf"
    {"ProtocolBinding"},
#line 119 "c/zx-attrs.gperf"
    {"Target"},
    {""}, {""}, {""},
#line 244 "c/zx-attrs.gperf"
    {"isRequired"},
#line 274 "c/zx-attrs.gperf"
    {"ModifiedDateTime"},
    {""},
#line 118 "c/zx-attrs.gperf"
    {"URI"},
    {""}, {""},
#line 81 "c/zx-attrs.gperf"
    {"setReq"},
#line 44 "c/zx-attrs.gperf"
    {"authzID"},
#line 152 "c/zx-attrs.gperf"
    {"mimeType"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 341 "c/zx-attrs.gperf"
    {"EarliestVersion"},
    {""},
#line 321 "c/zx-attrs.gperf"
    {"EncodingType"},
#line 224 "c/zx-attrs.gperf"
    {"moreLink"},
    {""},
#line 311 "c/zx-attrs.gperf"
    {"Comparison"},
    {""},
#line 332 "c/zx-attrs.gperf"
    {"MatchId"},
#line 238 "c/zx-attrs.gperf"
    {"errorURL"},
    {""},
#line 92 "c/zx-attrs.gperf"
    {"group"},
    {""}, {""}, {""}, {""},
#line 313 "c/zx-attrs.gperf"
    {"Value"},
    {""}, {""}, {""},
#line 322 "c/zx-attrs.gperf"
    {"ValueType"},
#line 72 "c/zx-attrs.gperf"
    {"notChangedSince"},
    {""}, {""}, {""},
#line 82 "c/zx-attrs.gperf"
    {"ItemIDRef"},
    {""}, {""}, {""}, {""},
#line 267 "c/zx-attrs.gperf"
    {"asof"},
    {""}, {""}, {""}, {""}, {""},
#line 314 "c/zx-attrs.gperf"
    {"xpath"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 189 "c/zx-attrs.gperf"
    {"maxValue"},
    {""}, {""},
#line 32 "c/zx-attrs.gperf"
    {"governingAgreementRef"},
    {""},
#line 339 "c/zx-attrs.gperf"
    {"RuleCombiningAlgId"},
    {""}, {""},
#line 269 "c/zx-attrs.gperf"
    {"Locale"},
    {""}, {""}, {""},
#line 131 "c/zx-attrs.gperf"
    {"AuthenticationMethod"},
    {""},
#line 279 "c/zx-attrs.gperf"
    {"AuthnInstant"},
#line 276 "c/zx-attrs.gperf"
    {"Ref"},
#line 245 "c/zx-attrs.gperf"
    {"AuthnRequestsSigned"},
    {""},
#line 130 "c/zx-attrs.gperf"
    {"AuthenticationInstant"},
#line 153 "c/zx-attrs.gperf"
    {"baseInterval"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 268 "c/zx-attrs.gperf"
    {"IsDefault"},
    {""},
#line 124 "c/zx-attrs.gperf"
    {"AssertionID"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 51 "c/zx-attrs.gperf"
    {"affiliationID"},
#line 348 "c/zx-attrs.gperf"
    {"RuleIdRef"},
    {""},
#line 286 "c/zx-attrs.gperf"
    {"Method"},
    {""},
#line 232 "c/zx-attrs.gperf"
    {"affiliationOwnerID"},
#line 336 "c/zx-attrs.gperf"
    {"FulfillOn"},
    {""},
#line 208 "c/zx-attrs.gperf"
    {"branch"},
    {""}, {""}, {""}, {""}, {""},
#line 285 "c/zx-attrs.gperf"
    {"SPProvidedID"},
#line 230 "c/zx-attrs.gperf"
    {"minChars"},
    {""}, {""}, {""}, {""},
#line 330 "c/zx-attrs.gperf"
    {"DataType"},
#line 296 "c/zx-attrs.gperf"
    {"wantDSEPR"},
    {""},
#line 112 "c/zx-attrs.gperf"
    {"newEntryIDs"},
    {""}, {""}, {""},
#line 70 "c/zx-attrs.gperf"
    {"setID"},
#line 346 "c/zx-attrs.gperf"
    {"Effect"},
    {""}, {""},
#line 78 "c/zx-attrs.gperf"
    {"subscriptionID"},
#line 137 "c/zx-attrs.gperf"
    {"ResponseID"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 247 "c/zx-attrs.gperf"
    {"href"},
    {""}, {""}, {""}, {""}, {""},
#line 222 "c/zx-attrs.gperf"
    {"label"},
    {""}, {""},
#line 115 "c/zx-attrs.gperf"
    {"Encoding"},
#line 114 "c/zx-attrs.gperf"
    {"Algorithm"},
    {""}, {""}, {""}, {""},
#line 257 "c/zx-attrs.gperf"
    {"responseConsumerURL"},
#line 52 "c/zx-attrs.gperf"
    {"providerID"},
    {""}, {""},
#line 291 "c/zx-attrs.gperf"
    {"AuthorityKind"},
    {""}, {""}, {""}, {""}, {""},
#line 255 "c/zx-attrs.gperf"
    {"TimeStamp"},
    {""}, {""}, {""}, {""}, {""},
#line 308 "c/zx-attrs.gperf"
    {"ProviderID"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 229 "c/zx-attrs.gperf"
    {"maxChars"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 116 "c/zx-attrs.gperf"
    {"MimeType"},
    {""},
#line 349 "c/zx-attrs.gperf"
    {"SubjectCategory"},
#line 221 "c/zx-attrs.gperf"
    {"reqRef"},
    {""}, {""}, {""}, {""},
#line 256 "c/zx-attrs.gperf"
    {"UAProf"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 292 "c/zx-attrs.gperf"
    {"DNSAddress"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 354 "c/zx-attrs.gperf"
    {"CombinePolicies"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 310 "c/zx-attrs.gperf"
    {"AllowCreate"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 334 "c/zx-attrs.gperf"
    {"RequestContextPath"},
    {""},
#line 41 "c/zx-attrs.gperf"
    {"SeedLength"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 122 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceURL"},
    {""},
#line 134 "c/zx-attrs.gperf"
    {"RequestID"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 110 "c/zx-attrs.gperf"
    {"svcMDID"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 299 "c/zx-attrs.gperf"
    {"VerifyDepth"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 88 "c/zx-attrs.gperf"
    {"ACC"},
#line 60 "c/zx-attrs.gperf"
    {"refToMessageID"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 106 "c/zx-attrs.gperf"
    {"reqID"},
    {""}, {""}, {""}, {""},
#line 325 "c/zx-attrs.gperf"
    {"Allow"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 89 "c/zx-attrs.gperf"
    {"ACCTime"}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct zx_at_tok *
zx_attr2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_attr_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = zx_at_tab[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &zx_at_tab[key];
        }
    }
  return 0;
}
#line 355 "c/zx-attrs.gperf"

/* EOF */