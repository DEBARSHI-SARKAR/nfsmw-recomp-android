/* speed.exe 00626480 FUN_00626480; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00626480(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008776fe;
  local_c = ExceptionList;
  if ((_DAT_00920590 & 1) == 0) {
    _DAT_00920590 = _DAT_00920590 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0092058c = FUN_005cc240("MPlayerEnterPursuit");
    *param_1 = DAT_0092058c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0092058c;
  return param_1;
}

