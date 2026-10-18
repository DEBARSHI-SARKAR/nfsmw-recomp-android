/* speed.exe 005a5320 FUN_005a5320; analysis pseudocode, not buildable source.
 * calls 0059b660 FUN_0059b660
 * calls 005926b0 FUN_005926b0
 * calls 00586ca0 FUN_00586ca0
 * calls 00592500 FUN_00592500
 * calls 004ae8f0 FUN_004ae8f0
 */

undefined4 __thiscall FUN_005a5320(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) == param_1 + 8) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x10) == piVar3) {
    return 0;
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    FUN_0059b660();
    FUN_005926b0(param_3);
    return 0;
  }
  if (param_2 != 1) {
    if (param_2 == -1) {
      if (*piVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3 + -4;
      }
      FUN_004ae8f0((*(int *)(param_1 + 0x24) != iVar2) - 1U & 7);
      if (*piVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3 + -4;
      }
      iVar5 = *(int *)(param_1 + 0x24);
      if (iVar5 == iVar2) {
        return 0;
      }
      if (*(int *)(iVar5 + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar5 + 8) + -4;
      }
      if (iVar5 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(iVar5 + 4);
      }
      iVar5 = *piVar3;
      piVar3 = (int *)piVar3[1];
      *piVar3 = iVar5;
      *(int **)(iVar5 + 4) = piVar3;
      if (*(int *)(param_1 + 0x24) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x24) + 4);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 4;
      }
      piVar6 = *(int **)(iVar2 + 4);
      *piVar6 = (int)piVar3;
      *(int **)(iVar2 + 4) = piVar3;
      piVar3[1] = (int)piVar6;
      *piVar3 = iVar2;
      iVar2 = *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == iVar2) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 8);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar5 + -4;
        }
        if (iVar5 != iVar2) goto LAB_005a550c;
      }
      *(int *)(param_1 + 0x28) = iVar2;
    }
    goto LAB_005a550c;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) + -4;
  }
  FUN_004ae8f0((*(int *)(param_1 + 0x24) != iVar2) - 1U & 7);
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) + -4;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == iVar2) {
    return 0;
  }
  if (*(int *)(iVar5 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 4) + -4;
  }
  piVar3 = (int *)(-(uint)(iVar5 != 0) & iVar5 + 4U);
  iVar5 = *piVar3;
  piVar3 = (int *)piVar3[1];
  *piVar3 = iVar5;
  *(int **)(iVar5 + 4) = piVar3;
  if (*(int *)(param_1 + 0x24) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(param_1 + 0x24) + 4);
  }
  if (iVar2 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(iVar2 + 4);
  }
  iVar2 = *piVar6;
  *piVar6 = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar3;
  piVar3[1] = (int)piVar6;
  *piVar3 = iVar2;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar2 == iVar5) {
    if (*(int *)(iVar5 + 8) != 0) {
      *(int *)(param_1 + 0x28) = *(int *)(iVar5 + 8) + -4;
      goto LAB_005a550c;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar4 = FUN_00586ca0(iVar5);
    if (uVar4 < (uint)(*(int *)(param_1 + 0x18) + iVar1)) goto LAB_005a550c;
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x28) = iVar2 + -4;
      goto LAB_005a550c;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_005a550c:
  FUN_00592500(param_2);
  FUN_005926b0(param_3);
  return 1;
}

