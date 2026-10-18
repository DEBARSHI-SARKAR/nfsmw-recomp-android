/* speed.exe 00458a60 FUN_00458a60; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00458a60(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb) >> 4 & 1;
  if ((bVar1 == 0) && (*(int *)(param_1 + 4) == param_1)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (bVar1 != 0) {
      iVar2 = iVar2 + param_2;
    }
    return (uint)*(ushort *)(iVar2 + 4);
  }
  return *(uint *)(*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                           (-(uint)((uint)*(ushort *)(param_1 + 8) <
                                   *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                           (uint)*(ushort *)(param_1 + 8)) * 4) + 8);
}

