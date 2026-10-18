/* speed.exe 00508b40 FUN_00508b40; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void __thiscall FUN_00508b40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x80);
  while (piVar4 != (int *)(param_2 + 0x80)) {
    piVar1 = (int *)*piVar4;
    param_1[*(ushort *)(param_2 + 0x1e) + 1] = param_1[*(ushort *)(param_2 + 0x1e) + 1] + -1;
    *param_1 = *param_1 + -1;
    *(short *)(param_2 + 0x1c) = *(short *)(param_2 + 0x1c) + -1;
    iVar2 = *piVar4;
    piVar3 = (int *)piVar4[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00463ca0(DAT_00916060,piVar4);
    piVar4 = piVar1;
  }
  return;
}

