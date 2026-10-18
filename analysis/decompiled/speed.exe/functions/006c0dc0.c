/* speed.exe 006c0dc0 FUN_006c0dc0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c0dc0(int param_1,int param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_00890968;
  fVar2 = _DAT_0089096c;
  if (*(int *)(param_1 + 0x68) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x68) + 0x290);
    fVar2 = _DAT_0089096c - fVar1;
  }
  if (_DAT_00890968 < _DAT_008fae40) {
    fVar2 = _DAT_0089096c - _DAT_008fae40;
    fVar1 = _DAT_008fae40;
  }
  param_2 = param_2 * 0x20;
  *param_3 = fVar1 * *(float *)(&DAT_008f9370 + param_2) +
             fVar2 * *(float *)(&DAT_008f9374 + param_2);
  *param_4 = fVar1 * *(float *)(&DAT_008f9378 + param_2) +
             fVar2 * *(float *)(&DAT_008f937c + param_2);
  *param_5 = fVar1 * *(float *)(&DAT_008f9380 + param_2) +
             fVar2 * *(float *)(&DAT_008f9384 + param_2);
  *param_6 = fVar1 * *(float *)(&DAT_008f9388 + param_2) +
             fVar2 * *(float *)(&DAT_008f938c + param_2);
  return;
}

