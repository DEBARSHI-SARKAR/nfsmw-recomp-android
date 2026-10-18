/* speed.exe 0074d780 FUN_0074d780; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074d780(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  uint local_28;
  uint local_20;
  int local_1c;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    return;
  }
  local_20 = 0;
  local_1c = 0;
  pfVar15 = (float *)(param_1 + 0x110);
  do {
    iVar14 = *(int *)(param_1 + 0x17b4);
    uVar12 = (uint)(1 < (int)local_20);
    uVar8 = FUN_00452940();
    if (local_20 < uVar8) {
      iVar14 = local_1c + 0x10 + iVar14;
    }
    else {
      iVar14 = FUN_006269b0(0x10);
    }
    uVar8 = 0;
    *pfVar15 = -*(float *)(iVar14 + 4);
    iVar14 = *(int *)(*(int *)(param_1 + 0x84) + 0xa4);
    if (iVar14 != 0) {
      uVar5 = *(ushort *)(iVar14 + 10);
      if (uVar5 != 0xffff) {
        iVar16 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar5 * 2);
        psVar9 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar5 * 2);
        iVar14 = 0;
        if (0 < iVar16) {
          do {
            psVar9 = psVar9 + 1;
            iVar1 = *(int *)(DAT_009b09d4 + 0x1c) + *psVar9 * 8;
            if (*(int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar9 * 8) == 0x796c0cb0) {
              if (iVar1 != 0) {
                uVar8 = *(uint *)(iVar1 + 4);
                goto LAB_0074d86b;
              }
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar16);
        }
      }
      uVar8 = 0;
    }
LAB_0074d86b:
    if (uVar12 == 0) {
      local_28 = DAT_009b0960;
      if (DAT_009b0960 == 0) {
        iVar14 = *(int *)(param_1 + 0x17b4);
        uVar10 = FUN_00452940();
        if (uVar8 < uVar10) {
          local_28 = (uint)*(byte *)(iVar14 + 0x116 + uVar8);
        }
        else {
          pbVar11 = (byte *)FUN_006269b0(1);
          local_28 = (uint)*pbVar11;
        }
      }
    }
    else {
      local_28 = DAT_009b0964;
      if (DAT_009b0964 == 0) {
        iVar14 = *(int *)(param_1 + 0x17b4);
        uVar10 = FUN_00452940();
        if (uVar8 < uVar10) {
          pbVar11 = (byte *)(iVar14 + 0x108 + uVar8);
        }
        else {
          pbVar11 = (byte *)FUN_006269b0(1);
        }
        local_28 = (uint)*pbVar11;
      }
    }
    fVar2 = (float)(int)local_28 * _DAT_00890d60;
    if (*pfVar15 <= _DAT_00890968) {
      fVar2 = -fVar2;
    }
    *pfVar15 = fVar2 + *pfVar15;
    iVar14 = *(int *)(param_1 + 0x17b4);
    fVar2 = *(float *)(param_1 + 0x120 + uVar12 * 4);
    fVar3 = *(float *)(param_1 + 0x128 + uVar12 * 4);
    uVar12 = FUN_00452940();
    if (local_20 < uVar12) {
      pfVar13 = (float *)((int)pfVar15 + iVar14 + (-0x34 - param_1));
    }
    else {
      pfVar13 = (float *)FUN_006269b0(4);
    }
    fVar6 = *pfVar13;
    iVar14 = *(int *)(param_1 + 0x17b4);
    if (local_1c < 0x20) {
      uVar12 = FUN_00452940();
      if (uVar8 < uVar12) {
        fVar4 = *(float *)(iVar14 + 0x58 + uVar8 * 8);
      }
      else {
        pfVar13 = (float *)FUN_006269b0(8);
        fVar4 = *pfVar13;
      }
    }
    else {
      uVar12 = FUN_00452940();
      if (uVar8 < uVar12) {
        iVar14 = iVar14 + 0x58 + uVar8 * 8;
      }
      else {
        iVar14 = FUN_006269b0(8);
      }
      fVar4 = *(float *)(iVar14 + 4);
    }
    fVar7 = *(float *)(local_1c + *(int *)(param_1 + 0x17b4) + 0x1c);
    if ((fVar2 <= _DAT_00890968) || (fVar4 * fVar6 <= _DAT_00890968)) {
      pfVar15[8] = 1.0;
    }
    else {
      pfVar15[8] = (fVar4 * fVar6) / fVar2;
    }
    if ((fVar3 <= _DAT_00890968) || (fVar7 <= _DAT_00890968)) {
      pfVar15[0xc] = 1.0;
    }
    else {
      pfVar15[0xc] = fVar7 / fVar3;
    }
    local_1c = local_1c + 0x10;
    local_20 = local_20 + 1;
    pfVar15 = pfVar15 + 1;
    if (0x3f < local_1c) {
      return;
    }
  } while( true );
}

