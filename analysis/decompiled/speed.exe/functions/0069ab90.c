/* speed.exe 0069ab90 FUN_0069ab90; analysis pseudocode, not buildable source.
 * calls 00699d60 FUN_00699d60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0069ab90(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x138) + 0xbc))();
  if ((char)uVar2 == '\0') {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x50) + 0x48))();
    if ((char)uVar2 == '\0') {
      if (*(int **)(param_1 + 0x13c) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x4c))();
        if (iVar3 != 0) {
          fVar1 = *(float *)(param_1 + 0x154);
          uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),
                           (ushort)(fVar1 < _DAT_008aac9c) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_008aac9c)) << 10 |
                           (ushort)(fVar1 == _DAT_008aac9c) << 0xe);
          if (fVar1 < _DAT_008aac9c) goto LAB_0069abda;
        }
      }
      uVar2 = FUN_00699d60();
      return uVar2;
    }
  }
LAB_0069abda:
  return uVar2 & 0xffffff00;
}

