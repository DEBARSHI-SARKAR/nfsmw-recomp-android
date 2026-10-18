/* speed.exe 005dddc0 FUN_005dddc0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005dddc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874ebe;
  local_c = ExceptionList;
  if ((DAT_0091e090 & 1) == 0) {
    DAT_0091e090 = DAT_0091e090 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e08c = FUN_005cc240("MNotifyTimer");
    *param_1 = DAT_0091e08c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e08c;
  return param_1;
}

