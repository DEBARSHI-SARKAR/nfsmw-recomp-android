/* speed.exe 005c8500 FUN_005c8500; analysis pseudocode, not buildable source.
 * calls 004fa510 FUN_004fa510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c8500(int param_1)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  ushort uVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004fa510(&DAT_008a3348,param_1,&local_10);
  fVar1 = _DAT_008959e4 /
          (local_10 * local_10 + local_c * local_c + local_8 * local_8 + local_4 * local_4);
  uVar4 = (ushort)(fVar1 < _DAT_00899124) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00899124)) << 10 |
          (ushort)(fVar1 == _DAT_00899124) << 0xe;
  if (fVar1 >= _DAT_00899124) {
    if (fVar1 >= _DAT_008910c4 && (fVar1 == _DAT_008910c4) == 0) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar1 < _DAT_008910c4) << 8 |
                      (ushort)(NAN(fVar1) || NAN(_DAT_008910c4)) << 10 |
                      (ushort)(fVar1 == _DAT_008910c4) << 0xe);
    }
    fVar1 = ABS(*(float *)(param_1 + 0xc));
    fVar2 = (float)_DAT_008a3340;
    if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                      (ushort)(fVar1 == fVar2) << 0xe);
    }
    fVar1 = ABS(*(float *)(param_1 + 0x1c));
    fVar2 = (float)_DAT_008a3340;
    if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                      (ushort)(fVar1 == fVar2) << 0xe);
    }
    fVar1 = ABS(*(float *)(param_1 + 0x2c));
    fVar2 = (float)_DAT_008a3340;
    if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                      (ushort)(fVar1 == fVar2) << 0xe);
    }
    fVar1 = ABS(*(float *)(param_1 + 0x3c));
    uVar4 = (ushort)(fVar1 < _DAT_008910c4) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_008910c4)) << 10
            | (ushort)(fVar1 == _DAT_008910c4) << 0xe;
    if (fVar1 < _DAT_008910c4 || (fVar1 == _DAT_008910c4) != 0) {
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar1 < _DAT_00899124) << 8 |
                       (ushort)(NAN(fVar1) || NAN(_DAT_00899124)) << 10 |
                       (ushort)(fVar1 == _DAT_00899124) << 0xe);
      if (fVar1 < _DAT_00899124) {
        return uVar3;
      }
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return CONCAT22(extraout_var,uVar4);
}

