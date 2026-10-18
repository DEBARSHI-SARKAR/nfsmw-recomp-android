/* speed.exe 006251e0 FUN_006251e0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006251e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087753e;
  local_c = ExceptionList;
  if ((_DAT_009204d8 & 1) == 0) {
    _DAT_009204d8 = _DAT_009204d8 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009204d4 = FUN_005cc240("MEnterFreeRoam");
    *param_1 = DAT_009204d4;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009204d4;
  return param_1;
}

