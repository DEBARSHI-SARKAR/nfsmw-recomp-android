/* speed.exe 004a63c0 FUN_004a63c0; analysis pseudocode, not buildable source.
 * calls 00493ff0 FUN_00493ff0
 * calls 00494380 FUN_00494380
 * calls 0048d7d0 FUN_0048d7d0
 * calls 004a28e0 FUN_004a28e0
 * calls 00492d40 FUN_00492d40
 * calls 0049ff90 FUN_0049ff90
 */

void __thiscall FUN_004a63c0(int param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 extraout_ECX;
  int iVar4;
  float *pfVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_ESI;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [16];
  undefined4 auStack_68 [25];
  
  local_b4 = param_1;
  if (param_3 < *(float *)(param_1 + 0x70) != (param_3 == *(float *)(param_1 + 0x70))) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
              (param_2 - *(float *)(param_1 + 0x20),param_3 - *(float *)(param_1 + 0x20),param_4);
    return;
  }
  if (param_3 < *(float *)(param_1 + 0x78)) {
    fVar1 = *(float *)(param_1 + 0x70);
    fVar2 = *(float *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x7c) != '\0') {
      FUN_0049ff90(*(undefined4 *)(param_1 + 0x10),0);
    }
    if (*(char *)(param_1 + 0x7d) != '\0') {
      FUN_0049ff90(*(undefined4 *)(param_1 + 0x14),0);
    }
    fVar12 = param_3 - *(float *)(param_1 + 0x20);
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))
              (param_2 - *(float *)(param_1 + 0x20),fVar12,*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
              (param_2 - *(float *)(param_1 + 0x24),param_3 - *(float *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x28) < 0) {
      for (iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 8) * 0xc + -8; 3 < iVar9; iVar9 = iVar9 + -0xc
          ) {
        iVar6 = iVar9 * 4;
        FUN_0048d7d0(fVar12,*(int *)(param_1 + 0x10) + iVar6,*(int *)(param_1 + 0x14) + iVar6,
                     iVar6 + param_4);
      }
      iVar9 = *(int *)(param_1 + 0x14);
      iVar6 = *(int *)(param_1 + 0x10);
      *(float *)(param_4 + 0x20) =
           (*(float *)(iVar9 + 0x20) - *(float *)(iVar6 + 0x20)) * fVar12 + *(float *)(iVar6 + 0x20)
      ;
      *(float *)(param_4 + 0x24) =
           (*(float *)(iVar9 + 0x24) - *(float *)(iVar6 + 0x24)) * fVar12 + *(float *)(iVar6 + 0x24)
      ;
      *(float *)(param_4 + 0x28) =
           (*(float *)(iVar9 + 0x28) - *(float *)(iVar6 + 0x28)) * fVar12 + *(float *)(iVar6 + 0x28)
      ;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 8) + -1;
      if (-1 < iVar9) {
        iVar6 = iVar9 * 0x30 + 0x10;
        do {
          if (iVar9 == *(int *)(param_1 + 0x28)) {
            iVar4 = *(int *)(param_1 + 0x14);
            iVar7 = *(int *)(param_1 + 0x28) * 0x30;
            puVar8 = (undefined4 *)(iVar7 + iVar4);
            FUN_00493ff0(*puVar8,puVar8[1],puVar8[2],puVar8[4],puVar8[5],puVar8[6],puVar8[7],
                         *(undefined4 *)(iVar7 + 0x20 + iVar4),puVar8[9],
                         *(undefined4 *)(iVar7 + 0x28 + iVar4));
            FUN_00494380(extraout_ECX,param_1 + 0x30,auStack_68);
            puVar10 = auStack_68;
            puVar11 = auStack_a8;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_00492d40(&stack0xffffff38,&uStack_b8);
            puVar8[4] = unaff_EBX;
            puVar8[6] = (param_3 - fVar1) / fVar2;
            puVar8[5] = uStack_c4;
            puVar8[7] = uStack_bc;
            puVar8[9] = local_b4;
            puVar8[8] = uStack_b8;
            puVar8[10] = uStack_b0;
            iVar4 = *(int *)(unaff_ESI + 0x28) * 4;
            iVar7 = iVar4 + 0x20;
            pfVar5 = (float *)(*(int *)(unaff_ESI + 0x14) + iVar7);
            pfVar3 = (float *)(*(int *)(unaff_ESI + 0x10) + iVar7);
            *(float *)(iVar7 + param_4) = (*pfVar5 - *pfVar3) * fVar12 + *pfVar3;
            *(float *)(iVar4 + 0x24 + param_4) = (pfVar5[1] - pfVar3[1]) * fVar12 + pfVar3[1];
            *(float *)(iVar4 + 0x28 + param_4) = (pfVar5[2] - pfVar3[2]) * fVar12 + pfVar3[2];
            param_1 = unaff_ESI;
          }
          FUN_0048d7d0(fVar12,*(int *)(param_1 + 0x10) + iVar6,*(int *)(param_1 + 0x14) + iVar6,
                       iVar6 + param_4);
          iVar9 = iVar9 + -1;
          iVar6 = iVar6 + -0x30;
        } while (-1 < iVar9);
        return;
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
              (param_2 - *(float *)(param_1 + 0x24),param_3 - *(float *)(param_1 + 0x24),param_4);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar9 = *(int *)(param_1 + 0x28) * 0x30;
      puVar10 = (undefined4 *)(iVar9 + param_4);
      FUN_00493ff0(*puVar10,puVar10[1],puVar10[2],puVar10[4],puVar10[5],puVar10[6],puVar10[7],
                   *(undefined4 *)(iVar9 + 0x20 + param_4),*(undefined4 *)(iVar9 + 0x24 + param_4),
                   *(undefined4 *)(iVar9 + 0x28 + param_4));
      FUN_004a28e0(param_1 + 0x30);
      FUN_00492d40(&uStack_bc,&uStack_ac);
      puVar10[4] = uStack_bc;
      puVar10[5] = uStack_b8;
      puVar10[6] = local_b4;
      puVar10[7] = uStack_b0;
      puVar10[8] = uStack_ac;
      puVar10[9] = auStack_a8[0];
      puVar10[10] = auStack_a8[1];
      return;
    }
  }
  return;
}

