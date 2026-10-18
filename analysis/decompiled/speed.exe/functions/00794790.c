/* speed.exe 00794790 FUN_00794790; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00794790(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_009b57d4 & 1) == 0) {
    DAT_009b57d4 = DAT_009b57d4 | 1;
    _DAT_009b5660 = 0;
    DAT_009b56e8 = 0;
    DAT_009b5730 = 0;
    DAT_009b5790 = 0;
    DAT_009b5798 = 0;
    DAT_009b57a4 = 0;
    puVar2 = &DAT_009b5664;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _atexit((_func_4879 *)&LAB_0088f000);
  }
  return &DAT_009b5660;
}

