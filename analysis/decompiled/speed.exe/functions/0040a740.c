/* speed.exe 0040a740 FUN_0040a740; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_0040a740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867a4e;
  local_c = ExceptionList;
  if ((DAT_0090d96c & 1) == 0) {
    DAT_0090d96c = DAT_0090d96c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d968 = FUN_005cc240("MNotifyPursuitLength");
    *param_1 = DAT_0090d968;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d968;
  return param_1;
}

