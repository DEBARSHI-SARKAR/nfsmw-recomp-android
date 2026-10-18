/* speed.exe 004057f0 FUN_004057f0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004057f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008676ae;
  local_c = ExceptionList;
  if ((_DAT_0090d924 & 1) == 0) {
    _DAT_0090d924 = _DAT_0090d924 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d920 = FUN_005cc240("MForcePursuitStart");
    *param_1 = DAT_0090d920;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d920;
  return param_1;
}

