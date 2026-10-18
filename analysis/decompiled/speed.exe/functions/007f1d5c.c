/* speed.exe 007f1d5c FUN_007f1d5c; analysis pseudocode, not buildable source.
 * calls 007f307a FUN_007f307a
 */

void __fastcall FUN_007f1d5c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_007f307a();
  }
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x10))();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa0));
  }
  return;
}

