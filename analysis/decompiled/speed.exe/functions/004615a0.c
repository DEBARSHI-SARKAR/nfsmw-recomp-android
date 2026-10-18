/* speed.exe 004615a0 FUN_004615a0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

ushort * __thiscall FUN_004615a0(int *param_1,byte *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  
  if ((param_2 == (byte *)0x0) || (param_1[2] == 0)) {
    return (ushort *)0x0;
  }
  FUN_007ec1bd();
  uVar8 = 0xffffffff;
  bVar4 = *param_2;
  bVar5 = bVar4;
  pbVar12 = param_2;
  while (bVar5 != 0) {
    uVar8 = uVar8 * 0x21 + (uint)bVar5;
    pbVar1 = pbVar12 + 1;
    pbVar12 = pbVar12 + 1;
    bVar5 = *pbVar1;
  }
  uVar8 = uVar8 & 0x7ff;
  iVar10 = param_1[uVar8 + 0xf];
  if (iVar10 != 0) {
    iVar9 = FUN_00460d20(param_2,(ushort *)(iVar10 + 6));
    if (iVar9 == 0) {
      *(short *)(iVar10 + 4) = *(short *)(iVar10 + 4) + 1;
      FUN_007ec1c8();
      return (ushort *)(iVar10 + 6);
    }
  }
  cVar6 = *(char *)((int)param_1 + uVar8 + 0x203c);
  if ((cVar6 != '\0') &&
     (((cVar6 != '\x01' || (iVar10 == 0)) &&
      (puVar11 = (ushort *)param_1[2], puVar11 != puVar11 + *param_1 * 4)))) {
    do {
      if ((puVar11[2] != 0) && (iVar10 = FUN_00460d20(param_2,puVar11 + 3), iVar10 == 0)) {
        param_1[uVar8 + 0xf] = (int)puVar11;
        puVar11[2] = puVar11[2] + 1;
        FUN_007ec1c8();
        return puVar11 + 3;
      }
      puVar11 = puVar11 + (uint)*puVar11 * 4;
    } while (puVar11 != (ushort *)(param_1[2] + *param_1 * 8));
  }
  iVar10 = 0;
  while (bVar4 != 0) {
    iVar9 = iVar10 + 1;
    iVar10 = iVar10 + 1;
    bVar4 = param_2[iVar9];
  }
  puVar11 = (ushort *)param_1[0xa0f];
  uVar13 = iVar10 + 0xeU >> 3;
  do {
    if ((puVar11[2] == 0) && (uVar13 <= *puVar11)) {
      if (uVar13 < *puVar11) {
        puVar2 = puVar11 + uVar13 * 4;
        *puVar2 = *puVar11 - (ushort)uVar13;
        puVar2[1] = (ushort)((int)puVar2 - (int)puVar11 >> 3);
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0;
        puVar14 = puVar2 + (uint)*puVar2 * 4;
        if (puVar14 != (ushort *)(param_1[2] + *param_1 * 8)) {
          puVar14[1] = (ushort)((int)puVar14 - (int)puVar2 >> 3);
        }
      }
      *puVar11 = (ushort)uVar13;
      puVar11[2] = 1;
      bVar5 = *param_2;
      puVar2 = puVar11 + 3;
      *(byte *)puVar2 = bVar5;
      if (bVar5 != 0) {
        puVar14 = puVar2;
        do {
          bVar5 = (param_2 + (1 - (int)puVar2))[(int)puVar14];
          puVar14 = (ushort *)((int)puVar14 + 1);
          *(byte *)puVar14 = bVar5;
        } while (bVar5 != 0);
      }
      param_1[uVar8 + 0xf] = (int)puVar11;
      pcVar3 = (char *)(uVar8 + 0x203c + (int)param_1);
      *pcVar3 = *pcVar3 + '\x01';
      iVar10 = param_1[0xb] + uVar13 * 8;
      param_1[0xb] = iVar10;
      if (param_1[0xc] < iVar10) {
        param_1[0xc] = iVar10;
      }
      iVar10 = param_1[0xd] + 1;
      param_1[0xd] = iVar10;
      if (param_1[0xe] < iVar10) {
        param_1[0xe] = iVar10;
      }
      uVar7 = *puVar11;
      param_1[0xa0f] = (int)(puVar11 + (uint)uVar7 * 4);
      if (puVar11 + (uint)uVar7 * 4 == (ushort *)(param_1[2] + *param_1 * 8)) {
        param_1[0xa0f] = param_1[2];
      }
      FUN_007ec1c8();
      return puVar2;
    }
    puVar11 = puVar11 + (uint)*puVar11 * 4;
    if (puVar11 == (ushort *)param_1[2] + *param_1 * 4) {
      puVar11 = (ushort *)param_1[2];
    }
  } while (puVar11 != (ushort *)param_1[0xa0f]);
  FUN_007ec1c8();
  return (ushort *)0x0;
}

