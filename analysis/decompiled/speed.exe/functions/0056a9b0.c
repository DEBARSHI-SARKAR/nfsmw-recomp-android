/* speed.exe 0056a9b0 FUN_0056a9b0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_0056a9b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008714ce;
  local_c = ExceptionList;
  if ((DAT_0091dc84 & 1) == 0) {
    DAT_0091dc84 = DAT_0091dc84 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dc80 = FUN_005cc240("MNotifyMessageDone");
    *param_1 = DAT_0091dc80;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091dc80;
  return param_1;
}

