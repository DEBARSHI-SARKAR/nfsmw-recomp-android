/* speed.exe 0068e9e0 FUN_0068e9e0; analysis pseudocode, not buildable source.
 * calls 006533b0 FUN_006533b0
 * calls 00653790 FUN_00653790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068e9e0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_8;
  
  iVar4 = (int)param_2;
  fVar1 = *(float *)((int)param_2 + 0x8c);
  fVar6 = (float10)FUN_006533b0(*(undefined4 *)((int)param_2 + 0x48));
  if (param_3 == 1) {
    fVar6 = (float10)FUN_006533b0(*(undefined4 *)((int)param_2 + 0x48));
  }
  else if (param_3 == 2) {
    return (float10)_DAT_008a0dbc;
  }
  param_2 = (float)fVar6;
  fVar3 = _DAT_0089096c -
          ((*(float *)(iVar4 + 0x4c) + _DAT_0089096c) -
          (*(float *)(iVar4 + 0x7c) + *(float *)(iVar4 + 0x5c)) * _DAT_008933d4) * _DAT_008933d4;
  fVar7 = (float10)FUN_006533b0(*(undefined4 *)(iVar4 + 0x48));
  fVar2 = (float10)_DAT_008f8ab4;
  fVar6 = (float10)_DAT_0089096c;
  fVar8 = (float10)FUN_006533b0(ABS(*(float *)(param_1 + 0x140)));
  param_2 = (float)(fVar8 * (float10)(float)((fVar7 * fVar2 * (float10)fVar3 + fVar6) *
                                            (float10)param_2));
  pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0x48) + 0xcc))();
  if (pfVar5 == (float *)0x0) {
    fVar6 = (float10)param_2;
  }
  else {
    fVar6 = ((float10)*pfVar5 * (float10)_DAT_00895074 + (float10)_DAT_0089096c) * (float10)param_2;
    param_2 = (float)fVar6;
  }
  if (((_DAT_00890968 < *(float *)(param_1 + 0x1a4)) &&
      (fVar3 = _DAT_0089096c - *(float *)(param_1 + 0x1a4), fVar3 < _DAT_0089096c)) &&
     (_DAT_00890968 < fVar3)) {
    fStack_8 = *(float *)(iVar4 + 0x48) * _DAT_008ab240;
    if (_DAT_0089096c < fStack_8) {
      fStack_8 = 1.0;
    }
    fVar6 = (float10)FUN_00653790(fVar3);
    fVar6 = (((float10)_DAT_0089096c - fVar6) * ((float10)_DAT_0089096c - (float10)fStack_8) + fVar6
            ) * (float10)param_2;
  }
  fVar3 = *(float *)(*(int *)(param_1 + 0x1bc) + 0x118) * _DAT_00890960;
  param_2 = *(float *)(*(int *)(param_1 + 0x1c0) + 0x118) * _DAT_00890960;
  if ((fVar1 <= _DAT_00890968) || (param_2 <= _DAT_00890968)) {
    if ((_DAT_00890968 <= fVar1) || (_DAT_00890968 <= fVar3)) {
      if ((_DAT_008933d4 <= ABS(*(float *)(param_1 + 0x140))) &&
         (fVar1 = *(float *)(param_1 + 300) - *(float *)(iVar4 + 0xc0) * _DAT_00890968,
         fVar6 <= (float10)fVar1)) {
        fVar6 = (float10)fVar1;
      }
      goto LAB_0068ec3f;
    }
    param_2 = -fVar3;
  }
  if (fVar6 <= (float10)param_2) {
    fVar6 = (float10)param_2;
  }
  if ((float10)_DAT_008a0dbc <= fVar6) {
    fVar6 = (float10)_DAT_008a0dbc;
  }
LAB_0068ec3f:
  if ((float10)_DAT_008a0dbc <= fVar6) {
    fVar6 = (float10)_DAT_008a0dbc;
  }
  *(float *)(param_1 + 300) = (float)fVar6;
  return fVar6;
}

