/* speed.exe 00405b70 FUN_00405b70; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00405b70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086772e;
  local_c = ExceptionList;
  if ((_DAT_0090d944 & 1) == 0) {
    _DAT_0090d944 = _DAT_0090d944 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d940 = FUN_005cc240("MBreakerStopCops");
    *param_1 = DAT_0090d940;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d940;
  return param_1;
}

