/* speed.exe 004a955c FUN_004a955c; analysis pseudocode, not buildable source.
 * calls 00496d90 FUN_00496d90
 * calls 004a58c0 FUN_004a58c0
 * calls 00497240 FUN_00497240
 * calls 004972f0 FUN_004972f0
 * calls 007c4b80 FUN_007c4b80
 * calls 00497180 FUN_00497180
 * calls 00496c10 FUN_00496c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a955c(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  undefined4 in_EAX;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined3 uVar12;
  undefined3 extraout_var;
  undefined4 *puVar13;
  int iVar14;
  ushort *unaff_EBX;
  int iVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  uint uVar18;
  bool in_ZF;
  int iStack0000000c;
  float in_stack_00000024;
  int in_stack_00000028;
  
  if (!in_ZF) {
    uVar11 = FUN_004a58c0(in_stack_00000024,in_stack_00000028,in_EAX);
    return uVar11;
  }
  if (*(ushort **)(param_1 + 0x3c) != unaff_EBX) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(ushort **)(param_1 + 0x3c) = unaff_EBX;
  }
  iVar5 = in_stack_00000028 + 0x10;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar15 = *(int *)(iVar2 + 0xc);
  iVar7 = CONCAT31((int3)((uint)iVar5 >> 8),*(char *)(iVar2 + 6));
  if (*(char *)(iVar2 + 6) == '\0') goto LAB_004a98db;
  puVar6 = (ushort *)FUN_007c4b80();
  puVar17 = *(ushort **)(iVar2 + 8);
  if (puVar17 == unaff_EBX) {
    if (((int)unaff_EBX <= (int)puVar6) &&
       (unaff_EBX = puVar6, (int)(uint)*(ushort *)(iVar2 + 4) <= (int)puVar6)) {
      unaff_EBX = (ushort *)(*(ushort *)(iVar2 + 4) - 1);
    }
  }
  else if ((int)(uint)*puVar17 <= (int)puVar6) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1c) + -1;
    }
    puVar17 = puVar17 + iVar7;
    if ((int)puVar6 < (int)(uint)*puVar17) {
      for (; ((int)unaff_EBX < iVar7 && ((int)puVar6 < (int)(uint)*puVar17)); puVar17 = puVar17 + -1
          ) {
        iVar7 = iVar7 + -1;
      }
    }
    else {
      while ((iVar7 < (int)(*(ushort *)(iVar2 + 4) - 2) &&
             (puVar17 = puVar17 + 1, (int)(uint)*puVar17 <= (int)puVar6))) {
        iVar7 = iVar7 + 1;
      }
    }
    unaff_EBX = (ushort *)(iVar7 + 1);
  }
  bVar1 = *(byte *)(iVar2 + 0x10);
  uVar18 = 0x7fffffff >> (0x1f - bVar1 & 0x1f);
  iVar7 = (int)unaff_EBX >> (bVar1 & 0x1f);
  uVar8 = uVar18 & (uint)unaff_EBX;
  uVar10 = *(uint *)(param_1 + 0x1c);
  iVar14 = (int)uVar10 >> (bVar1 & 0x1f);
  if (*(ushort **)(param_1 + 0x28) == unaff_EBX) {
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar11;
    *(uint *)(param_1 + 0x28) = uVar10;
  }
  else {
    if (uVar10 == (int)unaff_EBX + 1U) {
      iVar9 = 0;
      in_stack_00000028 = 0;
      if (*(char *)(iVar2 + 6) != '\0') {
        do {
          puVar13 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar9);
          puVar16 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar9);
          *puVar16 = *puVar13;
          puVar16[1] = puVar13[1];
          puVar16[2] = puVar13[2];
          puVar16[3] = puVar13[3];
          in_stack_00000028 = in_stack_00000028 + 1;
          iVar9 = iVar9 + 0x10;
        } while (in_stack_00000028 < (int)(uint)*(byte *)(iVar2 + 6));
      }
      uVar10 = *(uint *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x28) = uVar10;
    }
    iVar9 = *(int *)(param_1 + 0x18) * iVar7 + *(int *)(param_1 + 0x14);
    if (((int)uVar10 <= (int)unaff_EBX) || (bVar4 = true, DAT_008ee4e4 != '\0')) {
      bVar4 = false;
    }
    if ((((uVar10 == 0xffffffff) || (iVar7 != iVar14)) || (uVar8 == 0)) || (bVar4)) {
      iVar14 = 0;
      iStack0000000c = 0;
      if (*(char *)(iVar2 + 6) != '\0') {
        do {
          FUN_00496d90(*(int *)(param_1 + 0x24) + iVar14);
          iStack0000000c = iStack0000000c + 1;
          iVar14 = iVar14 + 0x10;
        } while (iStack0000000c < (int)(uint)*(byte *)(iVar2 + 6));
      }
      uVar10 = 0;
    }
    else {
      uVar10 = uVar10 & uVar18;
    }
    if ((int)uVar10 < (int)uVar8) {
      FUN_00497180(iVar9,iVar2,uVar10,uVar8,*(undefined4 *)(param_1 + 0x24));
    }
    else if ((int)uVar8 < (int)uVar10) {
      FUN_00497240(iVar9,iVar2,uVar10,uVar8,*(undefined4 *)(param_1 + 0x24));
    }
  }
  *(ushort **)(param_1 + 0x1c) = unaff_EBX;
  puVar17 = *(ushort **)(iVar2 + 8);
  if (puVar17 == (ushort *)0x0) {
    if (in_stack_00000024 != (float)(int)puVar6) {
      in_stack_00000024 = in_stack_00000024 - (float)(int)puVar6;
      goto LAB_004a9813;
    }
  }
  else if (unaff_EBX == (ushort *)0x0) {
    if (in_stack_00000024 != _DAT_00890968) {
      in_stack_00000024 = in_stack_00000024 / (float)*puVar17;
LAB_004a9813:
      if ((int)unaff_EBX < (int)(*(ushort *)(iVar2 + 4) - 1)) {
        uVar11 = FUN_004972f0(iVar2,(int)unaff_EBX + 1U,iVar7,uVar8);
        iVar7 = CONCAT31((int3)((uint)uVar11 >> 8),*(char *)(iVar2 + 6));
        iVar15 = 0;
        if (*(char *)(iVar2 + 6) != '\0') {
          do {
            iVar7 = FUN_00496c10(in_stack_00000024);
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)(uint)*(byte *)(iVar2 + 6));
        }
        goto LAB_004a98db;
      }
    }
  }
  else {
    fVar3 = (float)puVar17[(int)unaff_EBX + -1];
    if (in_stack_00000024 != fVar3) {
      in_stack_00000024 = (in_stack_00000024 - fVar3) / ((float)puVar17[(int)unaff_EBX] - fVar3);
      goto LAB_004a9813;
    }
  }
  iVar7 = 0;
  if (*(char *)(iVar2 + 6) != '\0') {
    iVar14 = 0;
    do {
      puVar13 = (undefined4 *)((uint)*(byte *)(iVar7 + iVar15) * 0x30 + iVar5);
      puVar16 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar14);
      *puVar13 = *puVar16;
      puVar13[1] = puVar16[1];
      puVar13[2] = puVar16[2];
      puVar13[3] = puVar16[3];
      iVar7 = iVar7 + 1;
      iVar14 = iVar14 + 0x10;
    } while (iVar7 < (int)(uint)*(byte *)(iVar2 + 6));
  }
LAB_004a98db:
  uVar12 = (undefined3)((uint)iVar7 >> 8);
  if ((*(char *)(iVar2 + 7) != '\0') && (*(char *)(iVar2 + 7) != '\0')) {
    iVar15 = 0;
    do {
      FUN_00496d90((uint)*(byte *)(*(int *)(param_1 + 0x34) + iVar15) * 0x30 + iVar5);
      iVar15 = iVar15 + 1;
      uVar12 = extraout_var;
    } while (iVar15 < (int)(uint)*(byte *)(iVar2 + 7));
  }
  return CONCAT31(uVar12,1);
}

