/* speed.exe 005a5020 FUN_005a5020; analysis pseudocode, not buildable source.
 * calls 00592600 FUN_00592600
 * calls 0059b660 FUN_0059b660
 * calls 00586ca0 FUN_00586ca0
 * calls 00592500 FUN_00592500
 * calls 00589870 FUN_00589870
 */

uint __thiscall FUN_005a5020(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 uVar5;
  undefined3 extraout_var;
  int *piVar4;
  uint uVar6;
  uint uVar7;
  undefined1 local_5;
  int local_4;
  
  piVar4 = param_1 + 2;
  local_5 = 0;
  if (((int *)param_1[2] == piVar4) || (piVar4 = param_1 + 4, (int *)param_1[4] == piVar4)) {
    return (uint)piVar4 & 0xffffff00;
  }
  if (*(char *)((int)param_1 + 0xa1) == '\0') {
    local_4 = param_1[8];
    uVar7 = param_1[9];
    uVar6 = param_1[10];
    if (param_2 == 1) {
      iVar1 = param_1[5];
      do {
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = iVar1 - 4;
        }
        if (uVar7 == uVar2) {
LAB_005a5139:
          return uVar2 & 0xffffff00;
        }
        if (*(int *)(uVar7 + 4) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(uVar7 + 4) - 4;
        }
        uVar2 = FUN_00586ca0(uVar7);
        if ((uint)(param_1[6] + local_4) <= uVar2) {
          local_4 = local_4 + 1;
          if (*(int *)(uVar6 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(int *)(uVar6 + 4) - 4;
          }
        }
      } while (*(char *)(uVar7 + 0x14) == '\0');
    }
    else if (param_2 == -1) {
      do {
        if (*piVar4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *piVar4 - 4;
        }
        if (uVar7 == uVar2) goto LAB_005a5139;
        if (*(int *)(uVar7 + 8) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(uVar7 + 8) - 4;
        }
        if (*(int *)(uVar6 + 8) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(int *)(uVar6 + 8) - 4;
        }
        if (uVar7 == uVar2) {
          local_4 = local_4 + -1;
          uVar6 = uVar7;
        }
      } while (*(char *)(uVar7 + 0x14) == '\0');
    }
    if (uVar7 != param_1[9]) {
      param_1[8] = local_4;
      param_1[9] = uVar7;
      param_1[10] = uVar6;
      FUN_00592500(param_2);
      FUN_00592600();
      local_5 = 1;
    }
  }
  else {
    FUN_0059b660();
  }
  uVar3 = (**(code **)(*param_1 + 4))();
  uVar5 = (undefined3)((uint)uVar3 >> 8);
  if ((char)param_1[0x28] != '\0') {
    uVar3 = FUN_00586ca0(param_1[9]);
    FUN_00589870(param_1[6],param_1[7],param_1[8],uVar3);
    uVar5 = extraout_var;
  }
  return CONCAT31(uVar5,local_5);
}

