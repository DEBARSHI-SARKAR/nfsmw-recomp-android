/* speed.exe 006047a0 FUN_006047a0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006047a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087645e;
  local_c = ExceptionList;
  if ((_DAT_0091e12c & 1) == 0) {
    _DAT_0091e12c = _DAT_0091e12c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e128 = FUN_005cc240("MNotifyFinished");
    *param_1 = DAT_0091e128;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e128;
  return param_1;
}

