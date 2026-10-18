/* speed.exe 00668850 FUN_00668850; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00668850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a51e;
  local_c = ExceptionList;
  if ((_DAT_0092c6c8 & 1) == 0) {
    _DAT_0092c6c8 = _DAT_0092c6c8 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0092c6c4 = FUN_005cc240("DamageParams");
    *param_1 = DAT_0092c6c4;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0092c6c4;
  return param_1;
}

