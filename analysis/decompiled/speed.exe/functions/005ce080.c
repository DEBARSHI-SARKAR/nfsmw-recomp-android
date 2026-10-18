/* speed.exe 005ce080 FUN_005ce080; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005ce080(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = (param_2[2] - param_1[2]) * (*param_3 - *param_1) -
          (param_3[2] - param_1[2]) * (*param_2 - *param_1);
  uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
          (ushort)(fVar1 == _DAT_00890968) << 0xe;
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    fVar1 = (param_3[2] - param_1[2]) * (*param_4 - *param_1) -
            (param_4[2] - param_1[2]) * (*param_3 - *param_1);
    uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10
            | (ushort)(fVar1 == _DAT_00890968) << 0xe;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      fVar1 = (param_4[2] - param_1[2]) * (*param_2 - *param_1) -
              (param_2[2] - param_1[2]) * (*param_4 - *param_1);
      uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
              (ushort)(fVar1 == _DAT_00890968) << 0xe;
      if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
        return CONCAT11((char)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2;
}

