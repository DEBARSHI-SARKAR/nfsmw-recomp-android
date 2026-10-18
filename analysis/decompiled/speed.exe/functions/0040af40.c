/* speed.exe 0040af40 FUN_0040af40; analysis pseudocode, not buildable source.
 * calls 005edb50 FUN_005edb50
 */

void __thiscall FUN_0040af40(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    if (*(int *)(param_1 + 0x84) != 0) {
      piVar1 = (int *)(**(code **)(*param_2 + 4))();
      iVar3 = **(int **)(param_1 + 0x84);
      uVar2 = (**(code **)(*piVar1 + 0x34))();
      iVar3 = (**(code **)(iVar3 + 0x58))(uVar2);
      if (iVar3 != 0) {
        (**(code **)(**(int **)(param_1 + 0x84) + 0x30))();
      }
    }
    FUN_005edb50();
    return;
  }
  return;
}

