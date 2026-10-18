/* speed.exe 004d27b0 FUN_004d27b0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_004d27b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c90e;
  local_c = ExceptionList;
  if ((DAT_00914aa4 & 1) == 0) {
    DAT_00914aa4 = DAT_00914aa4 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00914aa0 = FUN_005cc240("MAudioReflection");
    *param_1 = DAT_00914aa0;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00914aa0;
  return param_1;
}

