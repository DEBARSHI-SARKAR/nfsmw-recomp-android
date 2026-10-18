/* speed.exe 005d8e80 FUN_005d8e80; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_005d8e80(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(undefined4 **)(param_1 + 0x28) == (undefined4 *)(param_1 + 0x28)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x28);
  }
  while (piVar3 != (int *)0x0) {
    if (piVar3 == *(int **)(param_1 + 0x2c)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*piVar3;
    }
    if (piVar3[2] != 0) {
      thunk_FUN_007c7250(piVar3[2]);
    }
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00466440(piVar3);
    piVar3 = piVar4;
  }
  return;
}

