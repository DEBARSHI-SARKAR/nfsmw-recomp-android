/* speed.exe 005dd6d0 FUN_005dd6d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005dd6d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874e7e;
  local_c = ExceptionList;
  if ((DAT_0091e088 & 1) == 0) {
    DAT_0091e088 = DAT_0091e088 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e084 = FUN_005cc240("MEnteringGameplay");
    *param_1 = DAT_0091e084;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e084;
  return param_1;
}

