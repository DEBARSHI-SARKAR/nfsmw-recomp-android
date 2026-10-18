/* speed.exe 0056b270 FUN_0056b270; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_0056b270(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008714ee;
  local_c = ExceptionList;
  if ((DAT_0091dc90 & 1) == 0) {
    DAT_0091dc90 = DAT_0091dc90 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dc8c = FUN_005cc240("MAcceptEnterCareerEvent");
    *param_1 = DAT_0091dc8c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091dc8c;
  return param_1;
}

