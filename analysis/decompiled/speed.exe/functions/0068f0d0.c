/* speed.exe 0068f0d0 FUN_0068f0d0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 0068efa0 FUN_0068efa0
 * calls 006678f0 FUN_006678f0
 * calls 00401ae0 FUN_00401ae0
 * calls 00401d10 FUN_00401d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068f0d0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uStack_64;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar8 = 0;
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0xf0) + 0x20))();
    if ((float)fVar10 != _DAT_00890968) {
      iVar1 = *(int *)(param_1 + 0xdc);
      uVar5 = FUN_00452940();
      if (uVar5 < 3) {
        pfVar6 = (float *)FUN_006269b0(4);
      }
      else {
        pfVar6 = (float *)(iVar1 + 0x3c);
      }
      if (*pfVar6 <= _DAT_00890968) {
        afStack_28[0] = *(float *)(*(int *)(param_1 + 0xdc) + 0x70);
        afStack_28[1] = _DAT_0089096c - afStack_28[0];
      }
      else {
        FUN_0068efa0(0);
      }
      piVar9 = (int *)(param_1 + 0x1b4);
      do {
        fVar3 = (float)fVar10 * afStack_28[uVar8];
        fVar2 = fVar3;
        if (fVar3 < _DAT_00890968) {
          fVar2 = -fVar3;
        }
        if (_DAT_008aabe0 < fVar2) {
          iVar1 = *(int *)(param_1 + 0xdc);
          fStack_10 = 0.5;
          fStack_50 = 1.0;
          fStack_4c = 1.0;
          fStack_48 = 1.0;
          fStack_44 = 1.0;
          uVar5 = FUN_00452940();
          if (uVar8 < uVar5) {
            puVar7 = (undefined4 *)(uVar8 * 4 + iVar1 + 0x34);
          }
          else {
            puVar7 = (undefined4 *)FUN_006269b0(4);
          }
          uStack_c = *puVar7;
          afStack_28[2] = (float)*(undefined4 *)(*piVar9 + 0xd0);
          uStack_18 = (uint)(_DAT_00890968 < *(float *)(*piVar9 + 0x78));
          afStack_28[3] = (float)*(undefined4 *)(piVar9[1] + 0xd0);
          uStack_14 = (uint)(_DAT_00890968 < *(float *)(piVar9[1] + 0x78));
          uStack_64 = 0;
          fVar2 = *(float *)(piVar9[1] + 0xf0) * afStack_28[uVar8] * _DAT_008933d4 +
                  *(float *)(*piVar9 + 0xf0) * afStack_28[uVar8] * _DAT_008933d4;
          if ((*(uint *)(param_1 + 0x10c) & 1) == 0) {
            if ((*(uint *)(param_1 + 0x10c) & 2) == 0) {
              fVar4 = (*(float *)(piVar9[1] + 0x130) * afStack_28[uVar8] * _DAT_008933d4 +
                      *(float *)(*piVar9 + 0x130) * afStack_28[uVar8] * _DAT_008933d4) -
                      *(float *)(param_2 + 0x40);
              if ((_DAT_00890968 < fVar4 * *(float *)(param_2 + 0x8c)) &&
                 (_DAT_00890968 < fVar2 * fVar3)) {
                fVar2 = fVar2 - *(float *)(param_2 + 0x48);
                fVar11 = (float10)FUN_00401ae0(fVar2,0x3f800000,0x41a00000);
                if ((float10)_DAT_00890968 < fVar11) {
                  fVar12 = (float10)FUN_00401d10(fVar2);
                  fVar12 = (float10)FUN_006678f0(fVar4,(float)fVar12);
                  fVar12 = (float10)FUN_00401d10((float)(fVar12 * (float10)*(float *)(param_2 + 0x8c
                                                                                     )),0x3f800000,
                                                 0x41800000);
                  fVar12 = (float10)FUN_00401ae0((float)fVar12);
                  fVar12 = fVar12 * (float10)(float)fVar11;
                  if ((float10)_DAT_00890968 < fVar12) {
                    if (fVar4 <= _DAT_00890968) {
                      fStack_50 = (float)((float10)_DAT_0089096c - fVar12);
                      fStack_4c = (float)((float10)_DAT_0089096c - (float10)_DAT_008933d4 * fVar12);
                      fStack_44 = (float)(fVar12 + (float10)_DAT_0089096c);
                    }
                    else {
                      fStack_4c = (float)((float10)_DAT_0089096c - fVar12);
                      fStack_50 = (float)((float10)_DAT_0089096c - (float10)_DAT_008933d4 * fVar12);
                      fStack_48 = (float)(fVar12 + (float10)_DAT_0089096c);
                    }
                  }
                }
              }
            }
            else {
              fStack_48 = *(float *)(param_1 + 0x114);
              uStack_64 = 1;
              fStack_10 = _DAT_0089096c - *(float *)(param_1 + 0x114) * _DAT_008933d4;
            }
          }
          else {
            fStack_44 = *(float *)(param_1 + 0x114);
            fStack_10 = *(float *)(param_1 + 0x114) * _DAT_008933d4;
            uStack_64 = 1;
          }
          FUN_0068efa0(uStack_64);
          iVar1 = *piVar9;
          if (_DAT_00890968 < *(float *)(iVar1 + 0x78)) {
            if (*(char *)(iVar1 + 0x134) == '\0') {
              *(float *)(iVar1 + 0xe0) = fStack_8 * fStack_50 * fVar3 + *(float *)(iVar1 + 0xe0);
            }
            *(float *)(*piVar9 + 0xec) = fStack_48 * *(float *)(*piVar9 + 0xec);
          }
          iVar1 = piVar9[1];
          if (_DAT_00890968 < *(float *)(iVar1 + 0x78)) {
            if (*(char *)(iVar1 + 0x134) == '\0') {
              *(float *)(iVar1 + 0xe0) = fStack_4 * fStack_4c * fVar3 + *(float *)(iVar1 + 0xe0);
            }
            *(float *)(piVar9[1] + 0xec) = fStack_44 * *(float *)(piVar9[1] + 0xec);
          }
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 < 2);
    }
  }
  return;
}

