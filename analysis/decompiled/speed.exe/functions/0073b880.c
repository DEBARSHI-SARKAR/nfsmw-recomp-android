/* speed.exe 0073b880 FUN_0073b880; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0073b880(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return *(int *)((*(int *)(param_1 + 0x14) + 1) * 0x10 + *(int *)(param_1 + 0x10));
    }
    iVar1 = 0;
  }
  return iVar1;
}

