/* speed.exe 0066c3a0 FUN_0066c3a0; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066c3a0(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  float local_8;
  uint local_4;
  
  uVar8 = 0;
  local_8 = 0.0;
  local_4 = 0;
  uVar4 = FUN_00452940();
  if (uVar4 != 0) {
    iVar5 = FUN_00452940();
    if (iVar5 != 0) {
      iVar5 = 8;
      do {
        iVar2 = *(int *)(param_1 + 8);
        uVar6 = FUN_00452940();
        if (uVar8 < uVar6) {
          pfVar7 = (float *)(iVar2 + iVar5);
        }
        else {
          pfVar7 = (float *)FUN_006269b0(4);
        }
        if (local_8 < *pfVar7) {
          local_8 = *pfVar7;
          local_4 = uVar8;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
        uVar6 = FUN_00452940();
      } while (uVar8 < uVar6);
    }
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x5c);
    *param_2 = fVar1;
    if (1 < uVar4) {
      fVar3 = (float)(int)(uVar4 - 1);
      if ((int)(uVar4 - 1) < 0) {
        fVar3 = fVar3 + _DAT_00891214;
      }
      *param_2 = (*(float *)(*(int *)(param_1 + 8) + 0x54) -
                 *(float *)(*(int *)(param_1 + 8) + 0x5c)) * ((float)(int)local_4 / fVar3) + fVar1;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x58);
    fVar3 = *(float *)(*(int *)(param_1 + 8) + 0x5c);
    if (*param_2 < fVar1) {
      fVar1 = *param_2;
    }
    if (fVar1 < fVar3) {
      fVar1 = fVar3;
    }
    *param_2 = fVar1;
    return (float10)local_8;
  }
  fVar9 = (float10)_DAT_00890968;
  *param_2 = 0.0;
  return fVar9;
}

