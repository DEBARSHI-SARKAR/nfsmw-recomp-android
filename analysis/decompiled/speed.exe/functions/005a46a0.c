/* speed.exe 005a46a0 FUN_005a46a0; analysis pseudocode, not buildable source.
 * calls 005720b0 FUN_005720b0
 * calls 005a45b0 FUN_005a45b0
 * calls 006cb5d0 FUN_006cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a46a0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(*(int *)(param_2 + 0x2c) + 0x24);
  if (*(ushort *)(param_2 + 0x20) != 0) {
    fVar1 = fVar1 + *(float *)((uint)*(ushort *)(param_2 + 0x20) * 0xb0 + 0x48 + param_1);
  }
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    return;
  }
  if (fVar1 != _DAT_0091d90c) {
    _DAT_0091d90c = fVar1;
    FUN_006cb5d0();
  }
  uVar2 = FUN_005720b0(DAT_0091cfac);
  FUN_005a45b0(param_2,uVar2);
  return;
}

