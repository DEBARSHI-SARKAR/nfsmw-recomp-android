/* speed.exe 00788040 FUN_00788040; analysis pseudocode, not buildable source.
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00773b60 FUN_00773b60
 * calls 005d0370 FUN_005d0370
 * calls 00660100 FUN_00660100
 * calls 00462430 FUN_00462430
 * calls 00771f50 FUN_00771f50
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00781220 FUN_00781220
 * calls 00463ca0 FUN_00463ca0
 * calls 00463c70 FUN_00463c70
 * calls 0077bac0 FUN_0077bac0
 * calls 0076d280 FUN_0076d280
 * calls 004100a0 FUN_004100a0
 * calls 00772350 FUN_00772350
 * calls 0045ce40 FUN_0045ce40
 * calls 0045f150 FUN_0045f150
 * calls 00660200 FUN_00660200
 * calls 0076d2d0 FUN_0076d2d0
 * calls 0045f210 FUN_0045f210
 * calls 0076d1e0 FUN_0076d1e0
 * calls 007801b0 FUN_007801b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00788040(int param_1,float param_2)

{
  ushort *puVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ushort *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  int local_54;
  int local_44;
  uint local_30;
  float local_28;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008823c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  uVar8 = FUN_0045ce40();
  iVar14 = *(int *)(*(int *)(param_1 + 0x2c) + 0x7c);
  bVar19 = iVar14 == 6;
  local_44 = 0x7fffffff;
  iVar9 = FUN_0064c9b0();
  if (iVar9 != 0) {
    local_44 = FUN_00660100(0x20,0xd);
  }
  bVar21 = *(int *)(param_1 + 0xc) < 0;
  local_54 = 0;
  bVar20 = false;
  if (*(int *)(param_1 + 0xc) == 0) {
    do {
      if (*(int *)(param_1 + 0x44) == param_1 + 0x44) break;
      iVar9 = FUN_0064c9b0();
      if (iVar9 == 0) {
        fVar22 = (float10)FUN_00462430(uVar8);
        bVar21 = (float10)param_2 < fVar22;
      }
      else {
        bVar21 = local_54 == local_44;
      }
      if (bVar21) break;
      piVar3 = *(int **)(param_1 + 0x48);
      local_54 = local_54 + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar9 = *piVar3;
      piVar11 = (int *)piVar3[1];
      *piVar11 = iVar9;
      *(int **)(iVar9 + 4) = piVar11;
      if ((*(int *)(param_1 + 0x34) == (int)*(short *)((int)piVar3 + 10)) &&
         ((*(int *)(param_1 + 0x30) == 0 ||
          (*(int *)(param_1 + 0x30) == (short)piVar3[3] * 0x20 + DAT_009b38bc)))) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(int **)(param_1 + 0x10) = piVar3;
        break;
      }
      iVar9 = (short)piVar3[3] * 0x20;
      local_30 = (uint)*(byte *)(iVar9 + 0x10 + DAT_009b38bc);
      fVar16 = (float)(iVar9 + DAT_009b38bc);
      iVar9 = FUN_0045f150(DAT_009b38ec);
      if (iVar9 < (int)(local_30 - 1)) {
        *(uint *)(param_1 + 0xc) = bVar19 + 2;
        *(uint *)(param_1 + 0x10) = bVar19 - 1 & (uint)piVar3;
        break;
      }
      if (local_30 != 0) {
        puVar17 = (ushort *)((int)fVar16 + 0x12);
        do {
          uVar18 = (uint)*puVar17;
          if (uVar18 != (int)*(short *)((int)piVar3 + 10)) {
            iVar9 = uVar18 * 0x16;
            puVar1 = (ushort *)(DAT_009b38c0 + iVar9);
            if (((((*(byte *)(*(short *)((int)piVar3 + 10) * 0x16 + DAT_009b38c0 + 10) & 1) == 0) ||
                 ((puVar1[5] & 1) == 0)) || (iVar14 == 0)) &&
               (cVar7 = FUN_00773b60(puVar1,CONCAT31((int3)((uint)fVar16 >> 8),
                                                     (int)*(short *)((int)fVar16 + 0xc) ==
                                                     (uint)*puVar1),iVar14), cVar7 != '\0')) {
              local_1c = (float)((uint)*(ushort *)(DAT_009b38c0 + 2 + iVar9) * 0x20 + DAT_009b38bc);
              fVar10 = (float)((uint)*(ushort *)(DAT_009b38c0 + iVar9) * 0x20 + DAT_009b38bc);
              fVar6 = (float)*(ushort *)((int)piVar3 + 0xe) * _DAT_00905ce4 +
                      (float)puVar1[2] * _DAT_009b3a14;
              fVar15 = local_1c;
              if (fVar16 != fVar10) {
                fVar15 = fVar10;
              }
              piVar11 = (int *)FUN_0076d280(fVar15,uVar18);
              if (((piVar11 == (int *)0x0) ||
                  (local_28 = (float)(uint)*(ushort *)((int)piVar11 + 0xe),
                  (float)(int)local_28 * _DAT_00905ce4 < fVar6 ==
                  ((float)(int)local_28 * _DAT_00905ce4 == fVar6))) &&
                 ((piVar12 = (int *)FUN_0076d2d0(fVar15,uVar18), piVar12 == (int *)0x0 ||
                  (local_28 = (float)(uint)*(ushort *)((int)piVar12 + 0xe),
                  (float)(int)local_28 * _DAT_00905ce4 < fVar6 ==
                  ((float)(int)local_28 * _DAT_00905ce4 == fVar6))))) {
                if (piVar11 != (int *)0x0) {
                  piVar4 = (int *)piVar11[1];
                  iVar9 = *piVar11;
                  *piVar4 = iVar9;
                  *(int **)(iVar9 + 4) = piVar4;
                  FUN_00463ca0(DAT_009b38ec,piVar11);
                }
                if (piVar12 != (int *)0x0) {
                  iVar9 = *piVar12;
                  piVar11 = (int *)piVar12[1];
                  *piVar11 = iVar9;
                  *(int **)(iVar9 + 4) = piVar11;
                  FUN_00463ca0(DAT_009b38ec,piVar12);
                }
                fVar22 = (float10)FUN_004100a0(fVar15,param_1 + 0x38);
                local_28 = (float)fVar22;
                local_24 = FUN_00463c70(DAT_009b38ec);
                local_4 = 0;
                if (local_24 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = FUN_0076d1e0(piVar3,fVar15,uVar18,fVar6,local_28);
                }
                local_4 = 0xffffffff;
                FUN_00772350(&LAB_00764f80,uVar13);
              }
            }
          }
          puVar17 = puVar17 + 1;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
      iVar9 = *(int *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x4c) = (uint)piVar3;
      *(int **)(iVar9 + 4) = piVar3;
      piVar3[1] = param_1 + 0x4c;
      *piVar3 = iVar9;
    } while (*(int *)(param_1 + 0xc) == 0);
    bVar21 = *(int *)(param_1 + 0xc) < 0;
    bVar20 = false;
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 0x44) == param_1 + 0x44) {
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      bVar21 = *(int *)(param_1 + 0xc) < 0;
      bVar20 = *(int *)(param_1 + 0xc) == 0;
    }
  }
  if (!bVar20 && !bVar21) {
    iVar9 = 0;
    for (iVar14 = *(int *)(param_1 + 0x10); iVar14 != 0;
        iVar14 = FUN_0045f210((int)*(short *)(iVar14 + 8))) {
      iVar9 = iVar9 + 1;
      if (*(short *)(iVar14 + 8) < 0) break;
    }
    iVar14 = *(int *)(param_1 + 0x10);
    while( true ) {
      if ((iVar14 == 0) || (iVar9 < 0x1ff)) goto LAB_00788420;
      iVar9 = iVar9 + -1;
      if (*(short *)(iVar14 + 8) < 0) break;
      iVar14 = FUN_0045f210((int)*(short *)(iVar14 + 8));
    }
    iVar14 = 0;
LAB_00788420:
    bVar21 = bVar19;
    if (0 < iVar9) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x78) = 3;
      iVar5 = *(int *)(param_1 + 0x2c);
      bVar21 = false;
      if (((int)*(short *)(iVar5 + 0x8e) == *(int *)(param_1 + 0x34)) &&
         ((*(float *)(param_1 + 0x38) - *(float *)(iVar5 + 0x98)) * *(float *)(iVar5 + 0xbc) +
          (*(float *)(param_1 + 0x3c) - *(float *)(iVar5 + 0x9c)) * *(float *)(iVar5 + 0xc0) +
          (*(float *)(param_1 + 0x40) - *(float *)(iVar5 + 0xa0)) * *(float *)(iVar5 + 0xc4) <
          _DAT_00890968)) {
        FUN_0077bac0();
        bVar21 = bVar19;
      }
    }
    *(int *)(*(int *)(param_1 + 0x2c) + 0x2e0) = iVar9;
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2e4);
    while ((iVar14 != 0 && (0 < iVar9))) {
      sVar2 = *(short *)(iVar14 + 10);
      iVar9 = iVar9 + -1;
      *(short *)(iVar5 + iVar9 * 2) = sVar2;
      if (((int)sVar2 == (int)*(short *)(*(int *)(param_1 + 0x2c) + 0x8e)) &&
         (*(short *)(iVar14 + 0xc) * 0x20 + DAT_009b38bc !=
          (uint)*(ushort *)
                 (sVar2 * 0x16 + DAT_009b38c0 + *(char *)(*(int *)(param_1 + 0x2c) + 0x8c) * 2) *
          0x20 + DAT_009b38bc)) {
        FUN_0077bac0();
        bVar21 = bVar19;
      }
      if (*(short *)(iVar14 + 8) < 0) break;
      iVar14 = FUN_0045f210((int)*(short *)(iVar14 + 8));
    }
    iVar14 = *(int *)(param_1 + 0x2c);
    uVar18 = *(uint *)(iVar14 + 0x2e0);
    if ((*(int *)(iVar14 + 0x7c) == 3) && (*(int *)(param_1 + 0xc) != 1)) {
      *(undefined4 *)(iVar14 + 0x2e0) = 0;
    }
    if (bVar19) {
      local_14 = (undefined4 *)FUN_00771f50();
      *(undefined1 *)((int)local_14 + 0xf) = 1;
      local_14[1] = local_14;
      *local_14 = local_14;
      local_14[2] = local_14;
      local_10 = 0;
      iVar14 = 0;
      local_4 = 1;
      if (0 < (int)uVar18) {
        do {
          local_28 = (float)(uint)*(ushort *)
                                   (*(int *)(*(int *)(param_1 + 0x2c) + 0x2e4) + iVar14 * 2);
          FUN_007801b0(&local_20,&local_28);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)uVar18);
      }
      if (local_10 < uVar18) {
        bVar21 = true;
      }
      local_4 = 0xffffffff;
      FUN_00781220(&local_24,*local_14,local_14);
      if (local_14 != (undefined4 *)0x0) {
        FUN_005d0370(local_14,0x10,0);
      }
    }
    if (bVar21) {
      local_20 = *(undefined4 *)(param_1 + 0x40);
      local_1c = -*(float *)(param_1 + 0x38);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x78) = 2;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (DAT_009b38e8 != '\0') {
      FUN_00462430(uVar8);
    }
  }
  fVar22 = (float10)FUN_00462430(uVar8);
  param_2 = (float)fVar22;
  iVar14 = FUN_0064c9a0();
  if (iVar14 != 0) {
    FUN_00660200(local_54,0x20,0xd);
  }
  iVar14 = FUN_0064c9a0();
  if (iVar14 == 0) {
    iVar14 = FUN_0064c9b0();
    if (iVar14 != 0) {
      param_2 = (float)FUN_00660100(0x20,0xd);
    }
  }
  else {
    local_28 = param_2;
    FUN_00660200(param_2,0x20,0xd);
  }
  *(float *)(param_1 + 0x1c) = param_2 + *(float *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return (float10)param_2;
}

