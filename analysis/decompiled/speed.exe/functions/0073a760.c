/* speed.exe 0073a760 FUN_0073a760; analysis pseudocode, not buildable source.
 * calls 0073a2a0 FUN_0073a2a0
 */

undefined4 FUN_0073a760(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x348) != 0) && (*(int *)(*(int *)(param_1 + 0x348) + 0x18) == 2)) &&
      (*(int *)(param_1 + 0x34c) != 0)) &&
     ((*(int *)(*(int *)(param_1 + 0x34c) + 8) == 2 && (*(int *)(param_1 + 0x350) != 0)))) {
    iVar1 = FUN_0073a2a0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

