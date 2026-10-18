/* speed.exe 005db8a0 FUN_005db8a0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005db8a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874dde;
  local_c = ExceptionList;
  if ((DAT_0091e04c & 1) == 0) {
    DAT_0091e04c = DAT_0091e04c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e048 = FUN_005cc240("MNotifyRaceTime");
    *param_1 = DAT_0091e048;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e048;
  return param_1;
}

