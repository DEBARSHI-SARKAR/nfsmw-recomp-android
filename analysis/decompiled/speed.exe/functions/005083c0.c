/* speed.exe 005083c0 FUN_005083c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_005083c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  while (piVar1 != (int *)(param_1 + 0x2c)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0x2c);
  }
  return;
}

