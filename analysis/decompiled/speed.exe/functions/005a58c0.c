/* speed.exe 005a58c0 FUN_005a58c0; analysis pseudocode, not buildable source.
 * calls 0059bff0 FUN_0059bff0
 * calls 0059c100 FUN_0059c100
 * calls 00515e90 FUN_00515e90
 * calls 00588d60 FUN_00588d60
 * calls 0059bfb0 FUN_0059bfb0
 * calls 00589870 FUN_00589870
 */

void __thiscall FUN_005a58c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int **)(param_1 + 0x2c) == (int *)(param_1 + 0x2c)) {
    return;
  }
  if (*(char *)(param_1 + 0x11f) != '\0') {
    FUN_0059c100();
    return;
  }
  iVar7 = *(int *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x34);
  if (param_2 == 1) {
    if (iVar8 != 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x30) + -4;
      }
      if ((iVar8 == iVar1) && (*(int *)(param_1 + 0x4c) != 0)) {
        iVar8 = 0;
        FUN_00515e90(*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10));
        goto LAB_005a5a2c;
      }
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar1 + -4;
    }
    if (iVar8 != iVar6) {
      iVar6 = *(int *)(param_1 + 0x104) + -1;
      do {
        if (*(int *)(iVar8 + 4) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 4) + -4;
        }
        iVar2 = *(int *)(param_1 + 0x108) + 1;
        if (iVar6 < iVar2) {
          iVar2 = iVar6;
        }
        *(int *)(param_1 + 0x108) = iVar2;
        if ((iVar8 == 0) || (*(char *)(iVar8 + 0x28) != '\0')) break;
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar1 + -4;
        }
      } while (iVar8 != iVar2);
    }
    iVar6 = FUN_00588d60(iVar7);
    iVar1 = *(int *)(param_1 + 0x10c);
    uVar3 = FUN_00588d60(iVar8);
    if (uVar3 < (uint)(iVar6 + iVar1)) goto LAB_005a5a2c;
    iVar1 = *(int *)(iVar7 + 4);
  }
  else {
    if (iVar8 == 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x30) + -4;
      }
      goto LAB_005a5a2c;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar1 + -4;
    }
    if (iVar8 != iVar6) {
      do {
        if (*(int *)(iVar8 + 8) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 8) + -4;
        }
        iVar6 = *(int *)(param_1 + 0x108) + -1;
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        *(int *)(param_1 + 0x108) = iVar6;
        if ((iVar8 == 0) || (*(char *)(iVar8 + 0x28) != '\0')) break;
        if (iVar1 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar1 + -4;
        }
      } while (iVar8 != iVar6);
    }
    iVar1 = *(int *)(iVar7 + 8);
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar1 + -4;
    }
    if (iVar8 != iVar6) goto LAB_005a5a2c;
  }
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar1 + -4;
  }
LAB_005a5a2c:
  if (*(int *)(param_1 + 0x38) != iVar7) {
    *(int *)(param_1 + 0x38) = iVar7;
    FUN_0059bff0();
  }
  if (((*(int *)(param_1 + 0x34) != iVar8) &&
      (FUN_0059bfb0(iVar8), *(char *)(param_1 + 0x11e) != '\0')) && (*(int *)(param_1 + 0x34) != 0))
  {
    uVar4 = FUN_00588d60(*(int *)(param_1 + 0x34));
    uVar5 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
    FUN_00589870(*(undefined4 *)(param_1 + 0x10c),*(int *)(param_1 + 0x104) + -1,uVar5,uVar4);
  }
  return;
}

