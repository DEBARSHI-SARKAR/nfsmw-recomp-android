/* speed.exe 00497bb7 FUN_00497bb7; analysis pseudocode, not buildable source.
 * calls 00497860 FUN_00497860
 * calls 00494bc0 FUN_00494bc0
 * calls 007c4b80 FUN_007c4b80
 * calls 00494c70 FUN_00494c70
 * calls 00494d10 FUN_00494d10
 * calls 00497a90 FUN_00497a90
 * calls 00496c10 FUN_00496c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00497bb7(void)

{
  float fVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int iVar20;
  int unaff_EDI;
  uint uStack00000004;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000018;
  float in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000074;
  int in_stack_00000078;
  int in_stack_0000007c;
  
  FUN_00497860();
  iVar4 = *(int *)(unaff_EDI + 0xc);
  in_stack_0000007c = iVar4;
  uVar8 = FUN_007c4b80();
  puVar19 = *(ushort **)(iVar4 + 8);
  if (puVar19 == (ushort *)0x0) {
    if ((int)uVar8 < 0) {
      uStack00000004 = 0;
    }
    else {
      uStack00000004 = uVar8;
      if ((int)(uint)*(ushort *)(iVar4 + 4) <= (int)uVar8) {
        uStack00000004 = *(ushort *)(iVar4 + 4) - 1;
      }
    }
  }
  else if ((int)uVar8 < (int)(uint)*puVar19) {
    uStack00000004 = 0;
  }
  else {
    if (*(int *)(unaff_EDI + 0x1c) < 1) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(unaff_EDI + 0x1c) + -1;
    }
    puVar19 = puVar19 + iVar17;
    if ((int)uVar8 < (int)(uint)*puVar19) {
      for (; (0 < iVar17 && ((int)uVar8 < (int)(uint)*puVar19)); puVar19 = puVar19 + -1) {
        iVar17 = iVar17 + -1;
      }
    }
    else {
      while ((iVar17 < (int)(*(ushort *)(iVar4 + 4) - 2) &&
             (puVar19 = puVar19 + 1, (int)(uint)*puVar19 <= (int)uVar8))) {
        iVar17 = iVar17 + 1;
      }
    }
    uStack00000004 = iVar17 + 1;
  }
  bVar2 = *(byte *)(iVar4 + 7);
  iVar4 = *(int *)(iVar4 + 0xc);
  uVar9 = 0x7fffffff >> (0x1f - bVar2 & 0x1f);
  iVar17 = (int)uStack00000004 >> (bVar2 & 0x1f);
  uVar18 = *(uint *)(unaff_EDI + 0x1c);
  uVar13 = uVar9 & uStack00000004;
  if (((uVar18 == 0xffffffff) || (iVar17 != (int)uVar18 >> (bVar2 & 0x1f))) ||
     ((int)uStack00000004 < (int)uVar18)) {
    iStack00000018 = 0;
    if (*(char *)(in_stack_0000007c + 6) != '\0') {
      iStack0000000c = 0;
      iVar20 = 0;
      do {
        FUN_00494c70(*(undefined2 *)(iStack0000000c + 0xc + *(int *)(unaff_EDI + 0x10)),
                     *(int *)(unaff_EDI + 0x24) + iVar20);
        iStack0000000c = iStack0000000c + 0xe;
        iStack00000018 = iStack00000018 + 1;
        iVar20 = iVar20 + 0x10;
      } while (iStack00000018 < (int)(uint)*(byte *)(in_stack_0000007c + 6));
    }
    uVar18 = 0;
  }
  else {
    uVar18 = uVar18 & uVar9;
  }
  if ((int)uVar18 < (int)uVar13) {
    uVar9 = (uint)*(byte *)(in_stack_0000007c + 6);
    iStack00000010 = uVar13 - uVar18;
    do {
      iStack00000018 = 0;
      if (uVar9 != 0) {
        iVar20 = 0;
        do {
          FUN_00494bc0(&stack0x00000028);
          FUN_00494d10(&stack0x00000028,&stack0x00000044);
          *(float *)(*(int *)(unaff_EDI + 0x24) + iVar20) =
               in_stack_00000044 + *(float *)(*(int *)(unaff_EDI + 0x24) + iVar20);
          pfVar14 = (float *)(*(int *)(unaff_EDI + 0x24) + 4 + iVar20);
          *pfVar14 = in_stack_00000048 + *pfVar14;
          pfVar14 = (float *)(*(int *)(unaff_EDI + 0x24) + 8 + iVar20);
          iStack00000018 = iStack00000018 + 1;
          *pfVar14 = in_stack_0000004c + *pfVar14;
          pfVar14 = (float *)(*(int *)(unaff_EDI + 0x24) + 0xc + iVar20);
          iVar20 = iVar20 + 0x10;
          *pfVar14 = in_stack_00000050 + *pfVar14;
          uVar9 = (uint)*(byte *)(in_stack_0000007c + 6);
        } while (iStack00000018 < (int)uVar9);
      }
      iStack00000010 = iStack00000010 + -1;
    } while (iStack00000010 != 0);
  }
  *(uint *)(unaff_EDI + 0x1c) = uStack00000004;
  puVar19 = *(ushort **)(in_stack_0000007c + 8);
  if (puVar19 == (ushort *)0x0) {
    if (in_stack_00000074 == (float)(int)uVar8) goto LAB_00498263;
    in_stack_00000074 = in_stack_00000074 - (float)(int)uVar8;
  }
  else if (uStack00000004 == 0) {
    if (in_stack_00000074 == _DAT_00890968) goto LAB_00498263;
    in_stack_00000074 = in_stack_00000074 / (float)*puVar19;
  }
  else {
    fVar1 = (float)puVar19[uStack00000004 - 1];
    if (in_stack_00000074 == fVar1) goto LAB_00498263;
    in_stack_00000074 = (in_stack_00000074 - fVar1) / ((float)puVar19[uStack00000004] - fVar1);
  }
  if ((int)uStack00000004 < (int)(*(ushort *)(in_stack_0000007c + 4) - 1)) {
    iVar20 = 0;
    if ((int)(uStack00000004 + 1) >> (bVar2 & 0x1f) == iVar17) {
      if (*(char *)(in_stack_0000007c + 6) == '\0') {
        return 1;
      }
      iVar17 = 0;
      iStack00000010 = 0;
      do {
        iVar12 = *(int *)(unaff_EDI + 0x10);
        FUN_00494bc0(&stack0x00000054);
        FUN_00494d10(&stack0x00000054,&stack0x00000044);
        in_stack_00000044 = in_stack_00000044 + *(float *)(*(int *)(unaff_EDI + 0x24) + iVar17);
        iVar11 = *(int *)(unaff_EDI + 0x24) + iVar17;
        in_stack_00000048 = in_stack_00000048 + *(float *)(iVar11 + 4);
        in_stack_0000004c = in_stack_0000004c + *(float *)(iVar11 + 8);
        in_stack_00000050 = in_stack_00000050 + *(float *)(iVar11 + 0xc);
        FUN_00496c10(in_stack_00000074);
        sVar3 = *(short *)(iVar12 + iStack00000010 + 0xc);
        if (sVar3 == 0) {
          pfVar10 = (float *)(*(int *)(unaff_EDI + 0x2c) + iVar17);
          pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar20) * 0x30 + 0x10 + in_stack_00000078);
          *pfVar14 = in_stack_00000028 * pfVar10[3] + in_stack_00000034 * *pfVar10;
          pfVar14[1] = in_stack_00000028 * pfVar10[2] + in_stack_00000034 * pfVar10[1];
          pfVar14[2] = in_stack_00000034 * pfVar10[2] - in_stack_00000028 * pfVar10[1];
          fVar1 = pfVar10[3];
          fVar5 = in_stack_00000028 * *pfVar10;
LAB_00498225:
          pfVar14[3] = in_stack_00000034 * fVar1 - fVar5;
        }
        else {
          if (sVar3 != 1) {
            pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar20) * 0x30 + 0x10 + in_stack_00000078);
            pfVar10 = (float *)(*(int *)(unaff_EDI + 0x28) + iVar17);
            *pfVar14 = in_stack_00000034 * *(float *)(*(int *)(unaff_EDI + 0x28) + iVar17) -
                       in_stack_00000030 * pfVar10[1];
            pfVar14[1] = in_stack_00000034 * pfVar10[1] + in_stack_00000030 * *pfVar10;
            pfVar14[2] = in_stack_00000034 * pfVar10[2] + in_stack_00000030 * pfVar10[3];
            fVar1 = pfVar10[3];
            fVar5 = in_stack_00000030 * pfVar10[2];
            goto LAB_00498225;
          }
          FUN_00497a90();
        }
        iVar20 = iVar20 + 1;
        iStack00000010 = iStack00000010 + 0xe;
        iVar17 = iVar17 + 0x10;
        if ((int)(uint)*(byte *)(in_stack_0000007c + 6) <= iVar20) {
          return 1;
        }
      } while( true );
    }
    if (*(char *)(in_stack_0000007c + 6) == '\0') {
      return 1;
    }
    iVar17 = 0;
    iStack0000000c = 0;
    do {
      sVar3 = *(short *)(iStack0000000c + 0xc + *(int *)(unaff_EDI + 0x10));
      FUN_00494c70(sVar3,&stack0x00000044);
      FUN_00496c10(in_stack_00000074);
      if (sVar3 == 0) {
        pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar20) * 0x30 + 0x10 + in_stack_00000078);
        pfVar10 = (float *)(*(int *)(unaff_EDI + 0x2c) + iVar17);
        *pfVar14 = in_stack_00000028 * pfVar10[3] + in_stack_00000034 * *pfVar10;
        pfVar14[1] = in_stack_00000034 * pfVar10[1] + in_stack_00000028 * pfVar10[2];
        pfVar14[2] = in_stack_00000034 * pfVar10[2] - in_stack_00000028 * pfVar10[1];
        fVar1 = pfVar10[3];
        fVar5 = in_stack_00000028 * *pfVar10;
LAB_00498048:
        pfVar14[3] = in_stack_00000034 * fVar1 - fVar5;
      }
      else {
        if (sVar3 != 1) {
          pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar20) * 0x30 + 0x10 + in_stack_00000078);
          pfVar10 = (float *)(*(int *)(unaff_EDI + 0x28) + iVar17);
          *pfVar14 = in_stack_00000034 * *(float *)(*(int *)(unaff_EDI + 0x28) + iVar17) -
                     in_stack_00000030 * pfVar10[1];
          pfVar14[1] = in_stack_00000034 * pfVar10[1] + in_stack_00000030 * *pfVar10;
          pfVar14[2] = in_stack_00000034 * pfVar10[2] + in_stack_00000030 * pfVar10[3];
          fVar1 = pfVar10[3];
          fVar5 = in_stack_00000030 * pfVar10[2];
          goto LAB_00498048;
        }
        FUN_00497a90();
      }
      iStack0000000c = iStack0000000c + 0xe;
      iVar20 = iVar20 + 1;
      iVar17 = iVar17 + 0x10;
      if ((int)(uint)*(byte *)(in_stack_0000007c + 6) <= iVar20) {
        return 1;
      }
    } while( true );
  }
LAB_00498263:
  iVar17 = 0;
  if (*(char *)(in_stack_0000007c + 6) != '\0') {
    iVar20 = 0;
    in_stack_00000074 = 0.0;
    do {
      sVar3 = *(short *)((int)in_stack_00000074 + 0xc + *(int *)(unaff_EDI + 0x10));
      if (sVar3 == 0) {
        pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar17) * 0x30 + 0x10 + in_stack_00000078);
        pfVar10 = (float *)(*(int *)(unaff_EDI + 0x2c) + iVar20);
        pfVar16 = (float *)(*(int *)(unaff_EDI + 0x24) + iVar20);
        *pfVar14 = *pfVar10 * pfVar16[3] + pfVar10[3] * *pfVar16;
        pfVar14[1] = pfVar16[3] * pfVar10[1] + *pfVar16 * pfVar10[2];
        pfVar14[2] = pfVar16[3] * pfVar10[2] - *pfVar16 * pfVar10[1];
        fVar1 = pfVar10[3] * pfVar16[3];
        fVar5 = *pfVar16 * *pfVar10;
LAB_004983d8:
        pfVar14[3] = fVar1 - fVar5;
      }
      else {
        if (sVar3 != 1) {
          pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar17) * 0x30 + 0x10 + in_stack_00000078);
          iVar12 = *(int *)(unaff_EDI + 0x24) + iVar20;
          pfVar10 = (float *)(*(int *)(unaff_EDI + 0x28) + iVar20);
          *pfVar14 = *(float *)(*(int *)(unaff_EDI + 0x28) + iVar20) * *(float *)(iVar12 + 0xc) -
                     *(float *)(iVar12 + 8) * pfVar10[1];
          pfVar14[1] = *(float *)(iVar12 + 8) * *pfVar10 + pfVar10[1] * *(float *)(iVar12 + 0xc);
          pfVar14[2] = pfVar10[2] * *(float *)(iVar12 + 0xc) + *(float *)(iVar12 + 8) * pfVar10[3];
          fVar1 = pfVar10[3] * *(float *)(iVar12 + 0xc);
          fVar5 = *(float *)(iVar12 + 8) * pfVar10[2];
          goto LAB_004983d8;
        }
        iVar12 = *(int *)(unaff_EDI + 0x28);
        pfVar14 = (float *)((uint)*(byte *)(iVar4 + iVar17) * 0x30 + 0x10 + in_stack_00000078);
        fVar1 = *(float *)(*(int *)(unaff_EDI + 0x24) + 0xc + iVar20) * *(float *)(iVar12 + iVar20);
        iVar11 = *(int *)(unaff_EDI + 0x2c) + iVar20;
        iVar15 = *(int *)(unaff_EDI + 0x24) + iVar20;
        fVar5 = *(float *)(iVar12 + 0xc + iVar20) * *(float *)(iVar15 + 4);
        fVar6 = -(*(float *)(iVar15 + 4) * *(float *)(iVar12 + iVar20));
        fVar7 = ((float *)(iVar12 + iVar20))[3] * *(float *)(iVar15 + 0xc);
        *pfVar14 = fVar1 * *(float *)(iVar11 + 0xc) - fVar5 * *(float *)(iVar11 + 8);
        pfVar14[1] = fVar1 * *(float *)(iVar11 + 8) + fVar5 * *(float *)(iVar11 + 0xc);
        pfVar14[2] = fVar6 * *(float *)(iVar11 + 0xc) + fVar7 * *(float *)(iVar11 + 8);
        pfVar14[3] = fVar7 * *(float *)(iVar11 + 0xc) - fVar6 * *(float *)(iVar11 + 8);
      }
      iVar17 = iVar17 + 1;
      in_stack_00000074 = (float)((int)in_stack_00000074 + 0xe);
      iVar20 = iVar20 + 0x10;
    } while (iVar17 < (int)(uint)*(byte *)(in_stack_0000007c + 6));
  }
  return 1;
}

