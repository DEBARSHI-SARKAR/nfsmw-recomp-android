/* speed.exe 00625c90 FUN_00625c90; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00625c90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087763e;
  local_c = ExceptionList;
  if ((_DAT_00920500 & 1) == 0) {
    _DAT_00920500 = _DAT_00920500 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009204fc = FUN_005cc240("MEnterPostRaceFlow");
    *param_1 = DAT_009204fc;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009204fc;
  return param_1;
}

