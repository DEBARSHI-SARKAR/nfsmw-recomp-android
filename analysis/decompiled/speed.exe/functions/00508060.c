/* speed.exe 00508060 FUN_00508060; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00507e90 FUN_00507e90
 */

void __fastcall FUN_00508060(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  while (piVar1 != (int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 0xc);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
    FUN_00507e90();
    FUN_00463ca0(DAT_00916064,piVar1);
    DAT_00916a54 = DAT_00916a54 + -1;
    piVar1 = *(int **)(param_1 + 8);
  }
  return;
}

