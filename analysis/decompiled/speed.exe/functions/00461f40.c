/* speed.exe 00461f40 FUN_00461f40; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00461f40(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 0x160) < *(int *)(param_1 + 0x154)) {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x160) * 0xc);
    if (pbVar2 != (byte *)0x0) {
      if (pbVar2[1] == 0) {
        iVar1 = *(int *)(param_1 + 0x160) + (uint)*(ushort *)(pbVar2 + 2);
        *(int *)(param_1 + 0x160) = iVar1;
        if (*(int *)(param_1 + 0x154) <= iVar1) {
          return 0;
        }
        pbVar2 = (byte *)(*(int *)(param_1 + 0x15c) + iVar1 * 0xc);
        if (pbVar2 == (byte *)0x0) {
          return 0;
        }
      }
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
      return *(int *)((*pbVar2 + 1) * 0x54 + param_1) + *(int *)(pbVar2 + 4);
    }
  }
  return 0;
}

