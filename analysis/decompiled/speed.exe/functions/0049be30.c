/* speed.exe 0049be30 FUN_0049be30; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall
FUN_0049be30(int param_1,undefined4 param_2,int param_3,int param_4,char param_5,int param_6,
            float param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  
  if (param_4 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_4;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  uVar10 = (uint)*(byte *)(iVar8 + 0x16);
  iVar1 = iVar8 + 0x18 + uVar10 * param_6 * 8;
  iVar9 = *(int *)(iVar8 + 0xc);
  if ((param_5 == '\0') || ((int)(*(ushort *)(iVar8 + 0x14) - 1) <= param_6)) {
    _param_5 = 0;
    if (uVar10 != 0) {
      puVar13 = (ushort *)(iVar1 + 4);
      do {
        bVar3 = *(byte *)(_param_5 + iVar9);
        uVar18 = (uint)bVar3;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (bVar3 & 0x1f)) != 0) {
          *(uint *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((puVar13[-2] & 0xffff8000) << 1 | puVar13[-2] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((puVar13[-1] & 0xffff8000) << 1 | puVar13[-1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 1) * 4) =
               ((*puVar13 & 0xffff8000) << 1 | *puVar13 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 2) * 4) =
               ((puVar13[1] & 0xffff8000) << 1 | puVar13[1] & 0x7fff) << 0xf;
        }
        _param_5 = _param_5 + 1;
        puVar13 = puVar13 + 4;
      } while (_param_5 < (int)uVar10);
    }
  }
  else {
    iVar2 = iVar8 + 0x18 + (param_6 + 1) * (uint)*(byte *)(iVar8 + 0x16) * 8;
    _param_5 = 0;
    if (uVar10 != 0) {
      puVar13 = (ushort *)(iVar1 + 2);
      puVar12 = (ushort *)(iVar2 + 6);
      do {
        bVar3 = *(byte *)(_param_5 + iVar9);
        uVar18 = (uint)bVar3;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (bVar3 & 0x1f)) != 0) {
          fVar14 = (float)(((puVar13[-1] & 0xffff8000) << 1 | puVar13[-1] & 0x7fff) << 0xf);
          fVar15 = (float)(((*puVar13 & 0xffff8000) << 1 | *puVar13 & 0x7fff) << 0xf);
          uVar11 = (uint)*(ushort *)((iVar1 - iVar2) + (int)puVar12);
          fVar16 = (float)(((puVar13[1] & 0xffff8000) << 1 | puVar13[1] & 0x7fff) << 0xf);
          fVar17 = (float)(((uVar11 & 0xffff8000) << 1 | uVar11 & 0x7fff) << 0xf);
          uVar5 = puVar12[-2];
          uVar6 = puVar12[-1];
          uVar7 = *puVar12;
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar12[-3] & 0xffff8000) << 1 | puVar12[-3] & 0x7fff) << 0xf) - fVar14) *
               param_7 + fVar14;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar17) * param_7 +
               fVar17;
        }
        _param_5 = _param_5 + 1;
        puVar13 = puVar13 + 4;
        puVar12 = puVar12 + 4;
      } while (_param_5 < (int)uVar10);
    }
  }
  uVar10 = (uint)*(byte *)(iVar8 + 0x17);
  if (uVar10 != 0) {
    bVar3 = *(byte *)(iVar8 + 0x16);
    iVar1 = *(int *)(iVar8 + 0xc);
    puVar13 = (ushort *)(iVar8 + 0x18 + (uint)*(ushort *)(iVar8 + 0x14) * (uint)bVar3 * 8);
    _param_5 = 0;
    if (uVar10 != 0) {
      do {
        bVar4 = *(byte *)(iVar1 + (uint)bVar3 + _param_5);
        uVar18 = (uint)bVar4;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (bVar4 & 0x1f)) != 0) {
          *(uint *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((*puVar13 & 0xffff8000) << 1 | *puVar13 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((puVar13[1] & 0xffff8000) << 1 | puVar13[1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 1) * 4) =
               ((puVar13[2] & 0xffff8000) << 1 | puVar13[2] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 2) * 4) =
               ((puVar13[3] & 0xffff8000) << 1 | puVar13[3] & 0x7fff) << 0xf;
          puVar13 = puVar13 + 4;
        }
        _param_5 = _param_5 + 1;
      } while (_param_5 < (int)uVar10);
    }
  }
  return 1;
}

