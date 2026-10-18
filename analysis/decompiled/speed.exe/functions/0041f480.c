/* speed.exe 0041f480 FUN_0041f480; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 0041ecd0 FUN_0041ecd0
 * calls 005d59f0 FUN_005d59f0
 * calls 0041ae90 FUN_0041ae90
 */

bool __thiscall FUN_0041f480(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined4 extraout_ECX;
  undefined *puVar5;
  undefined *local_50;
  int local_48;
  undefined4 local_44;
  char *local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38 = "copsporthench";
  local_34 = "copsporthench";
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xc1a00000;
  local_24 = 0;
  local_20 = 0xc0800000;
  local_1c = 0;
  local_18 = 0xc1c00000;
  local_14 = 0;
  local_10 = 0x40800000;
  local_c = 0;
  local_8 = 0xc1c00000;
  local_4 = 0;
  iVar1 = *(int *)param_2[1];
  local_3c = "copcross";
  local_50 = (undefined *)0x0;
  if (iVar1 == 5) {
    local_50 = (undefined *)0x1;
    ppuVar4 = &PTR_s_AIGoalPursuit_008eb1d4;
  }
  else if (iVar1 == 6) {
    local_50 = (undefined *)0x1;
    ppuVar4 = &PTR_s_AIGoalPursuit_008eb1d8;
  }
  else {
    ppuVar4 = param_2;
    if (iVar1 == 7) {
      local_50 = (undefined *)0x3;
      ppuVar4 = &PTR_s_AIGoalPursuit_008eb1dc;
    }
  }
  puVar5 = param_2[5];
  if ((int)puVar5 < (int)local_50) {
    local_48 = (int)&local_3c - (int)ppuVar4;
    ppuVar4 = ppuVar4 + (int)puVar5;
    local_44 = param_1;
    do {
      iVar1 = FUN_0041ecd0(*(undefined4 *)(local_48 + (int)ppuVar4));
      if (iVar1 == 0) break;
      if (param_2[4] <= param_2[5]) {
        uVar2 = (**(code **)(param_2[2] + 0xc))(param_2[5] + 1);
        FUN_0041ae90(uVar2);
      }
      if ((int *)(param_2[3] + (int)param_2[5] * 4) != (int *)0x0) {
        *(int *)(param_2[3] + (int)param_2[5] * 4) = iVar1;
      }
      param_2[5] = param_2[5] + 1;
      piVar3 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar3 != (int *)0x0) {
        uVar2 = FUN_005cc240(*ppuVar4,extraout_ECX);
        (**(code **)(*piVar3 + 0x84))(uVar2);
        (**(code **)(*piVar3 + 0x40))(local_50);
        local_48 = FUN_005cc240(0);
        (**(code **)(*piVar3 + 0x48))(&local_48);
      }
      puVar5 = puVar5 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while ((int)puVar5 < (int)local_50);
  }
  return puVar5 == local_50;
}

