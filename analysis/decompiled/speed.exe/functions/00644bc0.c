/* speed.exe 00644bc0 FUN_00644bc0; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 * calls 00644350 FUN_00644350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00644bc0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 in_EAX;
  undefined2 uVar5;
  uint uVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x18);
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  fVar4 = (float)CONCAT22(uVar5,(ushort)(fVar1 < param_3) << 8 |
                                (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
                                (ushort)(fVar1 == param_3) << 0xe);
  if (fVar1 < param_3) {
    fVar1 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)CONCAT22(uVar5,(ushort)(fVar1 < _DAT_00890968) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                                  (ushort)(fVar1 == _DAT_00890968) << 0xe);
    if (fVar1 < _DAT_00890968 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      if (_DAT_00890968 <= *(float *)(param_1 + 0x18)) {
        *(float *)(param_1 + 0x14) =
             (param_3 - *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x10) +
             *(float *)(param_1 + 0x14);
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      FUN_00644350(uVar2,*(undefined4 *)(param_1 + 0x14));
      if ((_DAT_00890968 <= *(float *)(*(int *)(param_1 + 0xc) + 0xc)) &&
         (*(float *)(*(int *)(param_1 + 0xc) + 0xc) <= *(float *)(param_1 + 0x14))) {
        uVar3 = FUN_00645bc0(DAT_00920414,param_2,param_3,0,0);
        return uVar3;
      }
      *(float *)(param_1 + 0x18) = param_3;
      fVar4 = param_3;
    }
  }
  return (uint)fVar4 & 0xffffff00;
}

