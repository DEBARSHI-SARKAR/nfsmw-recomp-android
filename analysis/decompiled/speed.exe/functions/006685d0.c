/* speed.exe 006685d0 FUN_006685d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006685d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a47e;
  local_c = ExceptionList;
  if ((_DAT_0092c6a0 & 1) == 0) {
    _DAT_0092c6a0 = _DAT_0092c6a0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0092c69c = FUN_005cc240("AIParams");
    *param_1 = DAT_0092c69c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0092c69c;
  return param_1;
}

