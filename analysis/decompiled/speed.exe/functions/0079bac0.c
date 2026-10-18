/* speed.exe 0079bac0 FUN_0079bac0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 0079ba30 FUN_0079ba30
 */

undefined * FUN_0079bac0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088285e;
  local_c = ExceptionList;
  if ((DAT_009b9550 & 1) == 0) {
    DAT_009b9550 = DAT_009b9550 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_0079ba30();
    _atexit((_func_4879 *)&LAB_0088f0d0);
  }
  ExceptionList = local_c;
  return &DAT_009b9440;
}

