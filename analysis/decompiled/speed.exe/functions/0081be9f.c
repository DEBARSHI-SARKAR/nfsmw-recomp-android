/* speed.exe 0081be9f FUN_0081be9f; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081be9f(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x148;
  iVar1 = 6;
  do {
    if (*(float *)(param_1 + 0x14) != _DAT_00890968) {
      FUN_00819648(param_1);
    }
    param_1 = param_1 + 0x24;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

