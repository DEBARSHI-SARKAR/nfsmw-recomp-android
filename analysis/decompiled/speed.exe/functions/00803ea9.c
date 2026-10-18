/* speed.exe 00803ea9 FUN_00803ea9; analysis pseudocode, not buildable source.
 * calls 00803e34 FUN_00803e34
 */

void FUN_00803ea9(int *param_1)

{
  int iVar1;
  
  if (*param_1 < 2) {
    iVar1 = (*DAT_009c6a84)(param_1,*(undefined4 *)(DAT_009c67e0 + param_1[3] * 4));
  }
  else {
    iVar1 = FUN_00803e34();
  }
  param_1[0xc] = iVar1;
  return;
}

