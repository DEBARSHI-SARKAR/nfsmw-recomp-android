/* speed.exe 005107c0 FUN_005107c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005107c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e21e;
  local_c = ExceptionList;
  if ((DAT_0091cc50 & 1) == 0) {
    DAT_0091cc50 = DAT_0091cc50 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091cc4c = FUN_005cc240("MNotifyRaceAbandoned");
    *param_1 = DAT_0091cc4c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091cc4c;
  return param_1;
}

