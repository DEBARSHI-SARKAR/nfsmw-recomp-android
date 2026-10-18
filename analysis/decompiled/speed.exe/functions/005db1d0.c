/* speed.exe 005db1d0 FUN_005db1d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005db1d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874d7e;
  local_c = ExceptionList;
  if ((DAT_0091e030 & 1) == 0) {
    DAT_0091e030 = DAT_0091e030 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e02c = FUN_005cc240("MTriggerInside");
    *param_1 = DAT_0091e02c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e02c;
  return param_1;
}

