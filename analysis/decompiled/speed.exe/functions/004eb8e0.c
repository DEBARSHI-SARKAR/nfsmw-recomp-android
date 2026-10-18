/* speed.exe 004eb8e0 FUN_004eb8e0; analysis pseudocode, not buildable source.
 * calls 004e5870 FUN_004e5870
 * calls 004d9150 FUN_004d9150
 */

int * __thiscall FUN_004eb8e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_004d9150(param_2);
  if (piVar3 == (int *)0x0) {
    if (param_2 == -1) {
      return (int *)0x0;
    }
    piVar3 = (int *)FUN_004e5870(*(undefined4 *)(param_1 + 0x10),param_2);
    (**(code **)(*piVar3 + 0x14))(param_1);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(int **)(param_1 + 0x20) = piVar3;
      return piVar3;
    }
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int **)(iVar1 + 4) = piVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return piVar3;
}

