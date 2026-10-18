/* speed.exe 007749c0 FUN_007749c0; analysis pseudocode, not buildable source.
 * calls 00764ad0 FUN_00764ad0
 * calls 0076e890 FUN_0076e890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007749c0(uint param_1,uint param_2)

{
  ushort uVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  ushort *puVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  bool bVar11;
  uint local_70;
  ushort *local_68;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_4;
  
  local_60 = (uint)*(byte *)(param_1 * 0x20 + 0x10 + DAT_009b38bc);
  pfVar9 = (float *)(param_1 * 0x20 + DAT_009b38bc);
  local_70 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (2 < local_60) {
    bVar10 = param_1 != *(ushort *)(param_2 * 0x16 + DAT_009b38c0);
    uVar1 = *(ushort *)(param_2 * 0x16 + DAT_009b38c0 + 10);
    bVar3 = (byte)(uVar1 >> 8);
    if (bVar10) {
      bVar3 = bVar3 >> 1;
    }
    else {
      bVar3 = bVar3 >> 2;
    }
    iVar4 = FUN_0076e890(!bVar10 ^ bVar3 & 1);
    uVar7 = local_70;
    if (0 < iVar4) {
      FUN_00764ad0(bVar10,&local_58);
      if (bVar10) {
        local_58 = local_58 * _DAT_00890da8;
        local_54 = local_54 * _DAT_00890da8;
      }
      bVar10 = true;
      if (local_60 != 0) {
        local_68 = (ushort *)((int)pfVar9 + 0x12);
        do {
          uVar7 = (uint)*local_68;
          if (uVar7 != param_2) {
            puVar6 = (ushort *)(DAT_009b38c0 + uVar7 * 0x16);
            pfVar5 = (float *)((uint)*puVar6 * 0x20 + DAT_009b38bc);
            local_34 = (float *)((uint)*(ushort *)(DAT_009b38c0 + 2 + uVar7 * 0x16) * 0x20 +
                                DAT_009b38bc);
            pfVar8 = local_34;
            if (pfVar9 != pfVar5) {
              pfVar8 = pfVar5;
            }
            bVar11 = param_1 != puVar6[1];
            if (bVar11) {
              iVar4 = 9;
            }
            else {
              iVar4 = 10;
            }
            iVar4 = FUN_0076e890(!bVar11 ^ (byte)(uVar1 >> iVar4) & 1);
            if (iVar4 != 0) {
              local_14 = pfVar8[1];
              local_50 = *pfVar8 - *pfVar9;
              local_10 = pfVar8[2];
              local_2c = local_14 - pfVar9[1];
              local_4c = local_10 - pfVar9[2];
              fVar2 = local_50 * local_54 - local_4c * local_58;
              local_48 = local_50;
              local_44 = local_4c;
              local_30 = local_50;
              local_28 = local_4c;
              local_24 = local_50;
              local_20 = local_2c;
              local_1c = local_4c;
              local_4 = local_4c;
              if (!bVar10) {
                if (_DAT_00890968 <= local_5c) {
                  if (_DAT_00890968 > fVar2) goto LAB_00774c23;
                }
                else if (_DAT_00890968 <= fVar2) goto LAB_00774c0a;
                if (local_4c * local_40 - local_3c * local_50 < _DAT_00890968) goto LAB_00774c23;
              }
LAB_00774c0a:
              bVar10 = false;
              local_70 = uVar7;
              local_5c = fVar2;
              local_40 = local_50;
              local_3c = local_4c;
            }
          }
LAB_00774c23:
          local_68 = local_68 + 1;
          local_60 = local_60 - 1;
          uVar7 = local_70;
        } while (local_60 != 0);
      }
    }
  }
  return uVar7;
}

