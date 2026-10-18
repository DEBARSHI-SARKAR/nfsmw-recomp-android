/* speed.exe 00559d60 FUN_00559d60; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054f9a0 FUN_0054f9a0
 */

void __fastcall FUN_00559d60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x7c);
  while (piVar1 != (int *)(param_1 + 0x7c)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0x7c);
  }
  FUN_0054f9a0();
  *(undefined1 *)(param_1 + 0x68) = 0;
  iVar2 = DAT_0091cb20;
  *(undefined4 *)(DAT_0091cb20 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 7;
  return;
}

