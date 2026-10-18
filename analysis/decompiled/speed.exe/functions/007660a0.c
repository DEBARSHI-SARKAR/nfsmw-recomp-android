/* speed.exe 007660a0 FUN_007660a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_007660a0(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  fVar1 = *(float *)(param_1 + 0x2d0);
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    return (uint)(ushort)((ushort)(fVar1 < _DAT_00890968) << 8 |
                          (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                         (ushort)(fVar1 == _DAT_00890968) << 0xe);
  }
  param_2 = param_2 + *(float *)(param_1 + 0x2d4);
  *(float *)(param_1 + 0x2d4) = param_2;
  param_2 = param_2 / *(float *)(param_1 + 0x2d0);
  bVar2 = NAN(_DAT_0089096c);
  bVar3 = param_2 < _DAT_0089096c;
  bVar4 = param_2 == _DAT_0089096c;
  if (bVar3) {
    *(float *)(param_1 + 0x2c4) =
         (*(float *)(param_1 + 0x2cc) - *(float *)(param_1 + 0x2c8)) * param_2 +
         *(float *)(param_1 + 0x2c8);
    return CONCAT31((uint3)(byte)(bVar3 | (byte)((ushort)((ushort)(NAN(param_2) || bVar2) << 10) >>
                                                8) | (byte)((ushort)((ushort)bVar4 << 0xe) >> 8)),1)
    ;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2cc);
  return 1;
}

