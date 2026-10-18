/* speed.exe 007fe1ff FUN_007fe1ff; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fe183 FUN_007fe183
 */

undefined4 FUN_007fe1ff(int param_1,int param_2)

{
  int iVar1;
  
  FUN_007fe183(param_1);
  iVar1 = FUN_007fc5f5(param_2 + 0x20 + *(int *)(param_1 + 0x1b8),0);
  *(int *)(param_1 + 0x248) = iVar1;
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x244) = iVar1 + 0x1fU & 0xffffffe0;
    iVar1 = FUN_007fc5f5(param_2 + 0x20 + *(int *)(param_1 + 0x1b8),0);
    *(int *)(param_1 + 0x250) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x24c) = iVar1 + 0x1fU & 0xffffffe0;
      iVar1 = FUN_007fc5f5(param_2 + 0x20 + *(int *)(param_1 + 0x1b8),0);
      *(int *)(param_1 + 600) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x254) = iVar1 + 0x1fU & 0xffffffe0;
        return 1;
      }
    }
  }
  FUN_007fe183(param_1);
  return 0;
}

