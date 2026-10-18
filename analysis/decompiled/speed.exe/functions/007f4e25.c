/* speed.exe 007f4e25 FUN_007f4e25; analysis pseudocode, not buildable source.
 * calls 007f59cf FUN_007f59cf
 */

void __fastcall FUN_007f4e25(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_007f59cf(1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

