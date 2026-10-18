/* speed.exe 0085ab60 FUN_0085ab60; analysis pseudocode, not buildable source.
 * calls 0085aeb0 FUN_0085aeb0
 */

void FUN_0085ab60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*param_1 != 0) {
    FUN_0085aeb0(param_1 + 2,param_2,param_3);
    param_1[1] = 1;
  }
  return;
}

