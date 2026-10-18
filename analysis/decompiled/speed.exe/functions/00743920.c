/* speed.exe 00743920 FUN_00743920; analysis pseudocode, not buildable source.
 * calls 00768200 FUN_00768200
 * calls 006cf970 FUN_006cf970
 * calls 00789c90 FUN_00789c90
 * calls 006bebe0 FUN_006bebe0
 * calls 006cf930 FUN_006cf930
 * calls 006bea90 FUN_006bea90
 * calls 006beba0 FUN_006beba0
 * calls 006bed50 thunk_FUN_006bea90
 * calls 00743400 FUN_00743400
 * calls 006bec20 FUN_006bec20
 * calls 006becc0 FUN_006becc0
 * calls 007437b0 FUN_007437b0
 * calls 006bd940 FUN_006bd940
 * calls 006bed00 FUN_006bed00
 * calls 00743600 FUN_00743600
 * calls 006bec70 FUN_006bec70
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00743920(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float *local_88;
  uint local_84;
  float local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  float *local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  
  if (param_7 < 3) {
    local_84 = 0x10;
    local_7c = param_1;
    FUN_007437b0(param_3);
    local_80 = (float)param_3[2];
    if (DAT_00925e90 == 6) {
      local_58 = param_3[2];
      local_54 = *param_3;
      local_5c = -(float)param_3[1];
      FUN_00789c90(*(undefined4 *)(param_1 + 0x44),&local_5c,0);
      if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
        fVar9 = (float10)FUN_00768200(&local_5c);
        local_80 = (float)fVar9;
      }
    }
    local_70 = (float *)DAT_009ae498;
    pfVar5 = (float *)&DAT_0090355c;
    pfVar6 = (float *)&DAT_009b0ac0;
    do {
      local_38 = pfVar5[1];
      local_40 = pfVar5[-1] * _DAT_008b2f0c;
      local_3c = *pfVar5 * _DAT_008b2f10;
      FUN_006bd940(&local_30,param_4,&local_40);
      pfVar5 = pfVar5 + 4;
      fVar4 = -((local_28 - local_80) * (float)local_70);
      *pfVar6 = _DAT_009b27d0 * fVar4 + local_30;
      pfVar6[1] = _DAT_009b27d4 * fVar4 + local_2c;
      pfVar6 = pfVar6 + 4;
    } while ((int)pfVar5 < 0x90365c);
    FUN_00743400(&DAT_009b0ac0,*(undefined4 *)(param_1 + 0x44),&local_84,local_80,0x3d75c28f,
                 param_7 != *(int *)(param_1 + 0x1628));
    if (param_7 == *(int *)(param_1 + 0x1628)) {
      local_84 = FUN_00743600(local_84);
      pfVar6 = (float *)&DAT_009b0c90;
      local_88 = (float *)&DAT_009b0c90;
    }
    else {
      local_88 = (float *)&DAT_009b2910;
      pfVar6 = (float *)&DAT_009b2910;
    }
    uVar1 = local_84;
    if (2 < (int)local_84) {
      pfVar5 = pfVar6 + ((int)local_84 / 2) * 4;
      local_28 = pfVar5[2] + pfVar6[2];
      local_50 = (*pfVar6 + *pfVar5) * _DAT_008933d4;
      local_4c = (pfVar5[1] + pfVar6[1]) * _DAT_008933d4;
      local_48 = local_28 * _DAT_008933d4;
      _DAT_00903658 = _DAT_009b09a0 * _DAT_008b4bac + _DAT_008b2fd4;
      iVar3 = FUN_007c4b80();
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      else if (0xfe < iVar3) {
        iVar3 = 0xfe;
      }
      uVar8 = iVar3 << 0x18 | 0x808080;
      if (DAT_0090365c != 0) {
        local_70 = (float *)((uVar1 & 0xfffffffe) - 1);
        local_80 = 0.0;
        pfVar5 = pfVar6;
        if (0 < (int)local_70) {
          do {
            cVar2 = FUN_006bea90(*(undefined4 *)(local_7c + 0xd4),4,param_6);
            if (cVar2 != '\0') {
              FUN_006bec20(pfVar6);
              FUN_006bec20(&local_50);
              FUN_006bec20(pfVar6 + 4);
              FUN_006bec20(local_88 + (((int)local_80 + 2) % (int)uVar1) * 4);
              FUN_006beba0(uVar8);
              FUN_006beba0(uVar8);
              FUN_006beba0(uVar8);
              FUN_006beba0(uVar8);
              FUN_006bebe0(0x3e1eb852,0);
              FUN_006bebe0(0,0);
              FUN_006bebe0(0x3e1eb852,0);
              FUN_006bebe0(0x3e1eb852,0);
              FUN_006cf970(param_2);
            }
            local_80 = (float)((int)local_80 + 2);
            pfVar6 = pfVar6 + 8;
            pfVar5 = local_88;
          } while ((int)local_80 < (int)local_70);
        }
        if (((uVar1 & 1) != 0) &&
           (cVar2 = FUN_006bea90(*(undefined4 *)(local_7c + 0xd4),3,param_6), cVar2 != '\0')) {
          FUN_006bec20(pfVar5 + uVar1 * 4 + -4);
          FUN_006bec20(&local_50);
          FUN_006bec20(pfVar5);
          FUN_006beba0(uVar8);
          FUN_006beba0(uVar8);
          FUN_006beba0(uVar8);
          FUN_006bebe0(0x3e1eb852,0);
          FUN_006bebe0(0,0);
          FUN_006bebe0(0x3e1eb852,0);
          FUN_006cf970(param_2);
        }
        uVar7 = (int)uVar1 / 3;
        local_60 = uVar7 * 0x10;
        iVar3 = 0;
        local_64 = -uVar7;
        local_80 = 0.0;
        local_70 = local_88;
        local_74 = uVar1;
        local_6c = uVar7;
        do {
          iVar3 = iVar3 + 1;
          local_78 = uVar7;
          if (2 < iVar3) {
            local_78 = local_74;
          }
          local_68 = iVar3;
          cVar2 = thunk_FUN_006bea90(*(undefined4 *)(local_7c + 0xd4),local_78 * 2 + 2,param_6);
          if (cVar2 != '\0') {
            fVar4 = local_80;
            if ((int)local_80 < (int)(local_78 + (int)local_80)) {
              local_78 = (local_78 + (int)local_80) - (int)local_80;
              fVar4 = (float)(local_78 + (int)local_80);
              pfVar6 = local_70;
              do {
                local_38 = pfVar6[2];
                local_40 = (*pfVar6 - local_50) * _DAT_00903658 + local_50;
                local_3c = (pfVar6[1] - local_4c) * _DAT_00903658 + local_4c;
                local_28 = local_38;
                FUN_006bed00(pfVar6);
                FUN_006bed00(&local_40);
                FUN_006bec70(uVar8);
                FUN_006bec70(uVar8);
                FUN_006becc0(0x3e1eb852,0);
                FUN_006becc0(0x3f800000,0);
                pfVar6 = pfVar6 + 4;
                local_78 = local_78 + -1;
              } while (local_78 != 0);
              local_78 = 0;
              uVar7 = local_6c;
            }
            if ((int)local_84 <= (int)fVar4) {
              fVar4 = 0.0;
            }
            local_38 = local_88[(int)fVar4 * 4 + 2];
            local_40 = (local_88[(int)fVar4 * 4] - local_50) * _DAT_00903658 + local_50;
            local_3c = ((local_88 + (int)fVar4 * 4)[1] - local_4c) * _DAT_00903658 + local_4c;
            local_18 = local_38;
            FUN_006bed00(local_88 + (int)fVar4 * 4);
            FUN_006bed00(&local_40);
            FUN_006bec70(uVar8);
            FUN_006bec70(uVar8);
            FUN_006becc0(0x3e1eb852,0);
            FUN_006becc0(0x3f800000,0);
            FUN_006cf930(param_2);
            iVar3 = local_68;
          }
          local_74 = local_74 + local_64;
          local_70 = (float *)((int)local_70 + local_60);
          local_80 = (float)((int)local_80 + uVar7);
        } while (iVar3 < 3);
      }
    }
  }
  return;
}

