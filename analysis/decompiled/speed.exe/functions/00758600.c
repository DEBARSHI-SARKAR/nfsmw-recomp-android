/* speed.exe 00758600 FUN_00758600; analysis pseudocode, not buildable source.
 * calls 007585b0 FUN_007585b0
 */

void __thiscall FUN_00758600(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  (**(code **)(*param_1 + 8))();
  if (param_1[3] != 0) {
    iVar3 = param_1[1];
    piVar4 = (int *)param_1[2];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
  }
  param_1[3] = param_2;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x14))();
    iVar3 = param_1[3];
    piVar1 = *(int **)(iVar3 + 0x24);
    piVar4 = param_1 + 1;
    *piVar1 = (int)piVar4;
    *(int **)(iVar3 + 0x24) = piVar4;
    param_1[2] = (int)piVar1;
    *piVar4 = iVar3 + 0x20;
    return;
  }
  if (param_1[4] != 0) {
    piVar4 = param_1 + 1;
    iVar3 = FUN_007585b0();
    puVar2 = *(undefined4 **)(iVar3 + 4);
    *puVar2 = piVar4;
    *(int **)(iVar3 + 4) = piVar4;
    param_1[2] = (int)puVar2;
    *piVar4 = iVar3;
  }
  return;
}

