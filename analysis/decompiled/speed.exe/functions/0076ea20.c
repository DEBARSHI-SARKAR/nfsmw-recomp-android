/* speed.exe 0076ea20 FUN_0076ea20; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0076ea20(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  byte *local_24;
  float local_18;
  float local_14;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0xffffffff;
  }
  iVar11 = (int)*(char *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 4) = 0;
  iVar8 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
  iVar10 = (uint)*(ushort *)(iVar8 + iVar11 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar10 == 0) || (sVar2 = *(short *)(iVar10 + 0xe), sVar2 < 0)) {
    local_24 = &DAT_009b3830;
  }
  else {
    local_24 = (byte *)(sVar2 * 0x40 + DAT_009b38b8);
  }
  uVar13 = (uint)*local_24;
  bVar12 = (byte)((ushort)*(undefined2 *)(iVar8 + 10) >> 8);
  if (iVar11 == 0) {
    bVar12 = bVar12 >> 2;
  }
  else {
    bVar12 = bVar12 >> 1;
  }
  bVar12 = iVar11 == 0 ^ bVar12 & 1;
  iVar8 = (int)*(char *)(param_1 + 0x2c1);
  if (bVar12 != 0) {
    iVar8 = (uVar13 - iVar8) + -1;
  }
  iVar10 = uVar13 - 1;
  bVar7 = false;
  if (iVar8 < iVar10) {
    iVar11 = iVar8 * 4;
    iVar14 = (uVar13 - iVar8) * 4 + -8;
    do {
      iVar11 = iVar11 + 4;
      iVar9 = iVar14;
      if (bVar12 == 0) {
        iVar9 = iVar11;
      }
      if ((*(uint *)(local_24 + iVar9 + 4) & 0xf) == 7) {
        bVar7 = true;
        break;
      }
      if ((*(uint *)(local_24 + iVar9 + 4) & 0xf) != 1) break;
      iVar8 = iVar8 + 1;
      iVar14 = iVar14 + -4;
    } while (iVar8 < iVar10);
  }
  if ((iVar8 == iVar10) || (bVar7)) {
    fVar1 = -*(float *)(param_1 + 0x88);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x88);
  }
  iVar10 = iVar8;
  if (bVar12 != 0) {
    iVar10 = (uVar13 - iVar8) + -1;
  }
  if (bVar12 != 0) {
    iVar8 = (uVar13 - iVar8) + -1;
  }
  local_18 = *(float *)(param_1 + 0xc4);
  fVar5 = (float)((*(int *)(local_24 + iVar8 * 4 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 *
          _DAT_008933d4;
  local_14 = 0.0;
  fVar6 = (float)(*(int *)(local_24 + iVar10 * 4 + 4) >> 0x12) * _DAT_009b3a68;
  fVar4 = -*(float *)(param_1 + 0xbc);
  fVar15 = (float10)FUN_005c5e80(local_18 * local_18 + fVar4 * fVar4 + 0.0);
  if (fVar15 == (float10)_DAT_00890968) {
    fVar15 = (float10)fVar4;
  }
  else {
    fVar15 = (float10)_DAT_0089096c / fVar15;
    local_18 = (float)((float10)local_18 * fVar15);
    local_14 = (float)((float10)0.0 * fVar15);
    fVar15 = fVar15 * (float10)fVar4;
  }
  fVar16 = (float10)(fVar6 + fVar5 + fVar1) - (float10)*(float *)(param_1 + 0x2c4);
  *(float *)(param_1 + 0x98) =
       (float)((float10)local_18 * fVar16 + (float10)*(float *)(param_1 + 0x98));
  *(float *)(param_1 + 0x9c) =
       (float)((float10)local_14 * fVar16 + (float10)*(float *)(param_1 + 0x9c));
  *(float *)(param_1 + 0xa0) = (float)(fVar15 * fVar16 + (float10)*(float *)(param_1 + 0xa0));
  return;
}

