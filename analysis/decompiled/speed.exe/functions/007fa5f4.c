/* speed.exe 007fa5f4 FUN_007fa5f4; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007fa5f4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  if (*(int *)(param_2 + 0x10) < 1) {
    piVar4 = (int *)(param_2 + 8);
    iVar1 = *piVar4;
    piVar2 = *(int **)(param_2 + 0xc);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *piVar4 = 0xb;
    *(undefined4 *)(param_2 + 0xc) = 0xb;
    puVar3 = *(undefined4 **)(param_1 + 0x2c);
    *puVar3 = piVar4;
    *(int **)(param_1 + 0x2c) = piVar4;
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *piVar4 = param_1 + 0x28;
  }
  return;
}

