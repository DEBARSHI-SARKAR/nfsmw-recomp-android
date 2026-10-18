/* speed.exe 005db6f0 FUN_005db6f0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005db6f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874d9e;
  local_c = ExceptionList;
  if ((DAT_0091e03c & 1) == 0) {
    DAT_0091e03c = DAT_0091e03c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e038 = FUN_005cc240("MStateEnter");
    *param_1 = DAT_0091e038;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e038;
  return param_1;
}

