/* speed.exe 007ebab0 FUN_007ebab0; analysis pseudocode, not buildable source.
 * calls 007e8ca0 FUN_007e8ca0
 */

int __fastcall FUN_007ebab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e8ca0();
  while (0x10 < iVar1) {
    if ((iVar1 == 0x20) || (iVar1 == 0x80)) {
      return *(int *)(param_1 + 0xc) + 0x10;
    }
    if (iVar1 != 0x100) {
      return 0;
    }
    iVar1 = FUN_007e8ca0();
  }
  if ((iVar1 != 0x10) && ((iVar1 == 1 || ((iVar1 != 2 && (iVar1 != 4)))))) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) + 0x20;
}

