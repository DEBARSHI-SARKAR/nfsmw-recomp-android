/* speed.exe 005de370 FUN_005de370; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005de370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874ede;
  local_c = ExceptionList;
  if ((DAT_0091e098 & 1) == 0) {
    DAT_0091e098 = DAT_0091e098 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e094 = FUN_005cc240("MNotifyMilestoneReached");
    *param_1 = DAT_0091e094;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e094;
  return param_1;
}

