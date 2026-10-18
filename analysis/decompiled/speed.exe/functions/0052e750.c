/* speed.exe 0052e750 FUN_0052e750; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00454810 FUN_00454810
 * calls 0059bd70 FUN_0059bd70
 * calls 00525220 FUN_00525220
 * calls 0051ee90 FUN_0051ee90
 * calls 00593880 FUN_00593880
 * calls 005881c0 FUN_005881c0
 * calls 00454640 FUN_00454640
 * calls 005913b0 FUN_005913b0
 * calls 00652ad0 _malloc
 * calls 00573140 FUN_00573140
 * calls 006269b0 FUN_006269b0
 * calls 005999f0 FUN_005999f0
 * calls 00511330 FUN_00511330
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 * calls 005a3c30 FUN_005a3c30
 * calls 00593560 FUN_00593560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052e750(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_48;
  int local_44;
  int local_3c;
  int local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f500;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00593880();
  iVar9 = *(int *)(DAT_0091cf90 + 0x10);
  uVar3 = FUN_005a3c30(*(undefined4 *)(param_1 + 0xe0),DAT_0091ca35);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("pursuit_length_in_pursuit");
      local_48 = 0xd70811d1;
    }
    else {
      uVar3 = FUN_00454640("pursuit_length");
      local_48 = 0xd70811d1;
    }
    break;
  case 1:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("cops_involved_in_pursuit");
      local_48 = 0xc6113fcf;
    }
    else {
      uVar3 = FUN_00454640("cops_involved");
      local_48 = 0xc6113fcf;
    }
    break;
  case 2:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("cops_damaged_in_pursuit");
      local_48 = 0x2a1815d9;
    }
    else {
      uVar3 = FUN_00454640("cops_damaged");
      local_48 = 0x2a1815d9;
    }
    break;
  case 3:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("cops_destroyed_in_pursuit");
      local_48 = 0x189eaf7b;
    }
    else {
      uVar3 = FUN_00454640("cops_destroyed");
      local_48 = 0x189eaf7b;
    }
    break;
  case 4:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("tire_spikes_dodged_in_pursuit");
      local_48 = 0xdcd6b9ba;
    }
    else {
      uVar3 = FUN_00454640("tire_spikes_dodged");
      local_48 = 0xdcd6b9ba;
    }
    break;
  case 5:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("roadblocks_dodged_in_pursuit");
      local_48 = 0x9ef589be;
    }
    else {
      uVar3 = FUN_00454640("roadblocks_dodged");
      local_48 = 0x9ef589be;
    }
    break;
  case 6:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("helis_involved_in_pursuit");
      local_48 = 0x39a1413c;
    }
    else {
      uVar3 = FUN_00454640("helis_involved");
      local_48 = 0x39a1413c;
    }
    break;
  case 7:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("cost_to_state_in_pursuit");
      local_48 = 0xe34b2e6f;
    }
    else {
      uVar3 = FUN_00454640("cost_to_state");
      local_48 = 0xe34b2e6f;
    }
    break;
  case 8:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("total_infractions_in_pursuit");
      local_48 = 0xb3f963f8;
    }
    else {
      uVar3 = FUN_00454640("total_infractions");
      local_48 = 0xb3f963f8;
    }
    break;
  case 9:
    if (DAT_0091ca35 == '\0') {
      uVar3 = FUN_00454640("bounty_in_pursuit");
      local_48 = 0x48b4b99c;
    }
    else {
      uVar3 = FUN_00454640("bounty");
      local_48 = 0x48b4b99c;
    }
    break;
  default:
    uVar3 = 0;
    local_48 = 0;
  }
  FUN_0051e1a0(uVar3,0,0);
  local_4 = 0;
  if ((local_1c != 0) && (iVar4 = FUN_00511330(), iVar4 == 0xf)) {
    FUN_00511330();
    iVar4 = *(int *)(param_1 + 0xe4);
    uVar10 = (uint)(iVar4 == 0x10);
    local_3c = 0;
    local_44 = 0;
    if (uVar10 != 0xfffffff1) {
      do {
        if (local_44 == iVar4 + -1) {
          uVar3 = 0;
          if (DAT_0091ca35 == '\0') {
            uVar3 = FUN_005913b0(*(undefined4 *)(iVar9 + 0x9c44 + *(int *)(param_1 + 0xe0) * 8));
            iVar5 = *(int *)(iVar9 + 0x9c48 + *(int *)(param_1 + 0xe0) * 8);
          }
          else {
            iVar5 = FUN_005999f0(*(int *)(param_1 + 0xe0));
          }
          fVar2 = (float)iVar5;
          if (*(int *)(param_1 + 0xe0) == 0) {
            fVar2 = fVar2 * _DAT_00890984;
          }
          puVar6 = _malloc(0x28);
          local_4._0_1_ = 1;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)(param_1 + 0xe4);
            FUN_005881c0(0,0);
            *puVar6 = &PTR_FUN_0089c308;
            puVar6[6] = uVar11;
            puVar6[7] = 1;
            puVar6[8] = uVar3;
            puVar6[9] = fVar2;
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0059bd30(puVar6);
          local_3c = local_3c + -1;
        }
        else {
          iVar5 = local_44 + local_3c;
          pcVar7 = (char *)FUN_00454810(0x2c3c7feb,iVar5);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = (char *)FUN_006269b0(1);
          }
          uVar3 = FUN_00573140("BLACKLIST_RIVAL_%.2d_AKA",(int)*pcVar7);
          if (DAT_0091ca35 == '\0') {
            pcVar7 = (char *)FUN_00454810(0x2c3c7feb,iVar5);
            if (pcVar7 == (char *)0x0) {
              pcVar7 = (char *)FUN_006269b0(1);
            }
            uVar11 = FUN_00573140("BLACKLIST_RIVAL_%.2d_CAR",(int)*pcVar7);
          }
          else {
            uVar11 = 0;
          }
          puVar6 = _malloc(0x28);
          local_4._0_1_ = 2;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar8 = (undefined4 *)FUN_00454810(0xf9a7d5f7,iVar5);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)FUN_006269b0(4);
            }
            uVar1 = *puVar8;
            FUN_005881c0(0,0);
            *puVar6 = &PTR_FUN_0089c308;
            puVar6[6] = local_44 + 1;
            puVar6[7] = uVar3;
            puVar6[8] = uVar11;
            puVar6[9] = uVar1;
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0059bd30(puVar6);
        }
        local_44 = local_44 + 1;
      } while (local_44 < (int)(uVar10 + 0xf));
    }
    FUN_00593560(0);
    iVar9 = (*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0x50)) + 4;
    if (0 < iVar9) {
      do {
        FUN_0059bd70(1);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x8224e17c,local_48);
  FUN_0051ee90();
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

