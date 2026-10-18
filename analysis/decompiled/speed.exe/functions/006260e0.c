/* speed.exe 006260e0 FUN_006260e0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006260e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087769e;
  local_c = ExceptionList;
  if ((_DAT_0092054c & 1) == 0) {
    _DAT_0092054c = _DAT_0092054c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00920548 = FUN_005cc240("MNotifyOnlineRaceOver");
    *param_1 = DAT_00920548;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00920548;
  return param_1;
}

