/* speed.exe 0056b340 FUN_0056b340; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_0056b340(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087150e;
  local_c = ExceptionList;
  if ((DAT_0091dc98 & 1) == 0) {
    DAT_0091dc98 = DAT_0091dc98 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dc94 = FUN_005cc240("MDeclineEnterCareerEvent");
    *param_1 = DAT_0091dc94;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091dc94;
  return param_1;
}

