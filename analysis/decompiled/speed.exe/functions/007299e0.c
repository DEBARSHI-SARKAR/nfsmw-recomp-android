/* speed.exe 007299e0 FUN_007299e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007299e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x60 + param_2 * 4);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x6424);
    *(int *)(param_1 + 0x2c20) = *(int *)(param_1 + 0x2c20) + 1;
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *(int **)(param_1 + 0x60 + param_2 * 4) = piVar3;
  }
  *piVar3 = *piVar3 + 1;
  return;
}

