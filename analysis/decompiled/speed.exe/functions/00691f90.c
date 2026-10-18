/* speed.exe 00691f90 FUN_00691f90; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 00691ac0 FUN_00691ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00691f90(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar5 = (int)param_2;
  if (1 < (int)param_2) {
    fVar1 = *(float *)(param_1 + 0x9c + (int)param_2 * 4);
    iVar8 = *(int *)(param_1 + 0x160);
    fVar2 = *(float *)(param_1 + 0xc4 + (int)param_2 * 4);
    uVar6 = FUN_00452940();
    if ((int)param_2 - 1U < uVar6) {
      pfVar7 = (float *)(iVar8 + 8 + ((int)param_2 - 1U) * 4);
    }
    else {
      pfVar7 = (float *)FUN_006269b0(4);
    }
    fVar4 = *pfVar7;
    if ((param_2 != 2.8026e-45) && (_DAT_00890968 < fVar4)) {
      fVar3 = *(float *)(param_1 + 0x98 + (int)param_2 * 4);
      fVar9 = (float10)FUN_00691ac0(param_2);
      fVar10 = ((float10)fVar3 / (float10)fVar4) * fVar9 - (float10)_DAT_008970cc;
      fVar9 = (float10)*(float *)(*(int *)(param_1 + 0x14c) + 0x5c);
      fVar9 = ((float10)fVar2 - fVar9) * (float10)_DAT_008aae04 + fVar9;
      fVar9 = ((float10)fVar2 - fVar9) * (float10)*(float *)(param_1 + 0x8c) + fVar9;
      if (fVar9 < fVar10) {
        fVar10 = (float10)(float)fVar9;
      }
      fVar2 = (float)fVar10;
    }
    param_2 = fVar2;
    if (fVar1 <= param_3) {
      iVar8 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      if (iVar5 < iVar8) {
        return 2;
      }
    }
    if ((param_3 < param_2 != (param_3 == param_2)) && (2 < iVar5)) {
      return 1;
    }
  }
  return 0;
}

