/* speed.exe 006686d0 FUN_006686d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006686d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a4be;
  local_c = ExceptionList;
  if ((_DAT_0092c6b0 & 1) == 0) {
    _DAT_0092c6b0 = _DAT_0092c6b0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0092c6ac = FUN_005cc240("RBSimpleParams");
    *param_1 = DAT_0092c6ac;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0092c6ac;
  return param_1;
}

