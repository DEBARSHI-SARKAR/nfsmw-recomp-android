/* speed.exe 007b41c0 FUN_007b41c0; analysis pseudocode, not buildable source.
 * calls 007a26a0 FUN_007a26a0
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007b41c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008831ee;
  local_c = ExceptionList;
  if ((_DAT_009ba9d0 & 1) == 0) {
    _DAT_009ba9d0 = _DAT_009ba9d0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_007a26a0();
    _atexit((_func_4879 *)&LAB_0088f120);
  }
  ExceptionList = local_c;
  return &DAT_009ba3a0;
}

