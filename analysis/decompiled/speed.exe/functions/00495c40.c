/* speed.exe 00495c40 FUN_00495c40; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00495c40(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar2 = (((1 << (bVar1 & 0x1f)) + 1) * (uint)*(ushort *)(param_1 + 0xe) * 3 + 1 & 0xfffffffe) *
          (uint)(*(ushort *)(param_1 + 0xc) >> (bVar1 & 0x1f)) + param_1 + 0x14 +
          (uint)*(ushort *)(param_1 + 0xe) * 0x24;
  uVar3 = 0x7fffffffU >> (0x1f - bVar1 & 0x1f) & (uint)*(ushort *)(param_1 + 0xc);
  if (uVar3 != 0) {
    uVar2 = (uVar3 + 1) * (uint)*(ushort *)(param_1 + 0xe) * 3 + 1 + uVar2 & 0xfffffffe;
  }
  if (*(short *)(param_1 + 0xe) == 0) {
    uVar2 = uVar2 + 1 & 0xfffffffe;
  }
  return uVar2;
}

