/* speed.exe 0069ce20 FUN_0069ce20; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00695810 FUN_00695810
 */

undefined4 __thiscall FUN_0069ce20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = param_2;
  if (((param_2 == (int *)0x0) || (*(int *)(param_1 + 0x7c) == 0)) ||
     (piVar4 = (int *)FUN_005d59f0(&LAB_00404010), piVar4 == (int *)0x0)) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 8))();
  iVar6 = (**(code **)(*piVar4 + 4))();
  iVar1 = iVar6 + (int)piVar2;
  if (iVar1 < 1) {
    iVar5 = 1;
  }
  else if (iVar1 <= iVar5) {
    iVar5 = iVar1;
  }
  if (((iVar6 != 0) && (iVar5 != iVar6)) &&
     ((cVar3 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x20))(), cVar3 == '\0' || (iVar5 < 3)))) {
    cVar3 = (**(code **)(*(int *)(param_1 + 0x48) + 0x40))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar4 + 0xc))(iVar5);
    }
    else {
      cVar3 = FUN_00695810(&param_2);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*param_2 + 4))(iVar5);
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}

