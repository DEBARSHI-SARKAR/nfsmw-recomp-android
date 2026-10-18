/* speed.exe 004b3a50 FUN_004b3a50; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_004b3a50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b50e;
  local_c = ExceptionList;
  if ((DAT_00913c30 & 1) == 0) {
    DAT_00913c30 = DAT_00913c30 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00913c2c = FUN_005cc240("MCountdownDone");
    *param_1 = DAT_00913c2c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00913c2c;
  return param_1;
}

