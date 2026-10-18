/* speed.exe 0060e370 FUN_0060e370; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_0060e370(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = FUN_00605950();
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  FUN_0060bf90(param_1,iVar1,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8) + -8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return;
}

