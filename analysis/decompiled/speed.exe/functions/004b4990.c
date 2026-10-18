/* speed.exe 004b4990 FUN_004b4990; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004b4990(int param_1)

{
  float fVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x84);
  if ((uVar2 == 0) &&
     ((*(int *)(param_1 + 0x2c) == 0 ||
      ((uVar2 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x38), uVar2 != 3 && (uVar2 == 0)))))) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x18) + 100);
    uVar3 = (ushort)(fVar1 < _DAT_00896cb8) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_00896cb8)) << 10
            | (ushort)(fVar1 == _DAT_00896cb8) << 0xe;
    uVar2 = (uint)uVar3;
    if (fVar1 >= _DAT_00896cb8) {
      return (uint)CONCAT11((char)(uVar3 >> 8),2 < *(int *)(*(int *)(param_1 + 0x18) + 0x6c));
    }
  }
  return uVar2 & 0xffffff00;
}

