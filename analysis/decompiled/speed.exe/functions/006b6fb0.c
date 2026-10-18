/* speed.exe 006b6fb0 FUN_006b6fb0; analysis pseudocode, not buildable source.
 * calls 006955b0 FUN_006955b0
 * calls 0073e4c0 FUN_0073e4c0
 * calls 005d59f0 FUN_005d59f0
 * calls 0048aee0 FUN_0048aee0
 * calls 00745930 FUN_00745930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b6fb0(int param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  float fVar8;
  sbyte sVar9;
  float fVar10;
  float unaff_EDI;
  uint uVar11;
  float10 fVar12;
  float fStack_3c;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = (int)param_2;
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)((int)param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((int)param_2 + 0x6c);
  if (((*(int **)(param_1 + 0x98) != (int *)0x0) &&
      (iVar5 = (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(), 0 < iVar5)) && (iVar5 < 3)) {
    *(undefined1 *)(iVar3 + 0x70) = 1;
  }
  puVar6 = (uint *)FUN_0073e4c0();
  uVar11 = *puVar6;
  while (uVar11 != 0) {
    if (puVar6[6] != 0) {
      if ((*(int **)(param_1 + 0x94) == (int *)0x0) ||
         (cVar4 = (**(code **)(**(int **)(param_1 + 0x94) + 4))(uVar11), cVar4 == '\0')) {
        cVar4 = (**(code **)(**(int **)(param_1 + 0x90) + 0x9c))(*puVar6);
        if (cVar4 == '\0') {
          uVar11 = *(uint *)(iVar3 + 0x60) & ~*puVar6;
        }
        else {
          uVar11 = *(uint *)(iVar3 + 0x60) | *puVar6;
        }
        *(uint *)(iVar3 + 0x60) = uVar11;
      }
      else {
        *(uint *)(iVar3 + 100) = *(uint *)(iVar3 + 100) | *puVar6;
      }
    }
    puVar1 = puVar6 + 8;
    puVar6 = puVar6 + 8;
    uVar11 = *puVar1;
  }
  fVar10 = 0.0;
  iVar5 = FUN_005d59f0(&LAB_00622540);
  if ((iVar5 == 0) || (cVar4 = FUN_0048aee0(iVar5 + 8), cVar4 == '\0')) {
    if (*(int **)(param_1 + 0x88) != (int *)0x0) {
      fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x74))();
      *(float *)(iVar3 + 0x88) = (float)fVar12;
      *(float *)(iVar3 + 0x84) = (float)fVar12;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x88) = 0;
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x20))(&param_2);
    *(undefined4 *)(iVar3 + 0x50) = *puVar7;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x8c) + 0x14))();
    *(float *)(iVar3 + 0x90) = (float)fVar12;
  }
  param_2 = (int *)**(int **)(param_1 + 0xa8);
  if (param_2 != *(int **)(param_1 + 0xa8)) {
    do {
      FUN_00745930((int)param_2 + 0xc);
      FUN_006955b0();
    } while (param_2 != (int *)*(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
    iVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 8))();
    if (iVar5 != 0) {
      do {
        (**(code **)(**(int **)(param_1 + 0x88) + 0x48))(fVar10);
        (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(fVar10);
        fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x58))();
        fVar8 = (float)(fVar12 * (float10)_DAT_008aabd8);
        fVar15 = _DAT_008aabd4;
        if ((fVar12 * (float10)_DAT_008aabd8 < (float10)_DAT_008aabd4) &&
           (fVar15 = fVar8, fVar8 < _DAT_0089120c)) {
          fVar15 = -3.1415927;
        }
        piVar2 = *(int **)(param_1 + 0x88);
        (**(code **)(*piVar2 + 0x28))(fVar10);
        (**(code **)(*piVar2 + 100))();
        (**(code **)(*piVar2 + 0x68))(fVar10);
        (**(code **)(**(int **)(param_1 + 0x88) + 0x50))(fVar10);
        fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x68))(fVar10);
        fVar8 = (float)fVar12;
        fVar13 = 0.0;
        fVar14 = 0.0;
        cVar4 = (**(code **)(**(int **)(param_1 + 0x88) + 0x24))(fVar10);
        fStack_3c = fVar10;
        if (cVar4 != '\0') {
          fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x38))(fVar10);
          if (fVar12 < (float10)_DAT_00890968) {
            fVar12 = -fVar12;
          }
          fVar13 = (float)fVar12;
          fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x30))(fVar10);
          if (fVar12 < (float10)_DAT_00890968) {
            fVar12 = -fVar12;
          }
          unaff_EDI = (float)fVar12;
          fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x34))(fVar10);
          if ((float10)fVar15 <= fVar12) {
            fStack_3c = 0.0;
          }
          else {
            fStack_3c = (float)((float10)fVar15 - fVar12);
          }
          fVar15 = 1.4013e-45;
        }
        if ((uint)fVar10 < 2) {
          uVar11 = (uint)fVar10 & 1;
          *(float *)(iVar3 + 0x44 + uVar11 * 4) = -fVar13;
        }
        else {
          uVar11 = (byte)~SUB41(fVar10,0) & 1 | 2;
        }
        sVar9 = (sbyte)uVar11;
        if ((*(int **)(param_1 + 0xa0) != (int *)0x0) &&
           (iVar5 = (**(code **)(**(int **)(param_1 + 0xa0) + 4))(fVar10), iVar5 == 2)) {
          *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) | 1 << sVar9;
        }
        *(float *)(iVar3 + 0x34 + uVar11 * 4) = fStack_3c;
        *(float *)(iVar3 + 0x14 + uVar11 * 4) = fVar14 * fVar8;
        *(float *)(iVar3 + 4 + uVar11 * 4) = unaff_EDI;
        *(float *)(iVar3 + 0x24 + uVar11 * 4) = fVar10;
        if (SUB41(fVar15,0) == '\0') {
          *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) & ~(1 << sVar9);
        }
        else {
          *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) | 1 << sVar9;
        }
        fVar10 = (float)((int)fVar10 + 1);
        fVar8 = (float)(**(code **)(**(int **)(param_1 + 0x88) + 8))();
      } while ((uint)fVar10 < (uint)fVar8);
    }
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))();
    *(float *)(iVar3 + 0x94) = (float)fVar12;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x9c) + 0x30))();
    *(float *)(iVar3 + 0x98) = (float)fVar12;
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
    *(float *)(iVar3 + 0x9c) = (float)fVar12;
  }
  return;
}

