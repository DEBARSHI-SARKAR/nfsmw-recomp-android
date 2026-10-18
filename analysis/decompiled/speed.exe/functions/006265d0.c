/* speed.exe 006265d0 FUN_006265d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006265d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087773e;
  local_c = ExceptionList;
  if ((_DAT_009205a4 & 1) == 0) {
    _DAT_009205a4 = _DAT_009205a4 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009205a0 = FUN_005cc240("MQuitToFrontEnd");
    *param_1 = DAT_009205a0;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009205a0;
  return param_1;
}

