/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'2-3,6,$' */

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


/* strongSwan keywords
 * Copyright (C) 2005 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 131
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 246
/* maximum key range = 238, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247,  12,
      126, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247,  51, 247,  11,   1,  92,
       43,   0,   6,   0, 110,   0, 247, 120,  56,  37,
       27,  72,  43,   1,  16,   0,   5,  75,   1, 247,
      247,  11,   5, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"pfs",               KW_PFS},
    {"right",             KW_RIGHT},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"lifetime",          KW_KEYLIFE},
    {"left",              KW_LEFT},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"leftcert",          KW_LEFTCERT},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"keyingtries",       KW_KEYINGTRIES},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"keylife",           KW_KEYLIFE},
    {"lifebytes",         KW_LIFEBYTES},
    {"lifepackets",       KW_LIFEPACKETS},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftca",            KW_LEFTCA},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"uniqueids",         KW_UNIQUEIDS},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"certuribase",       KW_CERTURIBASE},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"interfaces",        KW_INTERFACES},
    {"reqid",             KW_REQID},
    {"rightid",           KW_RIGHTID},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"type",              KW_TYPE},
    {"inactivity",        KW_INACTIVITY},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"mark_in",           KW_MARK_IN},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"margintime",        KW_REKEYMARGIN},
    {"marginbytes",       KW_MARGINBYTES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"leftnatip",         KW_LEFTNATIP},
    {"mediated_by",       KW_MEDIATED_BY},
    {"ldapbase",          KW_LDAPBASE},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"crluri",            KW_CRLURI},
    {"mobike",	           KW_MOBIKE},
    {"rightnatip",        KW_RIGHTNATIP},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"mediation",         KW_MEDIATION},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"esp",               KW_ESP},
    {"crluri1",           KW_CRLURI},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"leftid",            KW_LEFTID},
    {"forceencaps",       KW_FORCEENCAPS},
    {"eap",               KW_EAP},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"me_peerid",         KW_ME_PEERID},
    {"rightcert",         KW_RIGHTCERT},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"authby",            KW_AUTHBY},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"rightca",           KW_RIGHTCA},
    {"mark_out",          KW_MARK_OUT},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"ocspuri",           KW_OCSPURI},
    {"compress",          KW_COMPRESS},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"cacert",            KW_CACERT},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"hidetos",           KW_HIDETOS},
    {"ike",               KW_IKE},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"dpdaction",         KW_DPDACTION},
    {"ocspuri1",          KW_OCSPURI},
    {"pfsgroup",          KW_PFSGROUP},
    {"rightauth",         KW_RIGHTAUTH},
    {"also",              KW_ALSO},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightid2",          KW_RIGHTID2},
    {"dumpdir",           KW_DUMPDIR},
    {"rekey",             KW_REKEY},
    {"ikelifetime",       KW_IKELIFETIME},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"ldaphost",          KW_LDAPHOST},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"leftcert2",         KW_LEFTCERT2},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"plutostart",        KW_PLUTOSTART},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"leftca2",           KW_LEFTCA2},
    {"mark",              KW_MARK},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"auto",              KW_AUTO},
    {"charondebug",       KW_CHARONDEBUG},
    {"dpddelay",          KW_DPDDELAY},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"charonstart",       KW_CHARONSTART},
    {"fragicmp",          KW_FRAGICMP},
    {"prepluto",          KW_PREPLUTO},
    {"closeaction",       KW_CLOSEACTION},
    {"leftid2",           KW_LEFTID2},
    {"plutodebug",        KW_PLUTODEBUG},
    {"tfc",               KW_TFC},
    {"auth",              KW_AUTH},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"modeconfig",        KW_MODECONFIG},
    {"leftauth",          KW_LEFTAUTH},
    {"xauth",             KW_XAUTH},
    {"cachecrls",         KW_CACHECRLS},
    {"crluri2",           KW_CRLURI2},
    {"postpluto",         KW_POSTPLUTO},
    {"nocrsend",          KW_NOCRSEND},
    {"leftauth2",         KW_LEFTAUTH2},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"reauth",            KW_REAUTH},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"ocspuri2",          KW_OCSPURI2},
    {"pkcs11proxy",       KW_PKCS11PROXY}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
      1,   2,  -1,  -1,   3,   4,   5,   6,   7,   8,
     -1,   9,  10,  11,  12,  -1,  13,  -1,  14,  -1,
     15,  16,  17,  -1,  18,  19,  20,  -1,  -1,  -1,
     21,  22,  23,  24,  25,  -1,  -1,  -1,  26,  27,
     28,  -1,  29,  -1,  -1,  -1,  30,  -1,  31,  32,
     33,  34,  35,  -1,  36,  37,  -1,  38,  -1,  39,
     40,  -1,  -1,  41,  42,  43,  -1,  -1,  44,  45,
     46,  -1,  47,  -1,  48,  49,  50,  51,  52,  53,
     -1,  54,  55,  -1,  -1,  -1,  56,  -1,  57,  58,
     59,  60,  -1,  61,  -1,  -1,  62,  63,  64,  65,
     66,  -1,  67,  68,  69,  70,  -1,  71,  72,  73,
     74,  -1,  75,  76,  77,  78,  79,  80,  81,  82,
     83,  -1,  84,  85,  86,  87,  88,  89,  90,  91,
     92,  93,  94,  -1,  95,  96,  97,  98,  -1,  -1,
     99, 100,  -1,  -1, 101,  -1, 102,  -1,  -1, 103,
     -1, 104, 105,  -1, 106,  -1,  -1,  -1,  -1,  -1,
    107, 108,  -1,  -1,  -1,  -1,  -1, 109,  -1,  -1,
     -1,  -1, 110,  -1, 111,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 112, 113, 114,  -1, 115,  -1, 116,
     -1, 117,  -1,  -1, 118, 119,  -1,  -1,  -1, 120,
     -1,  -1,  -1,  -1,  -1, 121, 122,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 123,  -1, 124,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 125, 126, 127, 128,
     -1,  -1, 129,  -1,  -1,  -1, 130
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct kw_entry *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
