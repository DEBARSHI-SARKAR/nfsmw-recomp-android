/* speed.exe 005db770 FUN_005db770; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005db770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874dbe;
  local_c = ExceptionList;
  if ((DAT_0091e044 & 1) == 0) {
    DAT_0091e044 = DAT_0091e044 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e040 = FUN_005cc240("MStateExit");
    *param_1 = DAT_0091e040;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e040;
  return param_1;
}

