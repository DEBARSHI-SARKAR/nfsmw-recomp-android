/* speed.exe 0059b470 FUN_0059b470; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00592490 FUN_00592490
 * calls 005110d0 FUN_005110d0
 * calls 00586760 FUN_00586760
 * calls 00592600 FUN_00592600
 * calls 00589870 FUN_00589870
 * calls 00586ca0 FUN_00586ca0
 */

uint __thiscall FUN_0059b470(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 uVar5;
  undefined3 extraout_var;
  int *piVar4;
  uint uVar6;
  int iVar7;
  
  piVar4 = (int *)param_1[2];
  if ((piVar4 != param_1 + 2) && (piVar4 = param_1 + 4, (int *)param_1[4] != piVar4)) {
    if ((uint)param_1[6] < (uint)param_1[7]) {
      iVar2 = param_1[10];
      iVar7 = param_1[0xb];
      uVar6 = param_2;
      if (0 < (int)param_2) {
        do {
          if ((uint)(param_1[7] - param_1[6]) < (uint)param_1[8]) break;
          if (iVar7 != 0) {
            iVar1 = param_1[2];
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = iVar1 + -4;
            }
            if ((iVar7 == iVar1) || (*(int *)(iVar7 + 8) == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(iVar7 + 8) + -4;
            }
          }
          if (*(int *)(param_1[10] + 4) == 0) {
            param_2 = 0;
          }
          else {
            param_2 = *(int *)(param_1[10] + 4) - 4;
          }
          uVar6 = uVar6 - 1;
          param_1[10] = param_2;
          param_1[8] = param_1[8] + 1;
        } while (0 < (int)uVar6);
      }
      if (0x7fffffff < uVar6) {
        do {
          if (param_1[4] == 0) {
            param_2 = 0;
          }
          else {
            param_2 = param_1[4] - 4;
          }
          if (param_1[10] == param_2) break;
          if (iVar7 != 0) {
            FUN_00586760(0x7ab5521a);
            if (param_1[3] == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = param_1[3] + -4;
            }
            if ((iVar7 == iVar1) || (*(int *)(iVar7 + 4) == 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(iVar7 + 4) + -4;
            }
          }
          if (*(int *)(param_1[10] + 8) == 0) {
            param_2 = 0;
          }
          else {
            param_2 = *(int *)(param_1[10] + 8) - 4;
          }
          uVar6 = uVar6 + 1;
          param_1[10] = param_2;
          param_1[8] = param_1[8] + -1;
        } while ((int)uVar6 < 0);
      }
      if (iVar7 != param_1[0xb]) {
        param_2 = FUN_00586760(0x7ab5521a);
        param_1[0xb] = iVar7;
        if (iVar7 != 0) {
          param_2 = FUN_00586760(0x249db7b7);
        }
      }
      if (iVar2 == param_1[10]) {
        return param_2 & 0xffffff00;
      }
      iVar2 = param_1[9];
      uVar6 = FUN_00586ca0(iVar2);
      if ((uVar6 < (uint)param_1[8]) || ((uint)(param_1[6] + param_1[8]) <= uVar6)) {
        *(undefined1 *)((int)param_1 + 0xa1) = 1;
        FUN_00524920(param_1[1],0x6745352,0x16a259,1);
      }
      else {
        *(undefined1 *)((int)param_1 + 0xa1) = 0;
        if (param_1[0xb] == 0) {
          iVar2 = FUN_00592490(iVar2);
          param_1[0xb] = iVar2;
          FUN_005110d0();
        }
      }
      FUN_00592600();
      uVar3 = (**(code **)(*param_1 + 4))();
      uVar5 = (undefined3)((uint)uVar3 >> 8);
      if ((char)param_1[0x28] != '\0') {
        uVar3 = FUN_00586ca0(param_1[9]);
        FUN_00589870(param_1[6],param_1[7],param_1[8],uVar3);
        uVar5 = extraout_var;
      }
      return CONCAT31(uVar5,1);
    }
  }
  return (uint)piVar4 & 0xffffff00;
}

