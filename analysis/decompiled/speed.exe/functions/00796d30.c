/* speed.exe 00796d30 FUN_00796d30; analysis pseudocode, not buildable source.
 * calls 00792920 FUN_00792920
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00796d30(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088275e;
  local_c = ExceptionList;
  if ((_DAT_009b5a90 & 1) == 0) {
    _DAT_009b5a90 = _DAT_009b5a90 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00792920();
    _atexit((_func_4879 *)&LAB_0088f030);
  }
  _DAT_009b41f0 = &DAT_009b5850;
  ExceptionList = local_c;
  return;
}

