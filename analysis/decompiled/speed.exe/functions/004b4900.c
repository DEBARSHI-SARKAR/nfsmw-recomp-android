/* speed.exe 004b4900 FUN_004b4900; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004b4900(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  fVar1 = *(float *)(iVar2 + 0x70) - *(float *)(iVar3 + 0x4c);
  uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   (ushort)(fVar1 < _DAT_00896484) << 8 |
                   (ushort)(NAN(fVar1) || NAN(_DAT_00896484)) << 10 |
                   (ushort)(fVar1 == _DAT_00896484) << 0xe);
  if (((fVar1 >= _DAT_00896484) && (uVar4 = *(uint *)(param_1 + 0x84), uVar4 == 0)) &&
     ((*(int *)(param_1 + 0x2c) == 0 ||
      ((uVar4 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x38), uVar4 != 3 && (uVar4 == 0)))))) {
    fVar1 = *(float *)(iVar2 + 100);
    uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_00894b60) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_00894b60)) << 10 |
                          (ushort)(fVar1 == _DAT_00894b60) << 0xe);
    if (fVar1 >= _DAT_00894b60) {
      fVar1 = DAT_009142dc - *(float *)(param_1 + 0x88);
      uVar4 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890d3c) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_00890d3c)) << 10 |
                            (ushort)(fVar1 == _DAT_00890d3c) << 0xe);
      if (fVar1 >= _DAT_00890d3c) {
        uVar4 = 0;
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228) == 1) {
          return 1;
        }
        if (2 < *(int *)(iVar2 + 0x6c)) {
          return 1;
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}

