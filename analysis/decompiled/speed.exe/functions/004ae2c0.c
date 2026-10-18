/* speed.exe 004ae2c0 FUN_004ae2c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004ae2c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b1be;
  local_c = ExceptionList;
  if ((_DAT_00913bf0 & 1) == 0) {
    _DAT_00913bf0 = _DAT_00913bf0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00913bec = FUN_005cc240("MNotifyMusicFlow");
    *param_1 = DAT_00913bec;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00913bec;
  return param_1;
}

