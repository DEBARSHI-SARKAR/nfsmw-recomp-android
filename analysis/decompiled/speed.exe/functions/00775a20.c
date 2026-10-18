/* speed.exe 00775a20 FUN_00775a20; analysis pseudocode, not buildable source.
 * calls 00401f50 FUN_00401f50
 * calls 005d59f0 FUN_005d59f0
 * calls 0040e100 FUN_0040e100
 */

int __thiscall FUN_00775a20(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iStack_14;
  undefined4 uStack_c;
  int *piStack_8;
  int iStack_4;
  
  if ((*(int *)(param_1 + 0x84) == 0) ||
     (piVar9 = (int *)(*(int *)(param_1 + 0x84) + 0x4c), piVar9 == (int *)0x0)) {
    return 0;
  }
  piVar3 = (int *)(**(code **)(*piVar9 + 0xa0))();
  piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
  if (piVar4 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar4 + 0x34))();
    bVar1 = true;
    if (cVar2 != '\0') goto LAB_00775a7a;
  }
  bVar1 = false;
LAB_00775a7a:
  uStack_c = 0;
  if (((piVar3 != (int *)0x0) && (bVar1)) && (iVar5 = (**(code **)(*piVar3 + 8))(), iVar5 != 0)) {
    uStack_c = *(undefined4 *)(iVar5 + 0x1c);
  }
  piVar4 = (int *)FUN_005d59f0(&LAB_004040d0);
  iStack_14 = 0;
  iStack_4 = (**(code **)(*piVar9 + 0x6c))();
  piVar9 = (int *)**(int **)(iStack_4 + 4);
  if (piVar9 != *(int **)(iStack_4 + 4)) {
    do {
      if (param_3 <= iStack_14) {
        return iStack_14;
      }
      if ((*(int *)(piVar9[2] + 0x14) != 0) && (iVar5 = FUN_005d59f0(&LAB_004039d0), iVar5 != 0)) {
        if (piVar4 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar4 + 4))();
          if (iVar5 == 0) {
            if (iVar6 == 0) goto LAB_00775b2e;
          }
          else if ((iVar6 != 0) && (*(int *)(iVar5 + 4) == *(int *)(iVar6 + 4))) {
LAB_00775b2e:
            cVar2 = (**(code **)(*piVar4 + 0x10))();
            if (cVar2 != '\0') goto LAB_00775bab;
          }
        }
        if (((((!bVar1) || (piVar3 == (int *)0x0)) ||
             (piVar7 = (int *)FUN_005d59f0(&LAB_00403700), piVar7 == (int *)0x0)) ||
            (piVar8 = (int *)(**(code **)(*piVar7 + 0xa0))(), piVar3 != piVar8)) ||
           ((cVar2 = FUN_00401f50(uStack_c,piVar7), cVar2 == '\0' &&
            ((FUN_0040e100(&piStack_8), piStack_8 == (int *)0x0 ||
             (cVar2 = (**(code **)(*piStack_8 + 0x34))(), cVar2 == '\0')))))) {
          *(int *)(param_2 + iStack_14 * 4) = iVar5;
          iStack_14 = iStack_14 + 1;
        }
      }
LAB_00775bab:
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(iStack_4 + 4));
  }
  return iStack_14;
}

