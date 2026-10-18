/* speed.exe 007e3110 _CountryEnumProc@4; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007e6630 __stricmp
 * calls 007e3540 _LcidFromHexString
 * calls 007e32c0 _TestDefaultCountry
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2003 Debug */

bool _CountryEnumProc_4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char local_84 [124];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  uVar1 = _LcidFromHexString(param_1);
  iVar2 = (*DAT_009baf44)(uVar1,(-(uint)(DAT_009baf34 != 0) & 0xfffff005) + 0x1002,local_84,0x78);
  if (iVar2 == 0) {
    DAT_009baf24 = 0;
    bVar3 = true;
  }
  else {
    iVar2 = __stricmp(DAT_009baf38,local_84);
    if (iVar2 == 0) {
      iVar2 = _TestDefaultCountry(uVar1);
      if (iVar2 != 0) {
        DAT_009baf24 = DAT_009baf24 | 4;
        DAT_009baf28 = uVar1;
        DAT_009baf2c = uVar1;
      }
    }
    bVar3 = (DAT_009baf24 & 4) == 0;
  }
  return bVar3;
}

