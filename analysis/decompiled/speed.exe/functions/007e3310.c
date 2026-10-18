/* speed.exe 007e3310 _TestDefaultLanguage; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007e35c0 _GetPrimaryLen
 * calls 007e3540 _LcidFromHexString
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2003 Debug */

undefined4 _TestDefaultLanguage(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined1 local_84 [124];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  iVar1 = (*DAT_009baf44)((ushort)param_1 & 0x3ff | 0x400,1,local_84,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _LcidFromHexString(local_84);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_009baf40);
      sVar4 = _strlen(DAT_009baf40);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

