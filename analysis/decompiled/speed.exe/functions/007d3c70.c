/* speed.exe 007d3c70 __expandlocale; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 007e2800 ___get_qualified_locale
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007d1120 _strcmp
 * calls 007d3eb0 ___lc_strtolc
 * calls 007d0cd0 _strlen
 * calls 007d4020 ___lc_lctostr
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2003 Debug */

undefined * __expandlocale(char *param_1,undefined *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  int iVar2;
  BOOL BVar3;
  undefined1 local_9c [148];
  wchar_t local_8 [2];
  
  local_8 = (wchar_t  [2])DAT_00906980;
  if (param_1 == (char *)0x0) {
    param_2 = (undefined *)0x0;
  }
  else if ((*param_1 == 'C') && (param_1[1] == '\0')) {
    *param_2 = 0x43;
    param_2[1] = 0;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    sVar1 = _strlen(param_1);
    if ((0x81 < sVar1) ||
       ((iVar2 = _strcmp(&DAT_00906bf0,param_1), iVar2 != 0 &&
        (iVar2 = _strcmp(&DAT_00906b68,param_1), iVar2 != 0)))) {
      iVar2 = ___lc_strtolc(local_9c,param_1,0);
      if (iVar2 != 0) {
        return (undefined *)0x0;
      }
      BVar3 = ___get_qualified_locale
                        ((LPLC_STRINGS)local_9c,(UINT *)&DAT_009bad7c,(LPLC_STRINGS)local_9c);
      if (BVar3 == 0) {
        return (undefined *)0x0;
      }
      _DAT_009bad84 = (uint)DAT_009bad80;
      ___lc_lctostr(&DAT_00906bf0,local_9c);
      if ((*param_1 == '\0') || (sVar1 = _strlen(param_1), 0x81 < sVar1)) {
        param_1 = "";
      }
      DAT_00906bea = 0;
      _strncpy(&DAT_00906b68,param_1,0x82);
    }
    if (param_3 != (undefined2 *)0x0) {
      FID_conflict__memcpy(param_3,&DAT_009bad7c,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FID_conflict__memcpy(param_4,&DAT_009bad84,4);
    }
    FUN_007d0bd0(param_2,&DAT_00906bf0);
    param_2 = &DAT_00906bf0;
  }
  return param_2;
}

