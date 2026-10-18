/* speed.exe 004059c0 FUN_004059c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004059c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008676ee;
  local_c = ExceptionList;
  if ((_DAT_0090d934 & 1) == 0) {
    _DAT_0090d934 = _DAT_0090d934 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d930 = FUN_005cc240("MReqRoadBlock");
    *param_1 = DAT_0090d930;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d930;
  return param_1;
}

