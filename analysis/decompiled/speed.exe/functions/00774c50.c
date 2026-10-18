/* speed.exe 00774c50 FUN_00774c50; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 007749c0 FUN_007749c0
 * calls 007c4b80 FUN_007c4b80
 * calls 00401180 FUN_00401180
 * calls 007647b0 FUN_007647b0
 * calls 0040fe20 FUN_0040fe20
 * calls 00765410 FUN_00765410
 * calls 0076e8e0 FUN_0076e8e0
 * calls 0076e980 FUN_0076e980
 * calls 0076dda0 FUN_0076dda0
 * calls 0076e890 FUN_0076e890
 * calls 00773aa0 FUN_00773aa0
 * calls 00773a80 FUN_00773a80
 * calls 00766680 FUN_00766680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __thiscall
FUN_00774c50(int param_1,float *param_2,float *param_3,char *param_4,undefined1 *param_5)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  float fVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  float *pfVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte extraout_DL;
  int iVar16;
  byte *pbVar17;
  ushort *puVar18;
  int iVar19;
  bool bVar20;
  char local_c5;
  char *local_c4;
  ushort *local_c0;
  ushort *local_bc;
  int local_b0;
  uint local_ac;
  float local_a8;
  int local_a4;
  float local_9c;
  float local_98;
  float local_94;
  ushort *local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [12];
  char local_70 [4];
  char local_6c [4];
  ushort local_68 [2];
  char local_64 [100];
  
  uVar2 = *(ushort *)(param_1 + 0x8e);
  iVar8 = (int)*(char *)(param_1 + 0x8c);
  iVar19 = (short)uVar2 * 0x16 + DAT_009b38c0;
  iVar16 = (uint)*(ushort *)(iVar19 + iVar8 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar16 == 0) || (*(short *)(iVar16 + 0xe) < 0)) {
    pbVar17 = &DAT_009b3830;
  }
  else {
    pbVar17 = (byte *)(*(short *)(iVar16 + 0xe) * 0x40 + DAT_009b38b8);
  }
  if (iVar8 == 0) {
    bVar6 = (byte)((ushort)*(undefined2 *)(iVar19 + 10) >> 10);
  }
  else {
    bVar6 = (byte)((ushort)*(undefined2 *)(iVar19 + 10) >> 9);
  }
  local_b0 = 0;
  local_c0 = (ushort *)0x0;
  local_c5 = *(char *)(param_1 + 0x2c1);
  uVar14 = (uint)pbVar17[1];
  bVar6 = bVar6 & 1 ^ iVar8 == 1;
  local_c4 = (char *)uVar14;
  if (bVar6 != 0) {
    local_c4 = (char *)(*pbVar17 - uVar14);
  }
  uVar9 = uVar14;
  if (0 < (int)local_c4) {
    do {
      uVar9 = uVar9 - 1;
      if (bVar6 == 0) {
        uVar15 = uVar9;
        if ((int)uVar9 < 0) {
          uVar15 = 0;
        }
      }
      else {
        uVar15 = uVar14;
        if ((int)(uint)*pbVar17 <= (int)uVar14) {
          uVar15 = *pbVar17 - 1;
        }
      }
      if (((byte)*(undefined4 *)(pbVar17 + uVar15 * 4 + 4) & 0xf) == 1) {
        if ((int)local_c5 == uVar15) {
          local_b0 = (int)local_c0;
        }
        local_c0 = (ushort *)((int)local_c0 + 1);
      }
      uVar14 = uVar14 + 1;
      local_c4 = (char *)((int)local_c4 - 1);
    } while (local_c4 != (char *)0x0);
  }
  bVar6 = *(byte *)(iVar16 + 0x10);
  local_ac = (uint)bVar6;
  iVar8 = 0;
  if (bVar6 != 0) {
    puVar18 = (ushort *)(iVar16 + 0x12);
    do {
      puVar10 = (ushort *)((uint)*puVar18 * 0x16 + DAT_009b38c0);
      if ((uVar2 != puVar10[4]) && ((puVar10[5] & 1) == 0)) goto LAB_00774da9;
      iVar8 = iVar8 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar8 < (int)local_ac);
  }
  puVar10 = (ushort *)0x0;
LAB_00774da9:
  local_88 = param_1;
  if (bVar6 < 2) {
    uVar2 = *(ushort *)(iVar19 + 8);
  }
  else if (puVar10 == (ushort *)0x0) {
    if (_DAT_00890dc4 < param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2) {
      local_a8 = -1.0;
      local_c4 = (char *)0xbf800000;
      local_a4 = 0;
      if (bVar6 != 0) {
        local_bc = (ushort *)(iVar16 + 0x12);
        do {
          puVar18 = (ushort *)((uint)*local_bc * 0x16 + DAT_009b38c0);
          if ((*(short *)((uint)*local_bc * 0x16 + 8 + DAT_009b38c0) != *(short *)(local_88 + 0x8e))
             && ((~((byte)puVar18[5] >> 1) & 1) != 0)) {
            local_8c = (uint)puVar18[1] * 0x20 + DAT_009b38bc;
            iVar19 = (uint)*puVar18 * 0x20 + DAT_009b38bc;
            iVar8 = local_8c;
            if (iVar16 != iVar19) {
              iVar8 = iVar19;
            }
            puVar18 = (ushort *)FUN_00766680(iVar8,0xffffffff);
            if ((puVar18 != (ushort *)0x0) && ((~((byte)puVar18[5] >> 1) & 1) != 0)) {
              iVar19 = (uint)*puVar18 * 0x20 + DAT_009b38bc;
              FUN_0076dda0(puVar18,&local_9c);
              if (iVar8 != iVar19) {
                pfVar11 = (float *)FUN_00401180(local_7c,-local_9c,-local_98,-local_94);
                local_9c = *pfVar11;
                local_98 = pfVar11[1];
                local_94 = pfVar11[2];
              }
              FUN_0040fe20(&local_9c,&local_9c);
              fVar5 = local_94 * param_2[2] + local_98 * param_2[1] + local_9c * *param_2;
              if (local_a8 <= fVar5) {
                uVar2 = *local_bc;
                local_c4 = (char *)(float)(int)(short)puVar18[4];
                *param_4 = iVar16 == (uint)*(ushort *)((short)uVar2 * 0x16 + DAT_009b38c0) * 0x20 +
                                     DAT_009b38bc;
                local_a8 = fVar5;
              }
            }
          }
          local_a4 = local_a4 + 1;
          local_bc = local_bc + 1;
        } while (local_a4 < (int)(uint)*(byte *)(iVar16 + 0x10));
        if (_DAT_00890da8 != (float)local_c4) {
          cVar1 = *param_4;
          iVar8 = (short)uVar2 * 0x16 + DAT_009b38c0;
          uVar3 = *(undefined2 *)(iVar8 + cVar1 * 2);
          bVar6 = (byte)((ushort)*(undefined2 *)(iVar8 + 10) >> 8);
          if (cVar1 == '\0') {
            bVar6 = bVar6 >> 2;
          }
          else {
            bVar6 = bVar6 >> 1;
          }
          uVar12 = FUN_007c4b80();
          iVar8 = FUN_007749c0(uVar3,uVar12);
          if ((short)uVar2 == iVar8) {
            local_c5 = FUN_0076e980(((int)local_c0 - local_b0) + -1,bVar6 & 1 ^ cVar1 == '\x01');
          }
          else {
            local_c5 = FUN_0076e8e0(local_b0,bVar6 & 1 ^ cVar1 == '\x01');
          }
        }
      }
    }
    else {
      local_bc = (ushort *)0x0;
      if (bVar6 != 0) {
        local_c4 = local_70;
        local_c0 = (ushort *)(iVar16 + 0x12);
        iVar8 = DAT_009b38bc;
        do {
          if (((uint)*local_c0 != (int)(short)uVar2) &&
             (iVar19 = (uint)*local_c0 * 0x16, puVar18 = (ushort *)(iVar19 + DAT_009b38c0),
             (~(*(byte *)(iVar19 + 10 + DAT_009b38c0) >> 1) & 1) != 0)) {
            uVar4 = puVar18[1];
            iVar13 = (uint)*puVar18 * 0x20 + iVar8;
            iVar19 = (uint)uVar4 * 0x20 + iVar8;
            if (iVar16 != iVar13) {
              iVar19 = iVar13;
            }
            local_90 = (ushort *)FUN_00766680(iVar19,0xffffffff);
            if (((local_90 != (ushort *)0x0) && ((~((byte)local_90[5] >> 1) & 1) != 0)) &&
               ((iVar19 == (uint)*local_90 * 0x20 + iVar8 || ((local_90[5] & 0x40) == 0)))) {
              uVar14 = (uint)((int)*(short *)(iVar16 + 0xc) != (uint)uVar4);
              local_84 = CONCAT31(local_84._1_3_,uVar14 == 1);
              uVar7 = FUN_007647b0(uVar14);
              local_80 = CONCAT31(local_80._1_3_,uVar7);
              FUN_00765410(puVar18,uVar14);
              iVar13 = FUN_0076e890(extraout_DL ^ uVar14 == 1);
              iVar8 = DAT_009b38bc;
              if (iVar13 != 0) {
                uVar9 = FUN_007749c0((int)*(short *)(iVar19 + 0xc),(int)(short)local_90[4]);
                uVar4 = *local_c0;
                if (uVar4 == uVar9) {
                  iVar8 = (iVar13 - local_b0) + -1;
                  local_c4[0xc] = 0 < iVar8;
                  uVar12 = FUN_00773aa0(iVar8,local_84,local_80);
                }
                else {
                  local_c4[0xc] = '\0';
                  uVar12 = FUN_00773a80(local_b0,local_84,local_80);
                }
                local_bc = (ushort *)((int)local_bc + 1);
                *(undefined4 *)local_c4 = uVar12;
                *(uint *)(local_c4 + 4) = uVar14;
                *(uint *)(local_c4 + 8) = (uint)uVar4;
                local_c4 = local_c4 + 0x10;
                iVar8 = DAT_009b38bc;
              }
            }
          }
          local_c0 = local_c0 + 1;
          local_ac = local_ac - 1;
        } while (local_ac != 0);
        if (0 < (int)local_bc) {
          iVar8 = 0;
          if ((1 < (int)local_bc) &&
             (iVar8 = FUN_0045da30(local_bc), local_64[iVar8 * 0x10] != '\0')) {
            iVar8 = (iVar8 + 1) % (int)local_bc;
          }
          local_c5 = local_70[iVar8 * 0x10];
          *param_4 = local_6c[iVar8 * 0x10];
          uVar2 = local_68[iVar8 * 8];
        }
      }
    }
  }
  else {
    uVar2 = puVar10[4];
    bVar20 = iVar16 == (uint)*puVar10 * 0x20 + DAT_009b38bc;
    *param_4 = bVar20;
    bVar6 = (byte)(puVar10[5] >> 8);
    if (bVar20) {
      bVar6 = bVar6 >> 1;
    }
    else {
      bVar6 = bVar6 >> 2;
    }
    iVar8 = (uint)puVar10[bVar20] * 0x20 + DAT_009b38bc;
    if ((iVar8 == 0) || (*(short *)(iVar8 + 0xe) < 0)) {
      local_c5 = FUN_0076e8e0(local_b0,bVar6 & 1 ^ bVar20);
    }
    else {
      local_c5 = FUN_0076e8e0(local_b0,bVar6 & 1 ^ bVar20);
    }
  }
  if (uVar2 == *(ushort *)(local_88 + 0x8e)) {
    *param_5 = 1;
    return uVar2;
  }
  if (local_c5 < '\0') {
    local_c5 = '\0';
  }
  *(char *)(local_88 + 0x2c3) = local_c5;
  *(char *)(local_88 + 0x2c1) = local_c5;
  puVar18 = (ushort *)((short)uVar2 * 0x16 + DAT_009b38c0);
  iVar8 = (uint)*puVar18 * 0x20 + DAT_009b38bc;
  if (iVar16 == iVar8) {
    iVar8 = (uint)puVar18[1] * 0x20 + DAT_009b38bc;
  }
  *param_3 = (float)(*(int *)(DAT_009b38b8 + 4 +
                             (*(short *)(iVar8 + 0xe) * 0x10 + (int)local_c5) * 4) >> 0x12) *
             _DAT_009b3a68;
  *param_5 = 1;
  return uVar2;
}

