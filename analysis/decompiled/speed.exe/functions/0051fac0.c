/* speed.exe 0051fac0 FUN_0051fac0; analysis pseudocode, not buildable source.
 * calls 00515140 FUN_00515140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0051fac0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  float local_8;
  float local_4;
  
  FUN_00515140(*(undefined4 *)(param_1 + 0x140),&local_8,&local_4);
  fVar2 = *(float *)(param_1 + 0x144) + _DAT_00899e70;
  fVar1 = *param_2;
  uVar3 = CONCAT22(extraout_var,
                   (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 < fVar1 != 0 || (fVar2 == fVar1) != 0) {
    fVar2 = local_8 - _DAT_00899e70;
    fVar1 = *param_2;
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 >= fVar1) {
      fVar2 = *(float *)(param_1 + 0x148) + _DAT_00899e68;
      fVar1 = *param_3;
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                       (ushort)(fVar2 == fVar1) << 0xe);
      param_2 = param_3;
      if (fVar2 < fVar1 != 0 || (fVar2 == fVar1) != 0) {
        fVar2 = local_4 - _DAT_0089c408;
        fVar1 = *param_3;
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 >= fVar1) {
          return uVar3;
        }
      }
    }
  }
  *param_2 = fVar2;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

