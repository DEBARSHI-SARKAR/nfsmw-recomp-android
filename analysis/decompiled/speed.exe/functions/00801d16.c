/* speed.exe 00801d16 FUN_00801d16; analysis pseudocode, not buildable source.
 * calls 00801ca1 FUN_00801ca1
 */

void FUN_00801d16(int *param_1)

{
  int iVar1;
  
  if (*param_1 < 2) {
    iVar1 = (*DAT_009c6a80)(param_1,*(undefined4 *)(DAT_009c67ec + param_1[3] * 4));
  }
  else {
    iVar1 = FUN_00801ca1();
  }
  param_1[0xe] = iVar1;
  return;
}

