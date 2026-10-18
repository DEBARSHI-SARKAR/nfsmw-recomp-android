/* speed.exe 0049a400 FUN_0049a400; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0049a400(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 8) != 0) {
    return (int)(*(ushort *)(param_1 + 4) - 1) / 1 + 1;
  }
  if ((bVar1 & 0x10) != 0) {
    return (int)(*(ushort *)(param_1 + 4) - 1) / 2 + 1;
  }
  if ((bVar1 & 0x20) != 0) {
    return (int)(*(ushort *)(param_1 + 4) - 1) / 4 + 1;
  }
  return (int)(*(ushort *)(param_1 + 4) - 1) / (int)((-(uint)((bVar1 & 0x40) != 0) & 7) + 1) + 1;
}

