/* speed.exe 00508c30 FUN_00508c30; analysis pseudocode, not buildable source.
 * calls 004fa510 FUN_004fa510
 * calls 00463ca0 FUN_00463ca0
 * calls 004febc0 FUN_004febc0
 * calls 0045f640 FUN_0045f640
 * calls 007c4b80 FUN_007c4b80
 * calls 00508b40 FUN_00508b40
 * calls 00504000 FUN_00504000
 */

/* WARNING: Removing unreachable block (ram,0x00508e32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00508c30(int *param_1,float param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  uint local_c0;
  float local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int *local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  int local_20 [7];
  
  if ((DAT_008f86ec != '\0') && (*param_1 != 0)) {
    local_70 = FUN_007c4b80();
    piVar12 = (int *)param_1[0xde];
    local_b4 = 0.0;
    local_bc = 0.0;
    local_80 = 0.0;
    local_74 = 0;
    local_64 = 0;
    bVar15 = false;
    local_6c = 0;
    local_7c = 0.0;
    local_68 = 0;
    if (piVar12 != param_1 + 0xde) {
      do {
        local_94 = piVar12;
        if ((piVar12[6] & 0x20000U) == 0) {
          local_44 = piVar12[0x19];
          cVar2 = FUN_00504000(piVar12 + 0x14,local_44,0,0x3f333333);
          if (cVar2 != '\0') goto LAB_00508d09;
          piVar13 = (int *)piVar12[2];
          if (piVar13 != piVar12 + 2) {
            do {
              FUN_00508b40(piVar13);
              piVar13 = (int *)*piVar13;
            } while (piVar13 != piVar12 + 2);
          }
        }
        else {
LAB_00508d09:
          piVar13 = (int *)piVar12[2];
          if (piVar13 != piVar12 + 2) {
            do {
              piVar10 = (int *)piVar13[0x20];
              if (piVar10 != piVar13 + 0x20) {
                iVar1 = piVar13[0x1f];
                if (iVar1 != local_68) {
                  iVar5 = *(int *)(iVar1 + 8);
                  local_b4 = *(float *)(iVar5 + 0xa8);
                  local_bc = *(float *)(iVar5 + 0x108);
                  local_80 = *(float *)(iVar5 + 0xbc);
                  local_74 = iVar1 + 0x60;
                  local_64 = iVar1 + 0x20;
                  local_6c = *(int *)(iVar5 + 0x90);
                  bVar15 = local_6c != 0;
                  local_7c = (float)*(byte *)(iVar5 + 0x94);
                  local_68 = iVar1;
                }
                do {
                  iVar1 = local_6c;
                  if (local_70 < (int)(uint)*(ushort *)(piVar10 + 0x1a)) {
                    if (bVar15) {
                      iVar5 = FUN_007c4b80();
                      iVar14 = (uint)*(ushort *)(piVar10 + 0x1b) + iVar5;
                      if (0xffff < (uint)(iVar5 + iVar14)) {
                        iVar14 = iVar14 + -0xffff;
                      }
                      piVar10[0x18] = 0;
                      piVar10[0x19] = -1;
                      uVar6 = FUN_007c4b80(piVar10 + 0x18,piVar10 + 0x19);
                      FUN_004febc0(iVar1,uVar6);
                      *(short *)(piVar10 + 0x1b) = (short)iVar14;
                    }
                    local_60 = piVar10[0x14];
                    local_5c = piVar10[0x15];
                    local_58 = piVar10[0x16];
                    local_ac = (float)piVar10[5];
                    local_a8 = (float)piVar10[6];
                    local_b0 = (float)piVar10[4];
                    local_40 = piVar10[0xc];
                    local_3c = piVar10[0xd];
                    local_38 = piVar10[0xe];
                    if (_DAT_00890968 < local_b4) {
                      local_78 = -(SQRT(local_ac * local_ac +
                                        local_a8 * local_a8 + local_b0 * local_b0) * local_b4 *
                                  param_2);
                      if (local_78 < _DAT_00890da8) {
                        local_78 = -1.0;
                      }
                      FUN_0045f640(&local_b0,&local_b0,&local_b0,local_78);
                    }
                    if ((local_bc < _DAT_00890968) || (_DAT_00890968 < local_bc)) {
                      local_a8 = local_a8 - local_bc * param_2;
                    }
                    else {
                      FUN_0045f640(&local_b0,&local_b0,&local_40,param_2);
                    }
                    FUN_0045f640(&local_60,&local_60,&local_b0,param_2);
                    piVar10[0x14] = local_60;
                    piVar10[0x15] = local_5c;
                    piVar10[0x16] = local_58;
                    piVar10[5] = (int)local_ac;
                    piVar10[4] = (int)local_b0;
                    local_24 = 0x3f800000;
                    piVar10[6] = (int)local_a8;
                    piVar10[0xc] = local_40;
                    piVar10[0xd] = local_3c;
                    piVar10[0xe] = local_38;
                    *(short *)(piVar10 + 0x1a) = (short)piVar10[0x1a] - (short)local_70;
                    local_28 = _DAT_0089096c -
                               (float)*(ushort *)(piVar10 + 0x1a) / (local_80 * _DAT_00898760);
                    local_2c = local_28 * local_28;
                    local_30 = local_2c * local_28;
                    FUN_004fa510(&local_30,local_74,local_20);
                    piVar10[3] = local_20[0];
                    uVar3 = FUN_007c4b80();
                    sVar4 = FUN_007c4b80();
                    if ((uVar3 & 1) != 0) {
                      sVar4 = -sVar4;
                    }
                    *(ushort *)((int)piVar10 + 0x6a) = uVar3 + sVar4;
                    FUN_004fa510(&local_30,local_64,&local_90);
                    local_90 = local_90 * _DAT_00899dd8;
                    local_8c = local_8c * _DAT_00899dd8;
                    local_88 = local_88 * _DAT_00899dd8;
                    local_84 = local_84 * _DAT_00899dd8;
                    uVar7 = FUN_007c4b80();
                    if ((int)uVar7 < 1) {
                      uVar7 = 0;
LAB_00509117:
                      local_c0 = uVar7;
                    }
                    else {
                      local_c0 = 0xff;
                      if ((int)uVar7 < 0x100) goto LAB_00509117;
                    }
                    uVar7 = FUN_007c4b80();
                    if ((int)uVar7 < 1) {
                      uVar7 = 0;
LAB_00509138:
                      uVar9 = uVar7;
                    }
                    else {
                      uVar9 = 0xff;
                      if ((int)uVar7 < 0x100) goto LAB_00509138;
                    }
                    uVar7 = FUN_007c4b80();
                    if ((int)uVar7 < 1) {
                      uVar7 = 0;
                    }
                    else if (0xff < (int)uVar7) {
                      uVar7 = 0xff;
                    }
                    uVar8 = FUN_007c4b80();
                    if ((int)uVar8 < 1) {
                      uVar8 = 0;
                    }
                    else if (0xff < (int)uVar8) {
                      uVar8 = 0xff;
                    }
                    piVar10[2] = ((uVar8 << 8 | local_c0) << 8 | uVar9) << 8 | uVar7;
                    if ((*(char *)(*(int *)(piVar13[0x1f] + 8) + 0x111) == '\0') &&
                       (uVar8 <= (uint)(int)*(char *)(*(int *)(piVar13[0x1f] + 8) + 0x110))) {
                      piVar11 = (int *)*piVar10;
                      param_1[*(ushort *)((int)piVar13 + 0x1e) + 1] =
                           param_1[*(ushort *)((int)piVar13 + 0x1e) + 1] + -1;
                      *param_1 = *param_1 + -1;
                      *(short *)(piVar13 + 7) = (short)piVar13[7] + -1;
                      iVar1 = *piVar10;
                      piVar12 = (int *)piVar10[1];
                      *piVar12 = iVar1;
                      *(int **)(iVar1 + 4) = piVar12;
                      FUN_00463ca0(DAT_00916060,piVar10);
                    }
                    else {
                      piVar11 = (int *)*piVar10;
                    }
                  }
                  else {
                    piVar11 = (int *)*piVar10;
                    param_1[*(ushort *)((int)piVar13 + 0x1e) + 1] =
                         param_1[*(ushort *)((int)piVar13 + 0x1e) + 1] + -1;
                    *param_1 = *param_1 + -1;
                    *(short *)(piVar13 + 7) = (short)piVar13[7] + -1;
                    piVar12 = (int *)piVar10[1];
                    iVar1 = *piVar10;
                    *piVar12 = iVar1;
                    *(int **)(iVar1 + 4) = piVar12;
                    FUN_00463ca0(DAT_00916060,piVar10);
                  }
                  piVar12 = local_94;
                  piVar10 = piVar11;
                } while (piVar11 != piVar13 + 0x20);
              }
              piVar13 = (int *)*piVar13;
            } while (piVar13 != piVar12 + 2);
          }
        }
        piVar12 = (int *)*piVar12;
      } while (piVar12 != param_1 + 0xde);
    }
  }
  return;
}

