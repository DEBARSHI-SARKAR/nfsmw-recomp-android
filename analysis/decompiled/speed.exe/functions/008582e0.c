/* speed.exe 008582e0 FUN_008582e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008582e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    return 2;
  }
  if ((iVar1 != 1) && (iVar1 != 7)) {
    if ((iVar1 != 4) && (iVar1 != 5)) {
      return 4;
    }
    return 3;
  }
  return 1;
}

