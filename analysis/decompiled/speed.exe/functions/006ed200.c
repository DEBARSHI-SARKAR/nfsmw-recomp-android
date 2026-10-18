/* speed.exe 006ed200 FUN_006ed200; analysis pseudocode, not buildable source.
 * calls 006272f0 FUN_006272f0
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006ed200(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087e8fe;
  local_c = ExceptionList;
  if ((_DAT_00988f1c & 1) == 0) {
    _DAT_00988f1c = _DAT_00988f1c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_006272f0();
    _atexit((_func_4879 *)&LAB_0088eaf0);
  }
  ExceptionList = local_c;
  return &DAT_00988f0c;
}

