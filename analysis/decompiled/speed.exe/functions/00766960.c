/* speed.exe 00766960 FUN_00766960; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00766960(int param_1,float *param_2)

{
  float fVar1;
  uint3 uVar2;
  
  fVar1 = *(float *)(param_1 + 0x20) * *param_2 +
          *(float *)(param_1 + 0x24) * param_2[1] + *(float *)(param_1 + 0x28) * param_2[2];
  uVar2 = (uint3)(CONCAT22((short)((uint)param_2 >> 0x10),
                           (ushort)(fVar1 < _DAT_00890968) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                           (ushort)(fVar1 == _DAT_00890968) << 0xe) >> 8);
  if (fVar1 < _DAT_00890968) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

