/* speed.exe 004b0e60 FUN_004b0e60; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004b0e60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b36e;
  local_c = ExceptionList;
  if ((_DAT_00913c20 & 1) == 0) {
    _DAT_00913c20 = _DAT_00913c20 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00913c1c = FUN_005cc240("MAIEngineRev");
    *param_1 = DAT_00913c1c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00913c1c;
  return param_1;
}

