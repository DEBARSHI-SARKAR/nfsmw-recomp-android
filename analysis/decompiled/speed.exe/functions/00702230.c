/* speed.exe 00702230 FUN_00702230; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00702230(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 == 0);
}

