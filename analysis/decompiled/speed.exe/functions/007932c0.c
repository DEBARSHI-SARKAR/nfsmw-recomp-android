/* speed.exe 007932c0 FUN_007932c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078fbc0 FUN_0078fbc0
 * calls 008414b0 FUN_008414b0
 */

void __fastcall FUN_007932c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x28);
    if (iVar1 != -1) {
      FUN_008414b0(*(undefined4 *)(param_1 + 0x38),iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x30);
  while (piVar2 != (int *)(param_1 + 0x30)) {
    iVar1 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar1;
    *(int **)(iVar1 + 4) = piVar3;
    if (piVar2 != (int *)0x0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(piVar2);
    }
    piVar2 = *(int **)(param_1 + 0x30);
  }
  return;
}

