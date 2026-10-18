/* speed.exe 007fb998 FUN_007fb998; analysis pseudocode, not buildable source.
 * calls 007fb8f9 FUN_007fb8f9
 * calls 007fc5f5 FUN_007fc5f5
 */

undefined4 FUN_007fb998(int param_1)

{
  int iVar1;
  
  FUN_007fb8f9(param_1);
  iVar1 = FUN_007fc5f5(0xa0,0);
  *(int *)(param_1 + 0x278) = iVar1;
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x274) = iVar1 + 0x1fU & 0xffffffe0;
    iVar1 = FUN_007fc5f5(0xa0,0);
    *(int *)(param_1 + 0x28c) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x288) = iVar1 + 0x1fU & 0xffffffe0;
      iVar1 = FUN_007fc5f5(0x120,0);
      *(int *)(param_1 + 0x290) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x294) = iVar1 + 0x1fU & 0xffffffe0;
        iVar1 = FUN_007fc5f5(0xa0,0);
        *(int *)(param_1 + 0x284) = iVar1;
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x280) = iVar1 + 0x1fU & 0xffffffe0;
          return 1;
        }
      }
    }
  }
  FUN_007fb8f9(param_1);
  return 0;
}

