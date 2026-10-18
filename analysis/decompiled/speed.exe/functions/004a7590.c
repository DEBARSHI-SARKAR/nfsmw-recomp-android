/* speed.exe 004a7590 FUN_004a7590; analysis pseudocode, not buildable source.
 * calls 0049be30 FUN_0049be30
 * calls 007c4b80 FUN_007c4b80
 * calls 0049b740 FUN_0049b740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a7590(int param_1,float param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  bool bVar18;
  int local_34;
  float local_30;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    param_2 = (float)*(byte *)(param_1 + 0x13) * param_2;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  iVar8 = FUN_007c4b80();
  puVar9 = *(ushort **)(iVar6 + 8);
  local_30 = 0.0;
  if (puVar9 == (ushort *)0x0) {
    if (iVar8 < 0) {
      local_34 = 0;
    }
    else {
      local_34 = iVar8;
      if ((int)(uint)*(ushort *)(iVar6 + 0x14) <= iVar8) {
        local_34 = *(ushort *)(iVar6 + 0x14) - 1;
      }
    }
    bVar7 = param_2 != (float)iVar8;
    local_30 = param_2 - (float)iVar8;
    iVar8 = *(ushort *)(iVar6 + 0x14) - 1;
    bVar18 = SBORROW4(local_34,iVar8);
    iVar8 = local_34 - iVar8;
    goto LAB_004a7724;
  }
  if (iVar8 < (int)(uint)*puVar9) {
    local_34 = 0;
LAB_004a768b:
    if (param_2 == _DAT_00890968) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
      local_30 = param_2 / (float)*puVar9;
    }
  }
  else {
    if (*(ushort *)(param_1 + 0x10) == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(ushort *)(param_1 + 0x10) - 1;
    }
    puVar10 = puVar9 + iVar17;
    if (iVar8 < (int)(uint)puVar9[iVar17]) {
      for (; (0 < iVar17 && (iVar8 < (int)(uint)*puVar10)); puVar10 = puVar10 + -1) {
        iVar17 = iVar17 + -1;
      }
    }
    else {
      while ((iVar17 < (int)(*(ushort *)(iVar6 + 0x14) - 2) &&
             (puVar10 = puVar10 + 1, (int)(uint)*puVar10 <= iVar8))) {
        iVar17 = iVar17 + 1;
      }
    }
    local_34 = iVar17 + 1;
    if (local_34 == 0) goto LAB_004a768b;
    fVar13 = (float)puVar9[iVar17];
    bVar7 = param_2 != fVar13;
    if (bVar7) {
      local_30 = (param_2 - fVar13) / ((float)puVar9[local_34] - fVar13);
    }
  }
  iVar8 = *(ushort *)(iVar6 + 0x14) - 1;
  bVar18 = SBORROW4(local_34,iVar8);
  iVar8 = local_34 - iVar8;
LAB_004a7724:
  if (bVar18 == iVar8 < 0) {
    bVar7 = false;
  }
  *(short *)(param_1 + 0x10) = (short)local_34;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar12 = (uint)*(byte *)(iVar6 + 0x16);
    puVar9 = (ushort *)(iVar6 + 0x18 + uVar12 * local_34 * 8);
    iVar8 = *(int *)(iVar6 + 0xc);
    if ((bVar7) && (local_34 < (int)(*(ushort *)(iVar6 + 0x14) - 1))) {
      puVar10 = (ushort *)(iVar6 + 0x18 + (local_34 + 1) * (uint)*(byte *)(iVar6 + 0x16) * 8);
      iVar17 = 0;
      if (uVar12 != 0) {
        do {
          fVar13 = (float)(((*puVar9 & 0xffff8000) << 1 | *puVar9 & 0x7fff) << 0xf);
          fVar14 = (float)(((puVar9[1] & 0xffff8000) << 1 | puVar9[1] & 0x7fff) << 0xf);
          fVar15 = (float)(((puVar9[2] & 0xffff8000) << 1 | puVar9[2] & 0x7fff) << 0xf);
          uVar2 = *puVar10;
          fVar16 = (float)(((puVar9[3] & 0xffff8000) << 1 | puVar9[3] & 0x7fff) << 0xf);
          uVar3 = puVar10[1];
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          uVar11 = (uint)*(byte *)(iVar17 + iVar8);
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + 4;
          *(float *)(param_3 + 0x10 + uVar11 * 0x30) =
               ((float)(((uVar2 & 0xffff8000) << 1 | uVar2 & 0x7fff) << 0xf) - fVar13) * local_30 +
               fVar13;
          iVar17 = iVar17 + 1;
          *(float *)(param_3 + 0x14 + uVar11 * 0x30) =
               ((float)(((uVar3 & 0xffff8000) << 1 | uVar3 & 0x7fff) << 0xf) - fVar14) * local_30 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar11 * 0x30) =
               ((float)(((uVar4 & 0xffff8000) << 1 | uVar4 & 0x7fff) << 0xf) - fVar15) * local_30 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar11 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar16) * local_30 +
               fVar16;
        } while (iVar17 < (int)uVar12);
      }
    }
    else {
      iVar17 = 0;
      if (uVar12 != 0) {
        do {
          uVar11 = (uint)*(byte *)(iVar17 + iVar8);
          *(uint *)(param_3 + 0x10 + uVar11 * 0x30) =
               ((*puVar9 & 0xffff8000) << 1 | *puVar9 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar11 * 0x30) =
               ((puVar9[1] & 0xffff8000) << 1 | puVar9[1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar11 * 0xc + 1) * 4) =
               ((puVar9[2] & 0xffff8000) << 1 | puVar9[2] & 0x7fff) << 0xf;
          puVar10 = puVar9 + 3;
          puVar9 = puVar9 + 4;
          iVar17 = iVar17 + 1;
          *(uint *)(param_3 + 0x14 + (uVar11 * 0xc + 2) * 4) =
               ((*puVar10 & 0xffff8000) << 1 | *puVar10 & 0x7fff) << 0xf;
        } while (iVar17 < (int)uVar12);
      }
    }
    uVar12 = (uint)*(byte *)(iVar6 + 0x17);
    if (uVar12 != 0) {
      bVar1 = *(byte *)(iVar6 + 0x16);
      iVar8 = *(int *)(iVar6 + 0xc);
      iVar17 = 0;
      puVar9 = (ushort *)(iVar6 + 0x18 + (uint)*(ushort *)(iVar6 + 0x14) * (uint)bVar1 * 8);
      if (uVar12 != 0) {
        do {
          uVar11 = (uint)*(byte *)((uint)bVar1 + iVar17 + iVar8);
          *(uint *)(param_3 + 0x10 + uVar11 * 0x30) =
               ((*puVar9 & 0xffff8000) << 1 | *puVar9 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar11 * 0x30) =
               ((puVar9[1] & 0xffff8000) << 1 | puVar9[1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar11 * 0xc + 1) * 4) =
               ((puVar9[2] & 0xffff8000) << 1 | puVar9[2] & 0x7fff) << 0xf;
          puVar10 = puVar9 + 3;
          puVar9 = puVar9 + 4;
          *(uint *)(param_3 + 0x14 + (uVar11 * 0xc + 2) * 4) =
               ((*puVar10 & 0xffff8000) << 1 | *puVar10 & 0x7fff) << 0xf;
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)uVar12);
      }
    }
  }
  else {
    FUN_0049be30(param_2,param_3,param_4,bVar7,local_34,local_30);
  }
  if (*(int *)(iVar6 + 0x10) != 0) {
    FUN_0049b740(param_2,param_3,param_4,bVar7,local_34,local_30);
  }
  return 1;
}

