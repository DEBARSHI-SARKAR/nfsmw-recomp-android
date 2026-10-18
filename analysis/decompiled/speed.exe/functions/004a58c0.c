/* speed.exe 004a58c0 FUN_004a58c0; analysis pseudocode, not buildable source.
 * calls 00496d90 FUN_00496d90
 * calls 00497430 FUN_00497430
 * calls 00497510 FUN_00497510
 * calls 007c4b80 FUN_007c4b80
 * calls 00497600 FUN_00497600
 * calls 00496c10 FUN_00496c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a58c0(int param_1,float param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar14;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  int local_20;
  
  if (param_4 != *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(int *)(param_1 + 0x3c) = param_4;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar18 = *(int *)(iVar3 + 0xc);
  iVar6 = param_3 + 0x10;
  uVar7 = CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(iVar3 + 6));
  if (*(char *)(iVar3 + 6) == '\0') goto LAB_004a5cc0;
  uVar7 = FUN_007c4b80();
  puVar19 = *(ushort **)(iVar3 + 8);
  if (puVar19 == (ushort *)0x0) {
    if ((int)uVar7 < 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar7;
      if ((int)(uint)*(ushort *)(iVar3 + 4) <= (int)uVar7) {
        uVar17 = *(ushort *)(iVar3 + 4) - 1;
      }
    }
  }
  else if ((int)uVar7 < (int)(uint)*puVar19) {
    uVar17 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x1c) + -1;
    }
    puVar19 = puVar19 + iVar8;
    if ((int)uVar7 < (int)(uint)*puVar19) {
      for (; (0 < iVar8 && ((int)uVar7 < (int)(uint)*puVar19)); puVar19 = puVar19 + -1) {
        iVar8 = iVar8 + -1;
      }
    }
    else {
      while ((iVar8 < (int)(*(ushort *)(iVar3 + 4) - 2) &&
             (puVar19 = puVar19 + 1, (int)(uint)*puVar19 <= (int)uVar7))) {
        iVar8 = iVar8 + 1;
      }
    }
    uVar17 = iVar8 + 1;
  }
  bVar1 = *(byte *)(iVar3 + 0x10);
  uVar20 = 0x7fffffff >> (0x1f - bVar1 & 0x1f);
  iVar8 = (int)uVar17 >> (bVar1 & 0x1f);
  uVar9 = uVar20 & uVar17;
  uVar11 = *(uint *)(param_1 + 0x1c);
  iVar16 = (int)uVar11 >> (bVar1 & 0x1f);
  if (*(uint *)(param_1 + 0x28) == uVar17) {
    uVar12 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar12;
    *(uint *)(param_1 + 0x28) = uVar11;
  }
  else {
    if (uVar11 == uVar17 + 1) {
      iVar10 = 0;
      local_20 = 0;
      if (*(char *)(iVar3 + 6) != '\0') {
        do {
          puVar13 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar10);
          puVar15 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar10);
          *puVar15 = *puVar13;
          puVar15[1] = puVar13[1];
          puVar15[2] = puVar13[2];
          puVar15[3] = puVar13[3];
          local_20 = local_20 + 1;
          iVar10 = iVar10 + 0x10;
        } while (local_20 < (int)(uint)*(byte *)(iVar3 + 6));
      }
      uVar11 = *(uint *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x28) = uVar11;
    }
    iVar10 = *(int *)(param_1 + 0x18) * iVar8 + *(int *)(param_1 + 0x14);
    if (((int)uVar11 <= (int)uVar17) || (bVar5 = true, DAT_008ee4e4 != '\0')) {
      bVar5 = false;
    }
    if (((uVar11 == 0xffffffff) || (iVar8 != iVar16)) || (bVar5)) {
      iVar16 = 0;
      if (*(char *)(iVar3 + 6) != '\0') {
        param_3 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)*(byte *)(iVar18 + iVar16) >> 5) * 4) &
              1 << (*(byte *)(iVar18 + iVar16) & 0x1f)) != 0) {
            FUN_00496d90(*(int *)(param_1 + 0x24) + param_3);
          }
          param_3 = param_3 + 0x10;
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)(uint)*(byte *)(iVar3 + 6));
      }
      uVar11 = 0;
    }
    else {
      uVar11 = uVar11 & uVar20;
    }
    if ((int)uVar11 < (int)uVar9) {
      uVar11 = FUN_00497430(iVar10,iVar3,uVar11,uVar9,*(undefined4 *)(param_1 + 0x24),param_4);
    }
    else if ((int)uVar9 < (int)uVar11) {
      uVar11 = FUN_00497510(iVar10,iVar3,uVar11,uVar9,*(undefined4 *)(param_1 + 0x24),param_4);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar17;
  puVar19 = *(ushort **)(iVar3 + 8);
  iVar16 = 0;
  uVar14 = (undefined2)(uVar11 >> 0x10);
  if (puVar19 == (ushort *)0x0) {
    fVar4 = (float)(int)uVar7;
    uVar7 = CONCAT22(uVar14,(ushort)(param_2 < fVar4) << 8 |
                            (ushort)(NAN(param_2) || NAN(fVar4)) << 10 |
                            (ushort)(param_2 == fVar4) << 0xe);
    if (param_2 != fVar4) {
      param_2 = param_2 - fVar4;
      goto LAB_004a5bb1;
    }
  }
  else if (uVar17 == 0) {
    uVar7 = CONCAT22(uVar14,(ushort)(param_2 < _DAT_00890968) << 8 |
                            (ushort)(NAN(param_2) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(param_2 == _DAT_00890968) << 0xe);
    if (param_2 != _DAT_00890968) {
      param_2 = param_2 / (float)*puVar19;
LAB_004a5bb1:
      uVar7 = *(ushort *)(iVar3 + 4) - 1;
      if ((int)uVar17 < (int)uVar7) {
        uVar12 = FUN_00497600(iVar3,uVar17 + 1,iVar8,uVar9,param_4);
        uVar7 = CONCAT31((int3)((uint)uVar12 >> 8),*(char *)(iVar3 + 6));
        iVar8 = 0;
        if (*(char *)(iVar3 + 6) != '\0') {
          do {
            uVar7 = (uint)*(byte *)(iVar8 + iVar18);
            if ((*(uint *)(param_4 + ((int)uVar7 >> 5) * 4) &
                1 << (*(byte *)(iVar8 + iVar18) & 0x1f)) != 0) {
              uVar7 = FUN_00496c10(param_2);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)*(byte *)(iVar3 + 6));
        }
        goto LAB_004a5cc0;
      }
    }
  }
  else {
    fVar4 = (float)puVar19[uVar17 - 1];
    uVar7 = (uint)(ushort)((ushort)(param_2 < fVar4) << 8 |
                           (ushort)(NAN(param_2) || NAN(fVar4)) << 10 |
                          (ushort)(param_2 == fVar4) << 0xe);
    if (param_2 != fVar4) {
      param_2 = (param_2 - fVar4) / ((float)puVar19[uVar17] - fVar4);
      goto LAB_004a5bb1;
    }
  }
  uVar7 = CONCAT31((int3)(uVar7 >> 8),*(char *)(iVar3 + 6));
  if (*(char *)(iVar3 + 6) != '\0') {
    param_2 = 0.0;
    do {
      bVar1 = *(byte *)(iVar16 + iVar18);
      if ((*(uint *)(param_4 + ((int)(uint)bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) != 0) {
        puVar15 = (undefined4 *)(*(int *)(param_1 + 0x24) + (int)param_2);
        puVar13 = (undefined4 *)((uint)bVar1 * 0x30 + iVar6);
        *puVar13 = *puVar15;
        puVar13[1] = puVar15[1];
        puVar13[2] = puVar15[2];
        puVar13[3] = puVar15[3];
      }
      uVar7 = (uint)*(byte *)(iVar3 + 6);
      iVar16 = iVar16 + 1;
      param_2 = (float)((int)param_2 + 0x10);
    } while (iVar16 < (int)uVar7);
  }
LAB_004a5cc0:
  cVar2 = *(char *)(iVar3 + 7);
  uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar2);
  if ((cVar2 != '\0') && (iVar18 = 0, cVar2 != '\0')) {
    do {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x34) + iVar18);
      if ((*(uint *)(param_4 + ((int)(uint)bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) != 0) {
        FUN_00496d90((uint)bVar1 * 0x30 + iVar6);
      }
      uVar7 = (uint)*(byte *)(iVar3 + 7);
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)uVar7);
  }
  return CONCAT31((int3)(uVar7 >> 8),1);
}

