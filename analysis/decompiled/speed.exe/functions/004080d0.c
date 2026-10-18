/* speed.exe 004080d0 FUN_004080d0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_004080d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086796e;
  local_c = ExceptionList;
  if ((DAT_0090d964 & 1) == 0) {
    DAT_0090d964 = DAT_0090d964 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d960 = FUN_005cc240("MPerpBusted");
    *param_1 = DAT_0090d960;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d960;
  return param_1;
}

