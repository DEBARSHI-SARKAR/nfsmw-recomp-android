/* speed.exe 00461fb0 FUN_00461fb0; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

int __thiscall FUN_00461fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x154);
  do {
    if (iVar1 <= *(int *)(param_1 + 0x160)) {
      return 0;
    }
    pbVar2 = (byte *)(*(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x160) * 0xc);
    if (pbVar2 == (byte *)0x0) {
      return 0;
    }
    if (pbVar2[1] == 0) {
      iVar4 = *(int *)(param_1 + 0x160) + (uint)*(ushort *)(pbVar2 + 2);
      *(int *)(param_1 + 0x160) = iVar4;
      if (iVar1 <= iVar4) {
        return 0;
      }
      pbVar2 = (byte *)(*(int *)(param_1 + 0x15c) + iVar4 * 0xc);
      if (pbVar2 == (byte *)0x0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    iVar4 = *(int *)((*pbVar2 + 1) * 0x54 + param_1) + *(int *)(pbVar2 + 4);
    if (iVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_00460dd0(iVar4,param_2);
  } while (iVar3 != 0);
  return iVar4;
}

