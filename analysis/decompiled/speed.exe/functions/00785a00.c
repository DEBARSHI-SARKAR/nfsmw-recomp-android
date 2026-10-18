/* speed.exe 00785a00 FUN_00785a00; analysis pseudocode, not buildable source.
 * calls 0077b720 FUN_0077b720
 * calls 00410220 FUN_00410220
 * calls 0041c8a0 FUN_0041c8a0
 * calls 005d0370 FUN_005d0370
 * calls 007736e0 FUN_007736e0
 * calls 0076df10 FUN_0076df10
 * calls 00436150 FUN_00436150
 * calls 00438750 FUN_00438750
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 * calls 0077bcd0 FUN_0077bcd0
 * calls 005c5e80 FUN_005c5e80
 * calls 0077b810 FUN_0077b810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00785a00(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int *piVar18;
  byte bVar19;
  uint uVar20;
  float10 fVar21;
  float local_108;
  int *local_104;
  int *local_100;
  float local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ushort *local_e8;
  float local_e4;
  int *local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8;
  undefined **local_a4;
  int *local_a0;
  undefined4 local_9c;
  int local_98;
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [5];
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38 [2];
  float local_30;
  float local_2c [4];
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008821d6;
  local_c = ExceptionList;
  local_e8 = DAT_009b38a8;
  local_6c[3] = (float)DAT_009b38b4;
  local_b8 = 0xffffffff;
  bVar8 = false;
  local_bc = 20000.0;
  local_a0 = (int *)0x0;
  local_9c = 0;
  local_98 = 0;
  local_a4 = &PTR_FUN_00891594;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0041b250(0x40);
  local_2c[0] = *param_1 - _DAT_008b5a9c;
  local_18 = 0;
  local_2c[2] = param_1[2] - _DAT_008b5a9c;
  local_2c[1] = 0.0;
  local_1c = *param_1 + _DAT_008b5a9c;
  local_14 = param_1[2] + _DAT_008b5a9c;
  FUN_007736e0(local_2c,&local_a4);
  local_94[2] = *param_2;
  local_94[3] = param_2[1];
  local_84 = param_2[2];
  FUN_00410220(local_94 + 2);
  local_dc = (int *)FUN_0041c8a0();
  *(undefined1 *)((int)local_dc + 0xf) = 1;
  local_dc[1] = (int)local_dc;
  *local_dc = (int)local_dc;
  local_dc[2] = (int)local_dc;
  local_d8 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_104 = local_a0;
  piVar10 = local_a0;
  if (local_a0 != local_a0 + local_98) {
    do {
      iVar12 = *(int *)(*(int *)(local_e8 + 0x10) + *local_104 * 4);
      if (iVar12 != 0) {
        bVar19 = *(byte *)(iVar12 + 0xb);
        uVar20 = 0;
        if (bVar19 != 0) {
          do {
            local_108 = *(float *)(*(ushort *)(iVar12 + 0x12) + 0x14 + iVar12 + uVar20 * 4);
            FUN_00438750(local_94,&local_108);
            uVar20 = uVar20 + 1;
            piVar10 = local_a0;
          } while (uVar20 < bVar19);
        }
      }
      local_104 = local_104 + 1;
    } while (local_104 != piVar10 + local_98);
  }
  piVar10 = (int *)*local_dc;
  piVar18 = local_dc;
  local_100 = piVar10;
  if (piVar10 != local_dc) {
    do {
      uVar2 = *(ushort *)(piVar10 + 3);
      uVar20 = (uint)uVar2;
      local_a8 = uVar20;
      if (((((short)uVar2 < DAT_009b3874) &&
           ((puVar11 = (ushort *)((short)uVar2 * 0x16 + DAT_009b38c0), local_e8 = puVar11,
            *(char *)(local_f8 + 0x54) == '\0' || ((puVar11[5] & 1) == 0)))) &&
          ((*(char *)(local_f8 + 0x51) == '\0' || ((puVar11[5] & 0x8000) != 0)))) &&
         (((*(char *)(local_f8 + 0x52) == '\0' || ((~((byte)puVar11[5] >> 1) & 1) != 0)) &&
          ((*(char *)(local_f8 + 0x53) == '\0' ||
           (((~((byte)puVar11[5] >> 5) ^ (byte)puVar11[5] >> 1) & 1) != 0)))))) {
        puVar16 = (undefined4 *)((uint)*puVar11 * 0x20 + DAT_009b38bc);
        local_44 = *puVar16;
        local_40 = puVar16[1];
        local_3c = puVar16[2];
        puVar16 = (undefined4 *)((uint)puVar11[1] * 0x20 + DAT_009b38bc);
        local_50 = *puVar16;
        local_4c = puVar16[1];
        local_48 = puVar16[2];
        fVar21 = (float10)FUN_0076df10(&local_44,&local_50,param_1,&local_d4,1);
        local_fc = (float)fVar21;
        if ((*(byte *)((int)puVar11 + 0xb) & 1) == 0) {
          local_108 = (param_1[1] - local_d0) * (param_1[1] - local_d0) +
                      (param_1[2] - local_cc) * (param_1[2] - local_cc) +
                      (*param_1 - local_d4) * (*param_1 - local_d4);
          fVar21 = (float10)FUN_005c5e80(local_108);
        }
        else {
          FUN_0077b720(puVar11,local_fc,&local_d4);
          FUN_0077bcd0(param_1,&local_d4,&local_fc,0x3f800000,(int)(short)puVar11[4]);
          fVar21 = (float10)FUN_0077bcd0(param_1,&local_d4,&local_fc,0x3e800000,
                                         (int)(short)puVar11[4]);
        }
        if (_DAT_00890968 < param_3) {
          FUN_0077b810(puVar11,local_fc,&local_d4,local_38);
          local_c0 = -local_38[0];
          local_c8 = local_30;
          local_6c[4] = local_30;
          local_58 = 0;
          local_c4 = 0.0;
          local_54 = local_c0;
          FUN_00410220(&local_c8);
          local_b4 = *param_1 - local_d4;
          uVar2 = puVar11[5];
          local_104 = (int *)0x0;
          local_b0 = param_1[1] - local_d0;
          local_ac = param_1[2] - local_cc;
          local_e4 = local_c4 * local_b0 + local_c0 * local_ac + local_b4 * local_c8;
          do {
            bVar19 = (byte)(uVar2 >> 8);
            if (local_104 == (int *)0x0) {
              bVar19 = bVar19 >> 2;
            }
            else {
              bVar19 = bVar19 >> 1;
            }
            bVar19 = bVar19 & 1;
            iVar12 = (uint)puVar11[(int)local_104] * 0x20 + DAT_009b38bc;
            if ((iVar12 == 0) || (sVar3 = *(short *)(iVar12 + 0xe), sVar3 < 0)) {
              pbVar15 = &DAT_009b3830;
            }
            else {
              pbVar15 = (byte *)(sVar3 * 0x40 + DAT_009b38b8);
            }
            uVar20 = (uint)pbVar15[1];
            if (bVar19 == 0) {
              iVar12 = 0;
              uVar13 = uVar20;
            }
            else {
              iVar12 = *pbVar15 - 1;
              uVar13 = *pbVar15 - uVar20;
            }
            fVar5 = (float)(*(int *)(pbVar15 + iVar12 * 4 + 4) >> 0x12) * _DAT_009b3a68;
            if (0 < (int)uVar13) {
              fVar5 = -fVar5;
            }
            if (bVar19 == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = *pbVar15 - 1;
            }
            uVar13 = (uint)*pbVar15;
            iVar14 = uVar13 - 1;
            local_94[(int)local_104] =
                 fVar5 - (float)((*(int *)(pbVar15 + iVar12 * 4 + 4) << 0xe) >> 0x12) *
                         _DAT_009b3a68 * _DAT_008933d4;
            iVar12 = iVar14;
            if (bVar19 != 0) {
              uVar20 = uVar13 - uVar20;
              iVar12 = (uVar13 - iVar14) + -1;
            }
            fVar5 = (float)(*(int *)(pbVar15 + iVar12 * 4 + 4) >> 0x12) * _DAT_009b3a68;
            if (iVar14 < (int)uVar20) {
              fVar5 = -fVar5;
            }
            if (bVar19 != 0) {
              iVar14 = (uVar13 - iVar14) + -1;
            }
            local_104 = (int *)((int)local_104 + 1);
            local_6c[(int)local_104] =
                 (float)((*(int *)(pbVar15 + iVar14 * 4 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 *
                 _DAT_008933d4 + fVar5;
            puVar11 = local_e8;
          } while ((int)local_104 < 2);
          local_104 = (int *)((local_6c[2] - local_6c[1]) * local_fc + local_6c[1]);
          local_108 = (local_94[1] - local_94[0]) * local_fc + local_94[0];
          if (local_e4 <= (float)local_104) {
            fVar5 = _DAT_00890968;
            if (local_e4 < local_108) {
              fVar5 = local_e4 - local_108;
            }
          }
          else {
            fVar5 = local_e4 - (float)local_104;
          }
          fVar5 = fVar5 - local_e4;
          fVar7 = local_c8 * fVar5 + local_b4;
          fVar6 = local_c4 * fVar5 + local_b0;
          fVar5 = local_c0 * fVar5 + local_ac;
          fVar21 = (float10)FUN_005c5e80(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
          puVar11 = local_e8;
          local_108 = (float)fVar21;
          pfVar17 = (float *)((uint)*local_e8 * 0x20 + DAT_009b38bc);
          local_80 = *pfVar17;
          local_7c = pfVar17[1];
          local_78 = pfVar17[2];
          pfVar17 = (float *)((uint)local_e8[1] * 0x20 + DAT_009b38bc);
          local_74 = *pfVar17;
          local_70 = pfVar17[1];
          local_6c[0] = pfVar17[2];
          local_f4 = local_74 - local_80;
          local_f0 = local_70 - local_7c;
          local_ec = local_6c[0] - local_78;
          fVar21 = (float10)FUN_005c5e80(local_f4 * local_f4 +
                                         local_f0 * local_f0 + local_ec * local_ec);
          if (fVar21 == (float10)_DAT_00890968) {
            fVar21 = (float10)local_ec;
          }
          else {
            fVar21 = (float10)_DAT_0089096c / fVar21;
            local_f4 = (float)((float10)local_f4 * fVar21);
            local_f0 = (float)((float10)local_f0 * fVar21);
            fVar21 = fVar21 * (float10)local_ec;
          }
          fVar21 = (float10)local_94[2] * (float10)local_f4 +
                   (float10)local_94[3] * (float10)local_f0 + fVar21 * (float10)local_84;
          if (((puVar11[5] & 0x40) == 0) && (fVar21 < (float10)_DAT_00890968)) {
            fVar21 = -fVar21;
          }
          fVar21 = ((float10)_DAT_0089096c - fVar21) * (float10)_DAT_00890bf8 * (float10)param_3 +
                   (float10)local_108;
          uVar20 = local_a8;
          piVar10 = local_100;
        }
        piVar18 = local_dc;
        if ((!bVar8) || (fVar21 < (float10)local_bc)) {
          local_bc = (float)fVar21;
          *param_4 = local_d4;
          param_4[1] = local_d0;
          param_4[2] = local_cc;
          *param_5 = local_fc;
          bVar8 = true;
          local_b8 = uVar20;
        }
      }
      if (*(char *)((int)piVar10 + 0xf) == '\0') {
        piVar4 = (int *)piVar10[2];
        if (*(char *)((int)piVar4 + 0xf) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0xf);
          piVar10 = piVar4;
          piVar4 = (int *)*piVar4;
          while (local_100 = piVar10, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0xf);
            piVar10 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0xf);
          piVar9 = (int *)piVar10[1];
          piVar4 = piVar10;
          while ((piVar10 = piVar9, local_100 = piVar10, cVar1 == '\0' &&
                 (piVar4 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0xf);
            piVar9 = (int *)piVar10[1];
            piVar4 = piVar10;
          }
        }
      }
    } while (piVar10 != piVar18);
  }
  iVar12 = (int)(short)local_b8;
  local_4 = local_4 & 0xffffff00;
  FUN_00436150(&local_a8,*piVar18,piVar18);
  if (local_dc != (int *)0x0) {
    FUN_005d0370(local_dc,0x10,0);
  }
  local_dc = (int *)0x0;
  local_d8 = 0;
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return iVar12;
}

