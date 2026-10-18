/* speed.exe 00496fb0 FUN_00496fb0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00496fb0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << (*(byte *)(param_1 + 0x10) & 0x1f);
  uVar2 = (uint)*(ushort *)(param_1 + 4) % uVar3;
  iVar1 = (uint)*(byte *)(param_1 + 6) * 0x10 + 0x12 +
          ((uVar3 + 1) * (uint)*(byte *)(param_1 + 6) * 3 + 1 & 0xfffffffe) *
          (*(ushort *)(param_1 + 4) / uVar3) + param_1;
  if (0 < (int)uVar2) {
    iVar1 = iVar1 + (uVar2 + 1) * (uint)*(byte *)(param_1 + 6) * 3;
  }
  return iVar1;
}

