/* speed.exe 005a5a90 FUN_005a5a90; analysis pseudocode, not buildable source.
 * calls 0059bff0 FUN_0059bff0
 * calls 0059c100 FUN_0059c100
 * calls 00515e90 FUN_00515e90
 * calls 00588d60 FUN_00588d60
 * calls 0059bfb0 FUN_0059bfb0
 * calls 00589870 FUN_00589870
 * calls 0045d380 FUN_0045d380
 */

void __thiscall FUN_005a5a90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_4;
  
  piVar1 = (int *)(param_1 + 0x2c);
  if (*(int **)(param_1 + 0x2c) != piVar1) {
    if (*(char *)(param_1 + 0x11f) != '\0') {
      FUN_0059c100();
      return;
    }
    local_4 = *(int *)(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0x34);
    if (param_2 == 1) {
LAB_005a5ad5:
      if (iVar7 == 0) {
LAB_005a5b36:
        if (*piVar1 == 0) {
          iVar7 = 0;
          local_4 = iVar7;
        }
        else {
          iVar7 = *piVar1 + -4;
          local_4 = iVar7;
        }
LAB_005a5b47:
        if ((iVar7 == 0) || (*(char *)(iVar7 + 0x28) != '\0')) goto LAB_005a5b69;
        goto LAB_005a5ad5;
      }
      iVar2 = *(int *)(param_1 + 0x30);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -4;
      }
      if ((iVar7 == iVar4) && (*(int *)(param_1 + 0x4c) == 0)) goto LAB_005a5b36;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -4;
      }
      if ((iVar7 != iVar2) || (*(int *)(param_1 + 0x4c) == 0)) {
        if (*(int *)(iVar7 + 4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4) + -4;
        }
        uVar3 = *(int *)(param_1 + 0x108) + 1;
        *(uint *)(param_1 + 0x108) = uVar3;
        if (*(int *)(param_1 + 0x104) - 1U < uVar3) {
          *(undefined4 *)(param_1 + 0x108) = 1;
        }
        goto LAB_005a5b47;
      }
      iVar7 = 0;
      FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10))
      ;
LAB_005a5b69:
      uVar3 = FUN_00588d60(iVar7);
      iVar4 = FUN_00588d60(local_4);
      iVar2 = *(int *)(param_1 + 0x10c);
      while ((uint)(iVar4 + iVar2) <= uVar3) {
        if (*(int *)(local_4 + 4) == 0) {
          local_4 = 0;
        }
        else {
          local_4 = *(int *)(local_4 + 4) + -4;
        }
        iVar4 = FUN_00588d60(local_4);
      }
    }
    else {
LAB_005a5bc4:
      if (iVar7 == 0) {
LAB_005a5c2a:
        if (*(int *)(param_1 + 0x30) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x30) + -4;
        }
        uVar3 = (*(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x10c)) - 1;
        local_4 = FUN_0045d380(uVar3 & ((int)uVar3 < 0) - 1);
        if (local_4 == 0) {
          local_4 = 0;
        }
        else {
          local_4 = local_4 + -4;
        }
LAB_005a5c6d:
        if ((iVar7 == 0) || (*(char *)(iVar7 + 0x28) != '\0')) goto LAB_005a5c93;
        goto LAB_005a5bc4;
      }
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + -4;
      }
      if ((iVar7 == iVar4) && (*(int *)(param_1 + 0x4c) == 0)) goto LAB_005a5c2a;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -4;
      }
      if ((iVar7 != iVar2) || (*(int *)(param_1 + 0x4c) == 0)) {
        if (*(int *)(iVar7 + 8) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8) + -4;
        }
        iVar2 = *(int *)(param_1 + 0x108) + -1;
        *(int *)(param_1 + 0x108) = iVar2;
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x104) + -1;
        }
        goto LAB_005a5c6d;
      }
      iVar7 = 0;
      FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10))
      ;
LAB_005a5c93:
      if (*(uint *)(param_1 + 0x10c) < *(int *)(param_1 + 0x104) - 1U) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 8);
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar2 + -4;
        }
        if (iVar7 == iVar4) {
          if (iVar2 == 0) {
            local_4 = 0;
          }
          else {
            local_4 = iVar2 + -4;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x38) != local_4) {
      *(int *)(param_1 + 0x38) = local_4;
      FUN_0059bff0();
    }
    if (((*(int *)(param_1 + 0x34) != iVar7) &&
        (FUN_0059bfb0(iVar7), *(char *)(param_1 + 0x11e) != '\0')) &&
       (*(int *)(param_1 + 0x34) != 0)) {
      uVar5 = FUN_00588d60(*(int *)(param_1 + 0x34));
      uVar6 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
      FUN_00589870(*(undefined4 *)(param_1 + 0x10c),*(int *)(param_1 + 0x104) + -1,uVar6,uVar5);
    }
  }
  return;
}

