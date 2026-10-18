/* speed.exe 005b1140 FUN_005b1140; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005b1140(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  fVar1 = *param_2;
  fVar2 = _DAT_008a2be0 + *param_1;
  uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
          (ushort)(fVar2 == fVar1) << 0xe;
  if (fVar2 >= fVar1) {
    fVar2 = *param_1 - _DAT_008a2be0;
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      fVar1 = param_2[1];
      fVar2 = _DAT_008a2be0 + param_1[1];
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 >= fVar1) {
        fVar2 = param_1[1] - _DAT_008a2be0;
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 < fVar1 != (fVar2 == fVar1)) {
          fVar1 = param_2[2];
          if ((fVar1 <= _DAT_008a2be0 + param_1[2]) &&
             (fVar2 = param_1[2] - _DAT_008a2be0, fVar2 < fVar1 != (fVar2 == fVar1))) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return uVar3;
}

