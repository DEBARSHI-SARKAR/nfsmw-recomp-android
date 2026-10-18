/* speed.exe 005a51a0 FUN_005a51a0; analysis pseudocode, not buildable source.
 * calls 00592600 FUN_00592600
 * calls 0059b660 FUN_0059b660
 * calls 00586ca0 FUN_00586ca0
 * calls 00592500 FUN_00592500
 * calls 00589870 FUN_00589870
 */

uint __thiscall FUN_005a51a0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 uVar5;
  undefined3 extraout_var;
  int *piVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  bool local_1;
  
  piVar4 = param_1 + 2;
  local_1 = false;
  if (((int *)param_1[2] != piVar4) && (piVar4 = param_1 + 4, (int *)param_1[4] != piVar4)) {
    if (*(char *)((int)param_1 + 0xa1) == '\0') {
      iVar6 = param_1[10];
      iVar7 = param_1[8];
      iVar8 = param_1[9];
      if (param_2 == 1) {
        do {
          if (param_1[5] == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = param_1[5] + -4;
          }
          if (iVar8 == iVar1) {
            if (param_1[4] == 0) {
              iVar8 = 0;
              iVar7 = 1;
              iVar6 = 0;
            }
            else {
              iVar6 = param_1[4] + -4;
              iVar7 = 1;
              iVar8 = iVar6;
            }
          }
          else {
            if (*(int *)(iVar8 + 4) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iVar8 + 4) + -4;
            }
            uVar2 = FUN_00586ca0(iVar8);
            if ((uint)(param_1[6] + iVar7) <= uVar2) {
              iVar7 = iVar7 + 1;
              if (*(int *)(iVar6 + 4) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar6 + 4) + -4;
              }
            }
          }
        } while (*(char *)(iVar8 + 0x14) == '\0');
      }
      else if (param_2 == -1) {
        do {
          if (*piVar4 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *piVar4 + -4;
          }
          if (iVar8 == iVar1) {
            if (param_1[5] == 0) {
              iVar8 = 0;
              iVar7 = (param_1[7] - param_1[6]) + 1;
              iVar6 = iVar8;
            }
            else {
              iVar8 = param_1[5] + -4;
              iVar7 = (param_1[7] - param_1[6]) + 1;
              iVar6 = iVar8;
            }
          }
          else {
            if (*(int *)(iVar8 + 8) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iVar8 + 8) + -4;
            }
            if (*(int *)(iVar6 + 8) == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(iVar6 + 8) + -4;
            }
            if (iVar8 == iVar1) {
              iVar7 = iVar7 + -1;
              iVar6 = iVar8;
            }
          }
        } while (*(char *)(iVar8 + 0x14) == '\0');
      }
      local_1 = iVar8 != param_1[9];
      if (local_1) {
        param_1[9] = iVar8;
        param_1[8] = iVar7;
        param_1[10] = iVar6;
        FUN_00592500(param_2);
        FUN_00592600();
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
    return CONCAT31(uVar5,local_1);
  }
  return (uint)piVar4 & 0xffffff00;
}

