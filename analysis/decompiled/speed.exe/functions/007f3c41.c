/* speed.exe 007f3c41 FUN_007f3c41; analysis pseudocode, not buildable source.
 * calls 007f5d1e FUN_007f5d1e
 */

void FUN_007f3c41(undefined4 param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) || ((param_2[3] != 1 && (*param_2 != 1)))) {
    param_2 = (int *)0x0;
  }
  FUN_007f5d1e(param_1,param_2);
  return;
}

