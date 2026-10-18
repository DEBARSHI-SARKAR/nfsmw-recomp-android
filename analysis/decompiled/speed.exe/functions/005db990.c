/* speed.exe 005db990 FUN_005db990; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005db990(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874dfe;
  local_c = ExceptionList;
  if ((DAT_0091e054 & 1) == 0) {
    DAT_0091e054 = DAT_0091e054 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e050 = FUN_005cc240("MNotifyRaceTimeSecTick");
    *param_1 = DAT_0091e050;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e050;
  return param_1;
}

