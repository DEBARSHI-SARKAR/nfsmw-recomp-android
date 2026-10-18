/* speed.exe 004b5880 FUN_004b5880; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004b5880(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b60e;
  local_c = ExceptionList;
  if ((_DAT_00913c38 & 1) == 0) {
    _DAT_00913c38 = _DAT_00913c38 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00913c34 = FUN_005cc240("MPursuitBreaker");
    *param_1 = DAT_00913c34;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00913c34;
  return param_1;
}

