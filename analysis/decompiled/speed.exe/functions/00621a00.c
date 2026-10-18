/* speed.exe 00621a00 FUN_00621a00; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_00621a00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876dee;
  local_c = ExceptionList;
  if ((DAT_00920494 & 1) == 0) {
    DAT_00920494 = DAT_00920494 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00920490 = FUN_005cc240("MNotifyEngineBlown");
    *param_1 = DAT_00920490;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00920490;
  return param_1;
}

