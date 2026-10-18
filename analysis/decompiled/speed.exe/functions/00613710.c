/* speed.exe 00613710 FUN_00613710; analysis pseudocode, not buildable source.
 * calls 00612e80 FUN_00612e80
 */

void __fastcall FUN_00613710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x74) = iVar1;
  if ((*(char *)(param_1 + 0x71) != '\0') && (iVar1 < 1)) {
    FUN_00612e80();
    return;
  }
  return;
}

