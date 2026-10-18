/* speed.exe 005abc50 FUN_005abc50; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 00594570 FUN_00594570
 */

undefined * FUN_005abc50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873dfe;
  local_c = ExceptionList;
  if ((DAT_0091dcd0 & 1) == 0) {
    DAT_0091dcd0 = DAT_0091dcd0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dcc8 = FUN_00594570();
    *(undefined1 *)(DAT_0091dcc8 + 0x15) = 1;
    *(int *)(DAT_0091dcc8 + 4) = DAT_0091dcc8;
    *(int *)DAT_0091dcc8 = DAT_0091dcc8;
    *(int *)(DAT_0091dcc8 + 8) = DAT_0091dcc8;
    DAT_0091dccc = 0;
    _atexit((_func_4879 *)&LAB_0088e500);
  }
  ExceptionList = local_c;
  return &DAT_0091dcc4;
}

