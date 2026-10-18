/* speed.exe 00626550 FUN_00626550; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00626550(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087771e;
  local_c = ExceptionList;
  if ((_DAT_0092059c & 1) == 0) {
    _DAT_0092059c = _DAT_0092059c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00920598 = FUN_005cc240("MPursuitOver");
    *param_1 = DAT_00920598;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00920598;
  return param_1;
}

