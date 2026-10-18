/* speed.exe 0046a5b0 FUN_0046a5b0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0046a5b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a13e;
  local_c = ExceptionList;
  if ((_DAT_00911230 & 1) == 0) {
    _DAT_00911230 = _DAT_00911230 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091122c = FUN_005cc240("MJumpCut");
    *param_1 = DAT_0091122c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091122c;
  return param_1;
}

