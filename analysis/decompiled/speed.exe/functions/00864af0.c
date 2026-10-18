/* speed.exe 00864af0 FUN_00864af0; analysis pseudocode, not buildable source.
 * calls 00865750 FUN_00865750
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00864af0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  *(undefined4 *)(param_1 + 0x24) = 0x20;
  *(undefined4 *)(param_1 + 0x44) = 1;
  if (param_3 == (undefined4 *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    param_3 = &local_18;
    local_8 = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar1 = FUN_00865750(param_1,param_2,param_3,param_4,param_5,param_6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return uVar1;
}

