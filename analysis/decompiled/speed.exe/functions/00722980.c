/* speed.exe 00722980 FUN_00722980; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00722980(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  fVar2 = (param_4[1] - param_3[1]) * (*param_2 - *param_1) -
          (param_2[1] - param_1[1]) * (*param_4 - *param_3);
  uVar3 = (ushort)(fVar2 < _DAT_00890968) << 8 | (ushort)(NAN(fVar2) || NAN(_DAT_00890968)) << 10 |
          (ushort)(fVar2 == _DAT_00890968) << 0xe;
  if (fVar2 != _DAT_00890968) {
    fVar1 = ((param_1[1] - param_3[1]) * (*param_4 - *param_3) -
            (param_4[1] - param_3[1]) * (*param_1 - *param_3)) * (_DAT_0089096c / fVar2);
    uVar3 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10
            | (ushort)(fVar1 == _DAT_00890968) << 0xe;
    if ((fVar1 >= _DAT_00890968) &&
       (uVar3 = (ushort)(fVar1 < _DAT_0089096c) << 8 |
                (ushort)(NAN(fVar1) || NAN(_DAT_0089096c)) << 10 |
                (ushort)(fVar1 == _DAT_0089096c) << 0xe,
       fVar1 < _DAT_0089096c || (fVar1 == _DAT_0089096c) != 0)) {
      fVar2 = ((param_1[1] - param_3[1]) * (*param_2 - *param_1) -
              (param_2[1] - param_1[1]) * (*param_1 - *param_3)) * (_DAT_0089096c / fVar2);
      uVar3 = (ushort)(fVar2 < _DAT_00890968) << 8 |
              (ushort)(NAN(fVar2) || NAN(_DAT_00890968)) << 10 |
              (ushort)(fVar2 == _DAT_00890968) << 0xe;
      if (fVar2 >= _DAT_00890968) {
        uVar3 = (ushort)(fVar2 < _DAT_0089096c) << 8 |
                (ushort)(NAN(fVar2) || NAN(_DAT_0089096c)) << 10 |
                (ushort)(fVar2 == _DAT_0089096c) << 0xe;
        if (fVar2 < _DAT_0089096c || (fVar2 == _DAT_0089096c) != 0) {
          return CONCAT11((char)(uVar3 >> 8),1);
        }
      }
    }
  }
  return uVar3;
}

