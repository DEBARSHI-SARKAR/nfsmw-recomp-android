/* speed.exe 00763000 FUN_00763000; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __thiscall FUN_00763000(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_3 = *(float *)(param_1 + 0x2c) - param_3;
  if (param_3 < _DAT_00890968) {
    return (ushort)(param_3 < _DAT_00890968) << 8 |
           (ushort)(NAN(param_3) || NAN(_DAT_00890968)) << 10 |
           (ushort)(param_3 == _DAT_00890968) << 0xe;
  }
  fVar3 = param_2[2] - *(float *)(param_1 + 0x28);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x24);
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  if (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 < param_3 * param_3) {
    return 1;
  }
  return 0;
}

