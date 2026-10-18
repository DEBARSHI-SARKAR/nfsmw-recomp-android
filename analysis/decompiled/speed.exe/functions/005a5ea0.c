/* speed.exe 005a5ea0 FUN_005a5ea0; analysis pseudocode, not buildable source.
 * calls 0059c100 FUN_0059c100
 * calls 00515e90 FUN_00515e90
 * calls 00588d60 FUN_00588d60
 * calls 0059bfb0 FUN_0059bfb0
 * calls 00589870 FUN_00589870
 * calls 0045d380 FUN_0045d380
 */

void __thiscall FUN_005a5ea0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = (int *)(param_1 + 0x2c);
  if ((*(int **)(param_1 + 0x2c) == piVar1) || (*(char *)(param_1 + 0x11d) != '\0'))
  goto LAB_005a5f9e;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x4c) == 0) goto LAB_005a5f35;
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10));
  }
  else {
    iVar2 = FUN_0045d380(param_2 + -1);
    if ((iVar2 != 0) && (iVar3 = iVar2 + -4, iVar3 != 0)) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_1 + 0x28;
      }
      if ((iVar3 != iVar6) && (*(char *)(iVar2 + 0x24) != '\0')) {
        FUN_0059bfb0(iVar3);
        *(int *)(param_1 + 0x108) = param_2;
LAB_005a5f8f:
        *(undefined1 *)(param_1 + 0x11d) = 1;
        goto LAB_005a5f96;
      }
    }
LAB_005a5f35:
    *(undefined4 *)(param_1 + 0x108) = 1;
    if (*piVar1 != 0) {
      iVar2 = *piVar1 + -4;
      while (iVar2 != 0) {
        if (*(char *)(iVar2 + 0x28) != '\0') {
LAB_005a5f87:
          FUN_0059bfb0(iVar2);
          goto LAB_005a5f8f;
        }
        if (piVar1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1 + 0x28;
        }
        if (iVar2 == iVar3) goto LAB_005a5f87;
        if (*(int *)(iVar2 + 4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 4) + -4;
        }
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      }
    }
  }
LAB_005a5f96:
  FUN_0059c100();
LAB_005a5f9e:
  if (*(char *)(param_1 + 0x11e) != '\0') {
    uVar4 = FUN_00588d60(*(undefined4 *)(param_1 + 0x34));
    uVar5 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
    FUN_00589870(*(undefined4 *)(param_1 + 0x10c),*(int *)(param_1 + 0x104) + -1,uVar5,uVar4);
  }
  return;
}

