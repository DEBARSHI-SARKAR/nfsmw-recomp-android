/* speed.exe 00821bed FUN_00821bed; analysis pseudocode, not buildable source.
 */

void FUN_00821bed(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = *(int *)*param_1;
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[1] = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}

