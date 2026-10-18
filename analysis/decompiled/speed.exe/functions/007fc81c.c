/* speed.exe 007fc81c FUN_007fc81c; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fc779 FUN_007fc779
 */

undefined4 FUN_007fc81c(int param_1)

{
  int iVar1;
  
  FUN_007fc779(param_1);
  iVar1 = FUN_007fc5f5(((uint)((*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0xb4) * 2) *
                               *(int *)(param_1 + 0x98) * 3) >> 1) + 0x20,0);
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 == 0) {
    FUN_007fc779(param_1);
  }
  else {
    *(uint *)(param_1 + 0xbc) = iVar1 + 0x1fU & 0xffffffe0;
    iVar1 = FUN_007fc5f5(0x820,0);
    *(int *)(param_1 + 0xa0) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x34) = iVar1 + 0x1fU & 0xffffffe0;
      iVar1 = FUN_007fc5f5(0x820,0);
      *(int *)(param_1 + 0xa4) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x3c) = iVar1 + 0x1fU & 0xffffffe0;
        iVar1 = FUN_007fc5f5(*(int *)(param_1 + 0x8c) * 4 + 0x20,0);
        *(int *)(param_1 + 0xa8) = iVar1;
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x24) = iVar1 + 0x1fU & 0xffffffe0;
          iVar1 = FUN_007fc5f5(*(int *)(param_1 + 0x8c) * 4 + 0x20,0);
          *(int *)(param_1 + 0xac) = iVar1;
          if (iVar1 != 0) {
            *(uint *)(param_1 + 0x28) = iVar1 + 0x1fU & 0xffffffe0;
            iVar1 = FUN_007fc5f5(*(int *)(param_1 + 0x8c) + 0x20,0);
            *(int *)(param_1 + 0xb0) = iVar1;
            if (iVar1 != 0) {
              *(uint *)(param_1 + 0x2c) = iVar1 + 0x1fU & 0xffffffe0;
              return 1;
            }
          }
        }
      }
    }
    FUN_007fc779(param_1);
  }
  return 0;
}

