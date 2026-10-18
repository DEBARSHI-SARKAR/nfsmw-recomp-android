/* speed.exe 007f2c10 FUN_007f2c10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f2c10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8 [7];
  int *local_8c;
  undefined4 local_88;
  int local_84;
  int local_80 [9];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int *local_4c;
  int *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int *local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_80[3] = 0;
  local_80[4] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_34 = 0;
  local_80[0] = 0;
  piVar3 = param_2;
  piVar1 = param_1;
  for (iVar2 = 0x1a; piVar1 = piVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *piVar3;
    piVar3 = piVar3 + 1;
  }
  piVar1 = local_80 + 5;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  local_80[7] = param_2[3];
  local_80[8] = param_2[5];
  local_5c = param_2[1];
  local_8 = &DAT_008c048c;
  local_80[1] = 4;
  local_80[2] = 8;
  local_80[5] = 0x38;
  local_80[6] = 2;
  if (param_2[6] == -1) {
    local_58 = -1;
  }
  else {
    local_58 = param_2[6] + 0x30;
  }
  local_54 = param_2[7];
  iVar2 = *param_2;
  if (0x40 < iVar2) {
    if (iVar2 == 0x100) {
      local_8 = &DAT_008c041c;
    }
    else if (iVar2 == 0x200) {
      local_8 = &DAT_008c040c;
    }
    else if (iVar2 == 0x400) {
      local_8 = &DAT_008c03fc;
    }
    else {
      if (iVar2 != 0x800) {
        if (iVar2 != 0x1000) goto LAB_007f2e1a;
        local_a8[3] = param_2[9];
        local_a8[4] = param_2[0x15];
        local_a8[5] = param_2[0x14];
        local_a8[6] = param_2[0x16];
        local_8 = &DAT_008c03dc;
        local_40 = 0x10;
        local_3c = local_a8 + 3;
        goto LAB_007f2e17;
      }
      local_8 = &DAT_008c03ec;
    }
    local_30 = param_2[0x14];
    local_20 = param_2[0x18];
    local_28 = param_2[0x16];
    local_24 = param_2[0x17];
    local_2c = param_2[0x15];
    local_1c = param_2[0x19];
    local_40 = 0x18;
    local_3c = &local_30;
    goto LAB_007f2e17;
  }
  if (iVar2 == 0x40) {
    local_8 = &DAT_008c042c;
    goto LAB_007f2d3f;
  }
  if (iVar2 == 1) {
    local_34 = param_2[2];
    local_8 = &DAT_008c048c;
    local_40 = 4;
    local_3c = &local_34;
  }
  else if (iVar2 == 2) {
    local_80[3] = param_2[0x14];
    local_80[4] = param_2[0x15];
    local_8 = &DAT_008c047c;
    local_40 = 8;
    local_3c = local_80 + 3;
  }
  else {
    if (iVar2 == 4) {
      local_8 = &DAT_008c046c;
LAB_007f2d3f:
      local_40 = 0x10;
    }
    else {
      if (iVar2 == 8) {
        local_8 = &DAT_008c045c;
        goto LAB_007f2d3f;
      }
      if (iVar2 == 0x10) {
        local_8 = &DAT_008c044c;
        goto LAB_007f2d3f;
      }
      if (iVar2 != 0x20) goto LAB_007f2e1a;
      local_8 = &DAT_008c043c;
      local_40 = 0x10;
    }
    local_40 = 0x10;
    local_18 = param_2[0x14];
    local_14 = param_2[0x15];
    local_c = param_2[0x17];
    local_10 = param_2[0x16];
    local_3c = &local_18;
  }
LAB_007f2e17:
LAB_007f2e1a:
  iVar2 = param_2[8];
  if (iVar2 == 1) {
    local_80[6] = 0x12;
  }
  else if (iVar2 == 2) {
    local_80[6] = 0x22;
  }
  else if (iVar2 == 3) {
    local_80[6] = 0x42;
  }
  local_b4 = param_2[0xd];
  iStack_b0 = param_2[0xe];
  piVar1 = param_2 + 10;
  iStack_ac = param_2[0xf];
  iVar2 = 0;
  do {
    *(int *)((int)local_a8 + iVar2) = local_80[*piVar1];
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xc);
  local_50 = param_2[9];
  local_4c = local_a8;
  local_48 = &local_b4;
  if ((param_2[0x11] != 0) || (param_2[0x13] != 0)) {
    local_84 = param_2[0x10];
    local_80[1] = param_2[0x12];
    local_80[2] = param_2[0x13];
    local_44 = &local_88;
    local_88 = 0x14;
    local_80[0] = param_2[0x11];
  }
  piVar1 = param_1 + 0x1e;
  piVar3 = (int *)*piVar1;
  bVar4 = false;
  local_8c = param_1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x24))(piVar3,&param_2);
    bVar4 = ((uint)param_2 & 1) != 0;
    if (bVar4) {
      (**(code **)(*(int *)*piVar1 + 0x20))((int *)*piVar1);
      param_1[0x1c] = 0;
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
  }
  (**(code **)(**(int **)(param_1[0x1b] + 0x468) + 0x48))
            (*(int **)(param_1[0x1b] + 0x468),local_8,local_80 + 5,piVar1,0);
  if (bVar4) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

