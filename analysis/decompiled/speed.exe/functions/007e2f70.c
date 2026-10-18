/* speed.exe 007e2f70 _LanguageEnumProc@4; analysis pseudocode, not buildable source.
 * calls 007e3310 _TestDefaultLanguage
 * calls 007d6cb0 __security_check_cookie
 * calls 007e66e0 __strnicmp
 * calls 007e6630 __stricmp
 * calls 007e3540 _LcidFromHexString
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2003 Debug */

bool _LanguageEnumProc_4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char local_84 [124];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  uVar1 = _LcidFromHexString(param_1);
  iVar2 = (*DAT_009baf44)(uVar1,(-(uint)(DAT_009baf30 != 0) & 0xfffff002) + 0x1001,local_84,0x78);
  if (iVar2 == 0) {
    DAT_009baf24 = 0;
    bVar3 = true;
  }
  else {
    iVar2 = __stricmp(DAT_009baf40,local_84);
    if (iVar2 == 0) {
      if ((DAT_009baf30 != 0) || (iVar2 = _TestDefaultLanguage(uVar1,1), iVar2 != 0)) {
        DAT_009baf24 = DAT_009baf24 | 4;
        DAT_009baf28 = uVar1;
        DAT_009baf2c = uVar1;
      }
    }
    else if ((((DAT_009baf30 == 0) && (DAT_009baf3c != 0)) &&
             (iVar2 = __strnicmp(DAT_009baf40,local_84,DAT_009baf3c), iVar2 == 0)) &&
            (iVar2 = _TestDefaultLanguage(uVar1,0), iVar2 != 0)) {
      DAT_009baf24 = DAT_009baf24 | 4;
      DAT_009baf28 = uVar1;
      DAT_009baf2c = uVar1;
    }
    bVar3 = (DAT_009baf24 & 4) == 0;
  }
  return bVar3;
}

