/* speed.exe 007677d0 FUN_007677d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_007677d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  uint uVar2;
  ushort uVar3;
  
  fVar1 = (*param_2 - *param_1) * *param_4 +
          (param_2[2] - param_1[2]) * param_4[2] + (param_2[1] - param_1[1]) * param_4[1];
  uVar2 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890968) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                        (ushort)(fVar1 == _DAT_00890968) << 0xe);
  if (fVar1 != _DAT_00890968) {
    *param_6 = ((*param_3 - *param_1) * *param_4 +
               (param_3[2] - param_1[2]) * param_4[2] + (param_3[1] - param_1[1]) * param_4[1]) /
               fVar1;
    *param_5 = *param_2 - *param_1;
    param_5[1] = param_2[1] - param_1[1];
    param_5[2] = param_2[2] - param_1[2];
    fVar1 = *param_6;
    *param_5 = fVar1 * *param_5 + *param_1;
    param_5[1] = fVar1 * param_5[1] + param_1[1];
    param_5[2] = fVar1 * param_5[2] + param_1[2];
    fVar1 = *param_6;
    uVar2 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890968) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                          (ushort)(fVar1 == _DAT_00890968) << 0xe);
    if (fVar1 >= _DAT_00890968) {
      fVar1 = *param_6;
      uVar3 = (ushort)(fVar1 < _DAT_0089096c) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_0089096c)) << 10 |
              (ushort)(fVar1 == _DAT_0089096c) << 0xe;
      uVar2 = (uint)uVar3;
      if (fVar1 < _DAT_0089096c != (fVar1 == _DAT_0089096c)) {
        return CONCAT31((uint3)(byte)(uVar3 >> 8),1);
      }
    }
  }
  return uVar2;
}

