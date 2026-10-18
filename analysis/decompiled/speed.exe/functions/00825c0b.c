/* speed.exe 00825c0b FUN_00825c0b; analysis pseudocode, not buildable source.
 */

void FUN_00825c0b(int param_1,int param_2,byte *param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (param_2 == 2) {
    param_1 = param_1 * 2;
    bVar2 = *param_3;
    bVar3 = param_3[1];
    iVar9 = param_1;
    do {
      iVar6 = *(int *)((uint)bVar3 * param_1 + param_4 + -4 + iVar9);
      uVar4 = *(uint *)((uint)bVar2 * param_1 + param_4 + -4 + iVar9);
      *(uint *)(param_5 + iVar9 + -4) = iVar6 << 0x10 | uVar4 & 0xffff;
      *(uint *)(param_5 + iVar9 + -2) =
           CONCAT22((short)((uint)iVar6 >> 0x10),(short)(uVar4 >> 0x10));
      iVar6 = iVar9 + -4;
      bVar5 = 3 < iVar9;
      iVar9 = iVar6;
    } while (iVar6 != 0 && bVar5);
  }
  else if (param_2 == 4) {
    puVar7 = (undefined2 *)(param_4 + (uint)param_3[1] * param_1 * 2);
    if (0 < param_1) {
      iVar9 = (param_4 + (uint)*param_3 * param_1 * 2) - (int)puVar7;
      iVar13 = (param_4 + (uint)param_3[2] * param_1 * 2) - (int)puVar7;
      iVar6 = (param_4 + (uint)param_3[3] * param_1 * 2) - (int)puVar7;
      param_2 = param_1;
      do {
        *param_5 = *(undefined2 *)(iVar9 + (int)puVar7);
        param_5[1] = *puVar7;
        param_5[2] = *(undefined2 *)(iVar13 + (int)puVar7);
        param_5[3] = *(undefined2 *)(iVar6 + (int)puVar7);
        param_5 = param_5 + 4;
        puVar7 = puVar7 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (param_2 == 6) {
    iVar9 = param_4 + (uint)*param_3 * param_1 * 2;
    iVar6 = param_4 + (uint)param_3[3] * param_1 * 2;
    iVar13 = param_4 + (uint)param_3[1] * param_1 * 2;
    iVar1 = param_4 + (uint)param_3[2] * param_1 * 2;
    puVar7 = (undefined2 *)(param_4 + (uint)param_3[4] * param_1 * 2);
    param_4 = param_4 + (uint)param_3[5] * param_1 * 2;
    if (0 < param_1) {
      puVar8 = (undefined2 *)(iVar13 + 2);
      iVar11 = (int)puVar7 - iVar13;
      iVar14 = (int)puVar7 - iVar1;
      iVar15 = (int)puVar7 - iVar6;
      puVar12 = (undefined2 *)(iVar6 + 6);
      iVar16 = iVar9 - (int)puVar7;
      puVar10 = (undefined2 *)(iVar1 + 4);
      iVar17 = param_4 - (int)puVar7;
      param_5 = param_5 + 2;
      param_2 = (param_1 - 1U >> 2) + 1;
      do {
        param_5[-2] = *(undefined2 *)(iVar16 + (int)puVar7);
        param_5[-1] = puVar8[-1];
        *param_5 = puVar10[-2];
        param_5[1] = puVar12[-3];
        param_5[2] = *puVar7;
        param_5[3] = *(undefined2 *)(iVar17 + (int)puVar7);
        param_5[4] = *(undefined2 *)((iVar9 - iVar13) + (int)puVar8);
        param_5[5] = *puVar8;
        param_5[6] = *(undefined2 *)((iVar1 - iVar13) + (int)puVar8);
        param_5[7] = *(undefined2 *)((iVar6 - iVar13) + (int)puVar8);
        param_5[8] = *(undefined2 *)(iVar11 + (int)puVar8);
        param_5[9] = *(undefined2 *)((param_4 - iVar13) + (int)puVar8);
        param_5[10] = *(undefined2 *)((int)puVar10 + (iVar9 - iVar1));
        param_5[0xb] = puVar8[1];
        param_5[0xc] = *puVar10;
        param_5[0xd] = *(undefined2 *)((int)puVar10 + (iVar6 - iVar1));
        param_5[0xe] = *(undefined2 *)((int)puVar10 + iVar14);
        param_5[0xf] = *(undefined2 *)((int)puVar10 + (param_4 - iVar1));
        param_5[0x10] = *(undefined2 *)((int)puVar12 + (iVar9 - iVar6));
        param_5[0x11] = puVar8[2];
        param_5[0x12] = puVar10[1];
        param_5[0x13] = *puVar12;
        param_5[0x14] = *(undefined2 *)((int)puVar12 + iVar15);
        param_5[0x15] = *(undefined2 *)((int)puVar12 + (param_4 - iVar6));
        param_5 = param_5 + 0x18;
        puVar8 = puVar8 + 4;
        puVar7 = puVar7 + 4;
        puVar10 = puVar10 + 4;
        puVar12 = puVar12 + 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

