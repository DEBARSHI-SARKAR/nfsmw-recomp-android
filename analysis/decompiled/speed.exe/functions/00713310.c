/* speed.exe 00713310 FUN_00713310; analysis pseudocode, not buildable source.
 * calls 004cca50 FUN_004cca50
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00712b70 FUN_00712b70
 * calls 0045da30 FUN_0045da30
 */

undefined4 __thiscall FUN_00713310(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_retaddr;
  
  if ((*(int **)(param_1 + 0xdc) != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x30))();
    iVar4 = (**(code **)(*param_2 + 0x30))();
    if (iVar3 == iVar4) {
      return 1;
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x60))();
  if ((cVar2 != '\0') &&
     ((((iVar3 = (**(code **)(*param_2 + 0x30))(), iVar3 == 5 ||
        (iVar3 = (**(code **)(*param_2 + 0x30))(), iVar3 == 4)) ||
       (iVar3 = (**(code **)(*param_2 + 0x30))(), iVar3 == 3)) ||
      ((iVar3 = (**(code **)(*param_2 + 0x30))(), iVar3 == 2 ||
       (iVar3 = (**(code **)(*param_2 + 0x30))(), iVar3 == 9)))))) {
    if ((*(int **)(param_1 + 0xdc) != param_2) &&
       (*(int **)(param_1 + 0xdc) = param_2, *(int *)(param_1 + 0x138) == 2)) {
      (**(code **)(*param_2 + 0x128))();
      return 1;
    }
    return 1;
  }
  uVar5 = (**(code **)(*param_2 + 0x28))();
  piVar6 = (int *)FUN_004cca50(uVar5);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 != *(int *)(param_1 + 0x60)) {
    while( true ) {
      piVar1 = *(int **)(iVar3 + 4);
      iVar4 = (**(code **)(*piVar1 + 0x30))();
      if ((iVar4 == 5) || (iVar4 = (**(code **)(*piVar1 + 0x30))(), iVar4 == 4)) break;
      iVar4 = (**(code **)(*piVar1 + 0x30))();
      if ((iVar4 == 3) ||
         ((iVar4 = (**(code **)(*piVar1 + 0x30))(), iVar4 == 9 ||
          (iVar3 = iVar3 + 8, iVar3 == *(int *)(param_1 + 0x60))))) break;
    }
    if (iVar3 != *(int *)(param_1 + 0x60)) {
      (**(code **)(*piVar6 + 0x30))();
      uVar5 = (**(code **)(**(int **)(iVar3 + 4) + 0x30))();
      (**(code **)(*piVar6 + 0x44))(uVar5);
      (**(code **)(**(int **)(iVar3 + 4) + 0x44))(unaff_retaddr);
      if (*(int **)(param_1 + 0xdc) == param_2) {
        return 1;
      }
      *(int **)(param_1 + 0xdc) = param_2;
      if (*(int *)(param_1 + 0x138) != 2) {
        return 1;
      }
      (**(code **)(*param_2 + 0x128))();
      return 1;
    }
  }
  iVar3 = FUN_0045da30(3);
  if (iVar3 == 0) {
    uVar5 = 3;
  }
  else {
    if (iVar3 == 1) {
      (**(code **)(*param_2 + 0x44))(4);
      goto LAB_00713460;
    }
    if (iVar3 != 2) {
      (**(code **)(*param_2 + 0x44))(3);
      goto LAB_00713460;
    }
    uVar5 = 5;
  }
  (**(code **)(*param_2 + 0x44))(uVar5);
LAB_00713460:
  piVar6 = *(int **)(param_1 + 0x6c);
  if (piVar6 != *(int **)(param_1 + 0x70)) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x30))();
      if (*piVar6 == iVar3) {
        FID_conflict__memcpy
                  (piVar6,piVar6 + 1,(*(int *)(param_1 + 0x70) - (int)(piVar6 + 1) >> 2) << 2);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -4;
        break;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x70));
  }
  if ((*(int **)(param_1 + 0xdc) != param_2) &&
     (*(int **)(param_1 + 0xdc) = param_2, *(int *)(param_1 + 0x138) == 2)) {
    (**(code **)(*param_2 + 0x128))();
  }
  uVar5 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x30))();
  FUN_00712b70(uVar5);
  return 1;
}

