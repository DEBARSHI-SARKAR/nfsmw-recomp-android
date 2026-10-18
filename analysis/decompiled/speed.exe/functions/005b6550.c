/* speed.exe 005b6550 FUN_005b6550; analysis pseudocode, not buildable source.
 * calls 005afa10 FUN_005afa10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b6550(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2 * *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xa4);
  bVar3 = _DAT_00890968 <= fVar1;
  *(float *)(param_1 + 0xa4) = fVar1;
  if (bVar3) {
    if (fVar1 <= _DAT_0089096c) goto LAB_005b65a9;
    *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0xa8);
LAB_005b65a9:
  if ((*(byte *)(param_1 + 0x5c) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x9c);
    fVar2 = *(float *)(param_1 + 0xa0);
    param_2 = ABS(fVar1 * *(float *)(param_1 + 0x80) + fVar2 * *(float *)(param_1 + 0x84)) * param_2
    ;
    fVar5 = fVar1 * param_2 + *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x70) = fVar5;
    fVar4 = fVar2 * param_2 + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x74) = fVar4;
    if ((fVar1 * *(float *)(param_1 + 0x94) + fVar2 * *(float *)(param_1 + 0x98)) -
        (fVar5 * fVar1 + fVar4 * fVar2) < _DAT_00890968) {
      FUN_005afa10();
    }
  }
  return;
}

