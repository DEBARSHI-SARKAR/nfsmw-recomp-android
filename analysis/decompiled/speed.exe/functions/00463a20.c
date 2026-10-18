/* speed.exe 00463a20 FUN_00463a20; analysis pseudocode, not buildable source.
 * calls 0045dd10 FUN_0045dd10
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00463a20(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  pfVar7 = param_3;
  fVar1 = param_1[3] * param_3[3] +
          *param_3 * *param_1 + param_3[1] * param_1[1] + param_3[2] * param_1[2];
  fVar2 = ABS(fVar1);
  if (_DAT_0089096c - fVar2 <= _DAT_00890ea8) {
    param_3 = (float *)(_DAT_0089096c - param_4);
    fVar12 = (float10)param_4;
  }
  else {
    iVar8 = FUN_0045dd10(fVar2);
    fVar10 = (float10)FUN_0045db30(0x4000 - iVar8);
    fVar11 = (float10)_DAT_0089096c;
    uVar9 = FUN_007c4b80();
    fVar12 = (float10)FUN_0045db30(uVar9);
    param_3 = (float *)(float)(fVar12 * (float10)(float)(fVar11 / fVar10));
    uVar9 = FUN_007c4b80();
    fVar12 = (float10)FUN_0045db30(uVar9);
    fVar12 = fVar12 * (float10)(float)(fVar11 / fVar10);
  }
  if (fVar1 < _DAT_00890968) {
    param_3 = (float *)-(float)param_3;
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = pfVar7[1];
  fVar5 = pfVar7[2];
  fVar6 = pfVar7[3];
  *param_2 = (float)(fVar12 * (float10)*pfVar7 + (float10)(float)param_3 * (float10)*param_1);
  param_2[1] = (float)(fVar12 * (float10)fVar4 + (float10)(float)param_3 * (float10)fVar1);
  param_2[2] = (float)(fVar12 * (float10)fVar5 + (float10)((float)param_3 * fVar2));
  param_2[3] = (float)(fVar12 * (float10)fVar6 + (float10)((float)param_3 * fVar3));
  return;
}

