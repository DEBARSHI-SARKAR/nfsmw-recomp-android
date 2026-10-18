/* speed.exe 00405c40 FUN_00405c40; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00405c40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086774e;
  local_c = ExceptionList;
  if ((_DAT_0090d94c & 1) == 0) {
    _DAT_0090d94c = _DAT_0090d94c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d948 = FUN_005cc240("MPerpEscaped");
    *param_1 = DAT_0090d948;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d948;
  return param_1;
}

