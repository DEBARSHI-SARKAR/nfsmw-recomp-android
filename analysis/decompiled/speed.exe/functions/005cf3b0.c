/* speed.exe 005cf3b0 FUN_005cf3b0; analysis pseudocode, not buildable source.
 * calls 007c5250 _qsort
 */

void __fastcall FUN_005cf3b0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 8) == 0) {
    if (1 < *(uint *)(param_1 + 8)) {
      iVar2 = *(int *)(param_1 + 0xc);
      if ((uVar1 & 2) != 0) {
        iVar2 = iVar2 * 0x10 + param_1;
      }
      _qsort((void *)((uVar1 >> 5) * 0x10 + iVar2),*(uint *)(param_1 + 8),0x10,
             (_PtFuncCompare *)&LAB_005c7860);
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return;
}

