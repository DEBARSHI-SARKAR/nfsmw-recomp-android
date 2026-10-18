/* speed.exe 00691860 FUN_00691860; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00691860(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)_DAT_00890968;
  if (_DAT_0089096c < *(float *)(param_2 + 0xbc)) {
    fVar1 = *(float *)(param_2 + 0x48);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fVar2 = (float10)FUN_005cb5d0(*(undefined4 *)(param_2 + 0x40),fVar1);
    if (*(float *)(param_2 + 0x48) < _DAT_00890968) {
      fVar2 = -fVar2;
    }
  }
  fVar3 = (float10)*(float *)(param_2 + 0x48) * (float10)_DAT_00892b64;
  if (fVar3 < (float10)_DAT_00890968) {
    fVar3 = -fVar3;
  }
  fVar2 = (float10)*(float *)(param_1 + 0xf0) * (float10)*(float *)(param_1 + 0xf4) +
          ((float10)_DAT_0089096c - (float10)*(float *)(param_1 + 0xf4)) *
          ((float10)_DAT_0089096c - fVar3 * (float10)_DAT_0089119c) * fVar2;
  *(float *)(param_1 + 0xec) = (float)fVar2;
  if ((float10)*(float *)(param_1 + 0xe8) <= fVar2) {
    fVar2 = (float10)*(float *)(param_1 + 0xe8);
  }
  if (fVar2 < (float10)-*(float *)(param_1 + 0xe8)) {
    fVar2 = (float10)-*(float *)(param_1 + 0xe8);
  }
  *(float *)(param_1 + 0xec) = (float)fVar2;
  fVar3 = (float10)_DAT_008aabd8;
  param_3[1] = 0.0;
  fVar3 = (float10)fcos(fVar3 * fVar2);
  param_3[2] = (float)fVar3;
  fVar2 = (float10)fsin(fVar2 * (float10)_DAT_008aabd8);
  *param_3 = (float)fVar2;
  FUN_00401670(param_3,param_2,param_3);
  *param_4 = *param_3;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
  return;
}

