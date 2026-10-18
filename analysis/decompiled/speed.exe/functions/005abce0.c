/* speed.exe 005abce0 FUN_005abce0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 00594570 FUN_00594570
 */

undefined * FUN_005abce0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873e1e;
  local_c = ExceptionList;
  if ((DAT_0091dce0 & 1) == 0) {
    DAT_0091dce0 = DAT_0091dce0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dcd8 = FUN_00594570();
    *(undefined1 *)(DAT_0091dcd8 + 0x15) = 1;
    *(int *)(DAT_0091dcd8 + 4) = DAT_0091dcd8;
    *(int *)DAT_0091dcd8 = DAT_0091dcd8;
    *(int *)(DAT_0091dcd8 + 8) = DAT_0091dcd8;
    DAT_0091dcdc = 0;
    _atexit((_func_4879 *)&LAB_0088e4f0);
  }
  ExceptionList = local_c;
  return &DAT_0091dcd4;
}

