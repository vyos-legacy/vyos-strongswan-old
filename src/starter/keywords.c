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


/*
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

#define TOTAL_KEYWORDS 134
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 220
/* maximum key range = 212, duplicates = 0 */

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
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221,  62,
      117, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221,   0, 221,  27,   0,  79,
       26,   0,   6,   0,  92,   0, 221,  44,  58,  36,
       36,  73,  33,   5,  16,   0,   7,  87,   0, 221,
      221,  11,   3, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221
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
    {"pfs",               KW_PFS_DEPRECATED},
    {"aggressive",        KW_AGGRESSIVE},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"right",             KW_RIGHT},
    {"lifetime",          KW_KEYLIFE},
    {"left",              KW_LEFT},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"leftcert",          KW_LEFTCERT},
    {"keyingtries",       KW_KEYINGTRIES},
    {"keylife",           KW_KEYLIFE},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"lifebytes",         KW_LIFEBYTES},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rightid",           KW_RIGHTID},
    {"rightdns",          KW_RIGHTDNS},
    {"me_peerid",         KW_ME_PEERID},
    {"reqid",             KW_REQID},
    {"keep_alive",        KW_SETUP_DEPRECATED},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"certuribase",       KW_CERTURIBASE},
    {"lifepackets",       KW_LIFEPACKETS},
    {"uniqueids",         KW_UNIQUEIDS},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"ike",               KW_IKE},
    {"type",              KW_TYPE},
    {"leftdns",           KW_LEFTDNS},
    {"leftnexthop",       KW_LEFT_DEPRECATED},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightsubnetwithin", KW_RIGHTSUBNET},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"mediated_by",       KW_MEDIATED_BY},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"virtual_private",   KW_SETUP_DEPRECATED},
    {"interfaces",        KW_SETUP_DEPRECATED},
    {"rekey",             KW_REKEY},
    {"ikelifetime",       KW_IKELIFETIME},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"leftid",            KW_LEFTID},
    {"leftca",            KW_LEFTCA},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"esp",               KW_ESP},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"mediation",         KW_MEDIATION},
    {"mobike",	           KW_MOBIKE},
    {"crluri",            KW_CRLURI},
    {"rightnexthop",      KW_RIGHT_DEPRECATED},
    {"inactivity",        KW_INACTIVITY},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"mark_in",           KW_MARK_IN},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"ldapbase",          KW_CA_DEPRECATED},
    {"margintime",        KW_REKEYMARGIN},
    {"marginbytes",       KW_MARGINBYTES},
    {"mark",              KW_MARK},
    {"marginpackets",     KW_MARGINPACKETS},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"klipsdebug",        KW_SETUP_DEPRECATED},
    {"rightcert",         KW_RIGHTCERT},
    {"eap",               KW_CONN_DEPRECATED},
    {"overridemtu",       KW_SETUP_DEPRECATED},
    {"forceencaps",       KW_FORCEENCAPS},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"ocspuri",           KW_OCSPURI},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"force_keepalive",   KW_SETUP_DEPRECATED},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"hidetos",           KW_SETUP_DEPRECATED},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"dpdaction",         KW_DPDACTION},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"rightca",           KW_RIGHTCA},
    {"compress",          KW_COMPRESS},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"pfsgroup",          KW_PFS_DEPRECATED},
    {"nat_traversal",     KW_SETUP_DEPRECATED},
    {"authby",            KW_AUTHBY},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightid2",          KW_RIGHTID2},
    {"cacert",            KW_CACERT},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rightauth",         KW_RIGHTAUTH},
    {"rightgroups2",      KW_RIGHTGROUPS2},
    {"mark_out",          KW_MARK_OUT},
    {"leftcert2",         KW_LEFTCERT2},
    {"packetdefault",     KW_SETUP_DEPRECATED},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"also",              KW_ALSO},
    {"dpddelay",          KW_DPDDELAY},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"ldaphost",          KW_CA_DEPRECATED},
    {"crluri1",           KW_CRLURI},
    {"leftsubnetwithin",  KW_LEFTSUBNET},
    {"dumpdir",           KW_SETUP_DEPRECATED},
    {"crlcheckinterval",  KW_SETUP_DEPRECATED},
    {"leftgroups2",       KW_LEFTGROUPS2},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"leftid2",           KW_LEFTID2},
    {"leftca2",           KW_LEFTCA2},
    {"plutostderrlog",    KW_SETUP_DEPRECATED},
    {"plutostart",        KW_SETUP_DEPRECATED},
    {"fragicmp",          KW_SETUP_DEPRECATED},
    {"ocspuri1",          KW_OCSPURI},
    {"charondebug",       KW_CHARONDEBUG},
    {"tfc",               KW_TFC},
    {"auto",              KW_AUTO},
    {"charonstart",       KW_SETUP_DEPRECATED},
    {"plutodebug",        KW_SETUP_DEPRECATED},
    {"modeconfig",        KW_MODECONFIG},
    {"prepluto",          KW_SETUP_DEPRECATED},
    {"nocrsend",          KW_SETUP_DEPRECATED},
    {"auth",              KW_AUTH},
    {"leftauth",          KW_LEFTAUTH},
    {"cachecrls",         KW_CACHECRLS},
    {"pkcs11module",      KW_PKCS11_DEPRECATED},
    {"crluri2",           KW_CRLURI2},
    {"pkcs11initargs",    KW_PKCS11_DEPRECATED},
    {"pkcs11keepstate",   KW_PKCS11_DEPRECATED},
    {"rightca2",          KW_RIGHTCA2},
    {"closeaction",       KW_CLOSEACTION},
    {"rightcert2",        KW_RIGHTCERT2},
    {"pkcs11proxy",       KW_PKCS11_DEPRECATED},
    {"xauth",             KW_XAUTH},
    {"postpluto",         KW_SETUP_DEPRECATED},
    {"reauth",            KW_REAUTH},
    {"leftauth2",         KW_LEFTAUTH2},
    {"ocspuri2",          KW_OCSPURI2}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
      1,   2,   3,  -1,   4,  -1,  -1,   5,   6,   7,
      8,   9,  10,  -1,  11,  12,  13,  -1,  -1,  -1,
     14,  15,  16,  17,  18,  19,  20,  21,  -1,  -1,
     -1,  22,  23,  24,  25,  26,  27,  28,  29,  30,
     31,  32,  -1,  33,  34,  35,  36,  -1,  37,  38,
     39,  40,  41,  -1,  42,  -1,  43,  -1,  44,  45,
     -1,  -1,  -1,  -1,  -1,  -1,  46,  47,  48,  49,
     50,  51,  -1,  -1,  52,  53,  54,  55,  56,  57,
     58,  59,  60,  61,  62,  63,  64,  -1,  65,  -1,
     66,  67,  68,  69,  70,  71,  72,  73,  -1,  74,
     75,  76,  77,  78,  -1,  -1,  -1,  79,  80,  -1,
     81,  82,  83,  -1,  84,  85,  86,  87,  88,  89,
     -1,  90,  91,  92,  93,  94,  95,  -1,  -1,  96,
     -1,  97,  -1,  98,  -1,  99, 100,  -1, 101,  -1,
    102,  -1,  -1,  -1, 103,  -1, 104, 105,  -1, 106,
     -1,  -1, 107, 108,  -1, 109, 110, 111,  -1,  -1,
     -1, 112,  -1, 113,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 114, 115,  -1, 116,  -1, 117,  -1,  -1,  -1,
    118,  -1,  -1, 119, 120,  -1,  -1, 121, 122, 123,
    124,  -1,  -1,  -1, 125, 126, 127, 128,  -1,  -1,
     -1, 129,  -1, 130,  -1,  -1,  -1, 131,  -1, 132,
    133
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
