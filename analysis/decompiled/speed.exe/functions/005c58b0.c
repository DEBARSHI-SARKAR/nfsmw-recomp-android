/* speed.exe 005c58b0 FUN_005c58b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005c58b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  fVar2 = (param_2 - param_6) * param_7 - (param_1 - param_5) * param_8;
  fVar1 = (param_2 - param_6) * param_3 - (param_1 - param_5) * param_4;
  fVar3 = param_3 * param_8 - param_4 * param_7;
  if (fVar3 <= _DAT_00890968) {
    if (fVar3 < _DAT_00890968) {
      if (fVar2 < _DAT_00890968 == (fVar2 == _DAT_00890968)) {
        return 0;
      }
      if (fVar2 < fVar3) {
        return 0;
      }
      if (fVar1 < _DAT_00890968 == (fVar1 == _DAT_00890968)) {
        return 0;
      }
      if (fVar1 < fVar3) {
        return 0;
      }
      return 1;
    }
    if (param_4 == _DAT_00890968) {
      if ((param_1 <= param_5) && (param_5 <= param_1 + param_3)) {
        return 1;
      }
      param_5 = param_5 + param_7;
      if (param_5 < param_1) {
        return 0;
      }
      param_2 = param_1 + param_3;
    }
    else {
      if ((param_2 <= param_6) && (param_6 <= param_2 + param_4)) {
        return 1;
      }
      param_5 = param_6 + param_8;
      if (param_5 < param_2) {
        return 0;
      }
      param_2 = param_2 + param_4;
    }
    bVar4 = param_5 < param_2 | (byte)((ushort)((ushort)(param_5 == param_2) << 0xe) >> 8);
  }
  else {
    if (fVar2 < _DAT_00890968) {
      return 0;
    }
    if (fVar2 < fVar3 == (fVar2 == fVar3)) {
      return 0;
    }
    if (fVar1 < _DAT_00890968) {
      return 0;
    }
    bVar4 = fVar1 < fVar3 | (byte)((ushort)((ushort)(fVar1 == fVar3) << 0xe) >> 8);
  }
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    return 0;
  }
  return 1;
}

