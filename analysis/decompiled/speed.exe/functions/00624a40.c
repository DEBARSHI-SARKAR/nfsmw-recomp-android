/* speed.exe 00624a40 FUN_00624a40; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00624a40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087743e;
  local_c = ExceptionList;
  if ((_DAT_009204cc & 1) == 0) {
    _DAT_009204cc = _DAT_009204cc | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009204c8 = FUN_005cc240("MRestartRace");
    *param_1 = DAT_009204c8;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009204c8;
  return param_1;
}

