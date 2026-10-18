/* speed.exe 00762d00 FUN_00762d00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00762d00(float *param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = (*param_2 - param_2[4]) * (param_1[2] - param_2[6]) -
          (param_2[2] - param_2[6]) * (*param_1 - param_2[4]);
  if (fVar1 < _DAT_00890968 == (fVar1 == _DAT_00890968)) {
    fVar1 = (param_2[4] - param_2[8]) * (param_1[2] - param_2[10]) -
            (*param_1 - param_2[8]) * (param_2[6] - param_2[10]);
    uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10
            | (ushort)(fVar1 == _DAT_00890968) << 0xe;
    if (fVar1 >= _DAT_00890968) {
      fVar1 = (param_1[2] - param_2[2]) * (param_2[8] - *param_2) -
              (*param_1 - *param_2) * (param_2[10] - param_2[2]);
      uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
              (ushort)(fVar1 == _DAT_00890968) << 0xe;
      if (fVar1 >= _DAT_00890968) goto LAB_00762dd8;
    }
  }
  else {
    fVar1 = (param_1[2] - param_2[10]) * (param_2[4] - param_2[8]) -
            (*param_1 - param_2[8]) * (param_2[6] - param_2[10]);
    uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10
            | (ushort)(fVar1 == _DAT_00890968) << 0xe;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      fVar1 = (param_2[8] - *param_2) * (param_1[2] - param_2[2]) -
              (*param_1 - *param_2) * (param_2[10] - param_2[2]);
      uVar2 = (ushort)(fVar1 < _DAT_00890968) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
              (ushort)(fVar1 == _DAT_00890968) << 0xe;
      if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
LAB_00762dd8:
        return CONCAT11((char)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2;
}

