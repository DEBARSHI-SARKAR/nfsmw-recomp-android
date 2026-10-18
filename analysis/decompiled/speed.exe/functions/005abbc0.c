/* speed.exe 005abbc0 FUN_005abbc0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 00594520 FUN_00594520
 */

undefined * FUN_005abbc0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873dde;
  local_c = ExceptionList;
  if ((DAT_0091dcc0 & 1) == 0) {
    DAT_0091dcc0 = DAT_0091dcc0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dcb8 = FUN_00594520();
    *(undefined1 *)(DAT_0091dcb8 + 0x15) = 1;
    *(int *)(DAT_0091dcb8 + 4) = DAT_0091dcb8;
    *(int *)DAT_0091dcb8 = DAT_0091dcb8;
    *(int *)(DAT_0091dcb8 + 8) = DAT_0091dcb8;
    DAT_0091dcbc = 0;
    _atexit((_func_4879 *)&LAB_0088e510);
  }
  ExceptionList = local_c;
  return &DAT_0091dcb4;
}

