/* speed.exe 00477ee0 FUN_00477ee0; analysis pseudocode, not buildable source.
 * calls 0046d0a0 FUN_0046d0a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00477ee0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)(param_1 + 0x14 + param_2 * 4) - *(float *)(param_3 + 0x14 + param_4 * 4);
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  uVar2 = (ushort)(fVar1 < _DAT_00890d60) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890d60)) << 10 |
          (ushort)(fVar1 == _DAT_00890d60) << 0xe;
  if (fVar1 < _DAT_00890d60 || (fVar1 == _DAT_00890d60) != 0) {
    fVar1 = *(float *)(param_1 + 0x4c + param_2 * 4) - *(float *)(param_3 + 0x4c + param_4 * 4);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    uVar2 = (ushort)(fVar1 < _DAT_00890d60) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00890d60)) << 10
            | (ushort)(fVar1 == _DAT_00890d60) << 0xe;
    if (fVar1 < _DAT_00890d60 || (fVar1 == _DAT_00890d60) != 0) {
      fVar1 = *(float *)(param_1 + 0x54 + param_2 * 4) - *(float *)(param_3 + 0x54 + param_4 * 4);
      if (fVar1 < _DAT_00890968) {
        fVar1 = -fVar1;
      }
      uVar2 = (ushort)(fVar1 < _DAT_00890d60) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_00890d60)) << 10 |
              (ushort)(fVar1 == _DAT_00890d60) << 0xe;
      if (fVar1 < _DAT_00890d60 || (fVar1 == _DAT_00890d60) != 0) {
        uVar2 = FUN_0046d0a0(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return uVar2;
}

