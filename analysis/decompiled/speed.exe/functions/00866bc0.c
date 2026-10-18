/* speed.exe 00866bc0 FUN_00866bc0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000120 Ordinal_111
 * calls EXTERNAL:00000117 Ordinal_17
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00866bc0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_18 = 0x10;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  iVar1 = Ordinal_17(*param_1,param_3,param_4,0,&local_14,&local_18);
  if (iVar1 == -1) {
    Ordinal_111();
    iVar1 = 0;
  }
  *local_10 = param_4;
  local_10[1] = param_3 >> 0x10;
  return iVar1;
}

