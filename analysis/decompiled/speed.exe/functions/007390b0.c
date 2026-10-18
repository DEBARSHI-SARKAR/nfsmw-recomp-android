/* speed.exe 007390b0 FUN_007390b0; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007390b0(int param_1,undefined4 param_2,uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = param_4[1] * *param_4 * param_4[3];
  if (fVar1 < _DAT_00890968 == (fVar1 == _DAT_00890968)) {
    fVar4 = (float10)FUN_00401ae0(param_2,param_4[2],param_4[3]);
    fVar1 = *param_4;
    pfVar3 = (float *)FUN_00454810(0x13eb7da2,0);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = (float *)FUN_006269b0(4);
    }
    fVar2 = *pfVar3 * param_4[1] * (float)fVar4 * _DAT_008aae90;
    param_4 = (float *)0x0;
    if ((param_3 & 0xf) != 0) {
      fVar5 = (float10)fsin((float10)(float)(fVar4 * (float10)fVar1) *
                            (float10)*(float *)(param_1 + 0x3a0) * (float10)_DAT_008b2b8c *
                            (float10)_DAT_0089096c);
      fVar5 = fVar5 * (float10)fVar2 * (float10)_DAT_008933d4;
      if (((param_3 & 3) == 0) && (fVar5 < (float10)_DAT_00890968)) {
        fVar5 = -fVar5;
      }
      param_4 = (float *)(float)fVar5;
      if ((param_3 & 0xc) == 0) {
        if (fVar5 < (float10)_DAT_00890968) {
          fVar5 = -fVar5;
        }
        param_4 = (float *)(float)-fVar5;
      }
    }
    fVar5 = (float10)_DAT_00890968;
    if ((param_3 & 0xf) != 0) {
      fVar5 = (float10)fsin(((float10)*(float *)(param_1 + 0x3a0) + (float10)_DAT_008b4924) *
                            (float10)(float)(fVar4 * (float10)fVar1) * (float10)_DAT_008b2b8c *
                            (float10)_DAT_0089096c);
      fVar5 = fVar5 * (float10)fVar2;
      if (((param_3 & 9) == 0) && (fVar5 < (float10)_DAT_00890968)) {
        fVar5 = -fVar5;
      }
      if ((param_3 & 6) == 0) {
        if (fVar5 < (float10)_DAT_00890968) {
          fVar5 = -fVar5;
        }
        fVar5 = -fVar5;
      }
    }
    *(float *)(param_1 + 0x394) = (float)param_4 + *(float *)(param_1 + 0x394);
    *(float *)(param_1 + 0x390) = (float)(fVar5 + (float10)*(float *)(param_1 + 0x390));
  }
  return;
}

