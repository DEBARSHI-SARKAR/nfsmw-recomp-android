/* speed.exe 005abd70 FUN_005abd70; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 005945c0 FUN_005945c0
 */

undefined * FUN_005abd70(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873e3e;
  local_c = ExceptionList;
  if ((DAT_0091dcf0 & 1) == 0) {
    DAT_0091dcf0 = DAT_0091dcf0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dce8 = FUN_005945c0();
    *(undefined1 *)(DAT_0091dce8 + 0x11) = 1;
    *(int *)(DAT_0091dce8 + 4) = DAT_0091dce8;
    *(int *)DAT_0091dce8 = DAT_0091dce8;
    *(int *)(DAT_0091dce8 + 8) = DAT_0091dce8;
    DAT_0091dcec = 0;
    _atexit((_func_4879 *)&LAB_0088e4e0);
  }
  ExceptionList = local_c;
  return &DAT_0091dce4;
}

