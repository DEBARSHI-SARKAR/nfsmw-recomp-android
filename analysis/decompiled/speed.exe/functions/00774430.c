/* speed.exe 00774430 FUN_00774430; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00765730 FUN_00765730
 * calls 0076fde0 FUN_0076fde0
 * calls 0076dda0 FUN_0076dda0
 * calls 0076e340 FUN_0076e340
 * calls 00766680 FUN_00766680
 * calls 0045da70 FUN_0045da70
 * calls 0076ff00 FUN_0076ff00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __thiscall
FUN_00774430(int param_1,float *param_2,float *param_3,byte *param_4,undefined1 *param_5)

{
  ushort uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  float10 fVar16;
  uint local_54;
  float local_50;
  int local_4c;
  ushort *local_48;
  float local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *param_5 = 1;
  uVar1 = *(ushort *)(param_1 + 0x8e);
  local_54 = (uint)uVar1;
  iVar13 = (short)uVar1 * 0x16 + DAT_009b38c0;
  iVar8 = (uint)*(ushort *)(iVar13 + *(char *)(param_1 + 0x8c) * 2) * 0x20 + DAT_009b38bc;
  bVar3 = false;
  local_24 = DAT_009b38b4;
  if (*(int *)(param_1 + 0x78) == 3) {
    puVar10 = *(ushort **)(param_1 + 0x2e4);
    if (puVar10 != (ushort *)0x0) {
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x2e0)) {
        do {
          if ((int)(short)uVar1 == (uint)*puVar10) break;
          iVar9 = iVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x2e0));
      }
      if (iVar9 + 1 < *(int *)(param_1 + 0x2e0)) {
        uVar12 = (uint)*(ushort *)(*(int *)(param_1 + 0x2e4) + (iVar9 + 1) * 2);
        iVar9 = uVar12 * 0x16;
        local_1c = (uint)*(ushort *)(iVar9 + DAT_009b38c0 + 2) * 0x20 + DAT_009b38bc;
        bVar14 = iVar8 == (uint)*(ushort *)(iVar9 + DAT_009b38c0) * 0x20 + DAT_009b38bc;
        if ((bVar14) || (iVar8 == local_1c)) {
          *param_4 = bVar14;
          local_54 = uVar12;
        }
        else {
          *param_4 = *param_4 ^ 1;
          *param_5 = 0;
        }
        goto LAB_0077454b;
      }
      bVar3 = true;
    }
    if (*(int *)(param_1 + 0x7c) == 3) {
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
LAB_0077454b:
  if (*(int *)(param_1 + 0x78) != 2) goto LAB_00774965;
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_0040fe20(&local_c,&local_c);
  puVar10 = (ushort *)FUN_00766680(iVar8,*(undefined2 *)(param_1 + 0x8e));
  if (1 < *(byte *)(iVar8 + 0x10)) {
    if (puVar10 != (ushort *)0x0) {
      local_54._0_2_ = puVar10[4];
      *param_4 = iVar8 == (uint)*puVar10 * 0x20 + DAT_009b38bc;
      goto LAB_00774965;
    }
    if ((*(byte *)(iVar13 + 10) & 1) == 0) {
      local_30 = 0;
      local_34 = 0;
      bVar5 = FUN_0076fde0();
      if (bVar5 != 0xff) {
        local_34 = 1 << (bVar5 & 0x1f);
        local_30 = local_34;
      }
      local_38 = 2.0;
      if (DAT_009b3900 == '\0') {
        local_2c = 1.0;
      }
      else {
        fVar16 = (float10)FUN_0045da70(0x3f800000);
        local_2c = (float)fVar16;
      }
      local_28 = 0;
      if (*(char *)(iVar8 + 0x10) != '\0') {
        local_48 = (ushort *)(iVar8 + 0x12);
        do {
          if ((uint)*local_48 != (int)*(short *)(param_1 + 0x8e)) {
            iVar13 = *(int *)(param_1 + 0x7c);
            if ((iVar13 == 0) || (bVar14 = true, iVar13 == 5)) {
              bVar14 = false;
            }
            if ((((iVar13 == 2) || (iVar13 == 4)) || (iVar13 == 3)) || (iVar13 == 6)) {
              bVar4 = true;
              bVar15 = true;
            }
            else {
              bVar15 = false;
              bVar4 = false;
            }
            local_50 = 0.0;
            local_40 = 100.0;
            local_4c = 0;
            puVar10 = (ushort *)((uint)*local_48 * 0x16 + DAT_009b38c0);
            local_3c = iVar8;
            while( true ) {
              if ((bVar14) || (bVar15)) {
                bVar5 = (byte)(puVar10[5] >> 8);
                bVar6 = bVar5 >> 4 & 1;
                if (bVar15) {
                  bVar6 = bVar6 | bVar5 >> 5 & 1;
                }
                if (bVar6 != 0) goto LAB_0077490b;
              }
              bVar15 = local_3c == (uint)*puVar10 * 0x20 + DAT_009b38bc;
              if ((((*(char *)(param_1 + 0x51) != '\0') &&
                   ((-1 < (short)puVar10[5] || ((bool)((byte)puVar10[5] >> 2 & 1) != bVar15)))) ||
                  ((*(char *)(param_1 + 0x52) != '\0' && ((~((byte)puVar10[5] >> 1) & 1) == 0)))) ||
                 (((*(char *)(param_1 + 0x53) != '\0' &&
                   (((~((byte)puVar10[5] >> 5) ^ (byte)puVar10[5] >> 1) & 1) == 0)) ||
                  (((char)puVar10[5] < '\0' &&
                   (cVar7 = FUN_0076ff00(*(undefined1 *)(DAT_009b38c8 + (short)puVar10[3] * 8 + 4),
                                         &local_30,&local_34), cVar7 == '\0'))))))
              goto LAB_0077490b;
              FUN_0076dda0(puVar10,&local_18);
              if (!bVar15) {
                local_18 = -local_18;
                local_14 = -local_14;
                local_10 = -local_10;
              }
              FUN_0040fe20(&local_18,&local_18);
              fVar2 = ABS((local_4 * local_10 + local_c * local_18 + local_8 * local_14) - local_2c)
              ;
              if (local_50 < fVar2) {
                local_50 = fVar2;
              }
              if (local_38 <= local_50) goto LAB_0077490b;
              local_20 = (uint)puVar10[2];
              local_40 = local_40 - (float)local_20 * _DAT_009b3a14;
              if ((0 < local_4c) && (local_40 < _DAT_00890968 != (local_40 == _DAT_00890968)))
              goto LAB_007748bb;
              local_3c = FUN_00765730(puVar10,local_3c);
              puVar11 = (ushort *)FUN_00766680(local_3c,puVar10[4]);
              if (puVar11 == (ushort *)0x0) break;
              if ((local_3c != (uint)*puVar11 * 0x20 + DAT_009b38bc) && ((puVar11[5] & 0x40) != 0))
              goto LAB_0077490b;
              if ((bVar3) ||
                 (local_4c = local_4c + 1, puVar10 = puVar11, bVar15 = bVar4, 0x13 < local_4c))
              goto LAB_007748bb;
            }
            if (local_4c == 0) goto LAB_0077490b;
LAB_007748bb:
            if ((puVar10 != (ushort *)0x0) && (local_50 < local_38)) {
              local_54 = (uint)(short)*local_48;
              local_38 = local_50;
              *param_4 = iVar8 == (uint)*(ushort *)((short)*local_48 * 0x16 + DAT_009b38c0) * 0x20 +
                                  DAT_009b38bc;
            }
          }
LAB_0077490b:
          local_28 = local_28 + 1;
          local_48 = local_48 + 1;
        } while (local_28 < (int)(uint)*(byte *)(iVar8 + 0x10));
      }
      if ((ushort)local_54 == *(ushort *)(param_1 + 0x8e)) {
        *param_4 = *param_4 ^ 1;
        *param_5 = 0;
      }
      goto LAB_00774965;
    }
  }
  *param_4 = *param_4 ^ 1;
  *param_5 = 0;
LAB_00774965:
  fVar16 = (float10)FUN_0076e340(*(undefined4 *)(param_1 + 0x2c4),(int)(short)(ushort)local_54,
                                 (int)(char)*param_4);
  *param_3 = (float)fVar16;
  return (ushort)local_54;
}

