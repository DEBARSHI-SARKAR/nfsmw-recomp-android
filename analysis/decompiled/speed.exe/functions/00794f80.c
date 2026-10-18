/* speed.exe 00794f80 FUN_00794f80; analysis pseudocode, not buildable source.
 * calls 00792f80 FUN_00792f80
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00794f80(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088273e;
  local_c = ExceptionList;
  if ((_DAT_009b584c & 1) == 0) {
    _DAT_009b584c = _DAT_009b584c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00792f80();
    _atexit((_func_4879 *)&LAB_0088f020);
  }
  _DAT_009b41c4 = &DAT_009b57d8;
  ExceptionList = local_c;
  return;
}

