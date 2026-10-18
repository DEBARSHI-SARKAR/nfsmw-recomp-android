/* speed.exe 006046c0 FUN_006046c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006046c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087643e;
  local_c = ExceptionList;
  if ((_DAT_0091e124 & 1) == 0) {
    _DAT_0091e124 = _DAT_0091e124 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e120 = FUN_005cc240("MNotifyChallengePassed");
    *param_1 = DAT_0091e120;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e120;
  return param_1;
}

