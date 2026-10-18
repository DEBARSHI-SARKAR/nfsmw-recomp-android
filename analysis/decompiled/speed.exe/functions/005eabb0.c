/* speed.exe 005eabb0 FUN_005eabb0; analysis pseudocode, not buildable source.
 * calls 005e7110 FUN_005e7110
 */

void __thiscall FUN_005eabb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar7 = FUN_005e7110(*(undefined4 *)(*(int *)(param_2 + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  piVar3 = *(int **)(param_1 + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xf) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xf);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0xf);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0xf);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xf);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = iVar2;
    return;
  }
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

