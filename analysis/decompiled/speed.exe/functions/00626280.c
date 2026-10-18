/* speed.exe 00626280 FUN_00626280; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00626280(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008776be;
  local_c = ExceptionList;
  if ((_DAT_00920570 & 1) == 0) {
    _DAT_00920570 = _DAT_00920570 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0092056c = FUN_005cc240("MNotifySimTick");
    *param_1 = DAT_0092056c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0092056c;
  return param_1;
}

