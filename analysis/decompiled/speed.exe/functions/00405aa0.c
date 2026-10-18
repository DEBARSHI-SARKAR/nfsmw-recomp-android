/* speed.exe 00405aa0 FUN_00405aa0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00405aa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086770e;
  local_c = ExceptionList;
  if ((_DAT_0090d93c & 1) == 0) {
    _DAT_0090d93c = _DAT_0090d93c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d938 = FUN_005cc240("MReqBackup");
    *param_1 = DAT_0090d938;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d938;
  return param_1;
}

