/* speed.exe 007e2b80 _LangCountryEnumProc@4; analysis pseudocode, not buildable source.
 * calls 007e3310 _TestDefaultLanguage
 * calls 007d6cb0 __security_check_cookie
 * calls 007e66e0 __strnicmp
 * calls 007e6630 __stricmp
 * calls 007e3540 _LcidFromHexString
 * calls 007e32c0 _TestDefaultCountry
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2003 Debug */

bool _LangCountryEnumProc_4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  bool bVar5;
  char local_84 [124];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  iVar1 = _LcidFromHexString(param_1);
  iVar2 = (*DAT_009baf44)(iVar1,(-(uint)(DAT_009baf34 != 0) & 0xfffff005) + 0x1002,local_84,0x78);
  if (iVar2 == 0) {
    DAT_009baf24 = 0;
    bVar5 = true;
  }
  else {
    iVar2 = __stricmp(DAT_009baf38,local_84);
    if (iVar2 == 0) {
      iVar2 = (*DAT_009baf44)(iVar1,(-(uint)(DAT_009baf30 != 0) & 0xfffff002) + 0x1001,local_84,0x78
                             );
      if (iVar2 == 0) {
        DAT_009baf24 = 0;
        return true;
      }
      iVar2 = __stricmp(DAT_009baf40,local_84);
      if (iVar2 == 0) {
        DAT_009baf24 = DAT_009baf24 | 0x304;
        DAT_009baf28 = iVar1;
        DAT_009baf2c = iVar1;
      }
      else if ((DAT_009baf24 & 2) == 0) {
        if ((DAT_009baf3c == 0) ||
           (iVar2 = __strnicmp(DAT_009baf40,local_84,DAT_009baf3c), iVar2 != 0)) {
          if (((DAT_009baf24 & 1) == 0) && (iVar2 = _TestDefaultCountry(iVar1), iVar2 != 0)) {
            DAT_009baf24 = DAT_009baf24 | 1;
            DAT_009baf2c = iVar1;
          }
        }
        else {
          DAT_009baf24 = DAT_009baf24 | 2;
          DAT_009baf2c = iVar1;
          sVar3 = _strlen(DAT_009baf40);
          if (sVar3 == DAT_009baf3c) {
            DAT_009baf28 = iVar1;
          }
        }
      }
    }
    if ((DAT_009baf24 & 0x300) != 0x300) {
      iVar2 = (*DAT_009baf44)(iVar1,(-(uint)(DAT_009baf30 != 0) & 0xfffff002) + 0x1001,local_84,0x78
                             );
      if (iVar2 == 0) {
        DAT_009baf24 = 0;
        return true;
      }
      iVar2 = __stricmp(DAT_009baf40,local_84);
      if (iVar2 == 0) {
        uVar4 = DAT_009baf24 | 0x200;
        if (DAT_009baf30 == 0) {
          DAT_009baf24 = uVar4;
          if ((DAT_009baf3c == 0) || (sVar3 = _strlen(DAT_009baf40), sVar3 != DAT_009baf3c)) {
            DAT_009baf24 = DAT_009baf24 | 0x100;
            if (DAT_009baf28 == 0) {
              DAT_009baf28 = iVar1;
            }
          }
          else {
            iVar2 = _TestDefaultLanguage(iVar1,1);
            if ((iVar2 != 0) && (DAT_009baf24 = DAT_009baf24 | 0x100, DAT_009baf28 == 0)) {
              DAT_009baf28 = iVar1;
            }
          }
        }
        else {
          DAT_009baf24 = DAT_009baf24 | 0x300;
          if (DAT_009baf28 == 0) {
            DAT_009baf28 = iVar1;
          }
        }
      }
      else if ((((DAT_009baf30 == 0) && (DAT_009baf3c != 0)) &&
               (iVar2 = __strnicmp(DAT_009baf40,local_84,DAT_009baf3c), iVar2 == 0)) &&
              ((iVar2 = _TestDefaultLanguage(iVar1,0), iVar2 != 0 &&
               (DAT_009baf24 = DAT_009baf24 | 0x100, DAT_009baf28 == 0)))) {
        DAT_009baf28 = iVar1;
      }
    }
    bVar5 = (DAT_009baf24 & 4) == 0;
  }
  return bVar5;
}

