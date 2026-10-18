/* speed.exe 004493f0 FUN_004493f0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004493f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(*(int *)(param_1 + 0x2c),0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  piVar2 = (int *)(param_1 + 0x48);
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      (**(code **)(*DAT_009117f4 + 0x2c))(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

