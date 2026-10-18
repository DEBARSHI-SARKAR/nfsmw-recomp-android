/* speed.exe 0041d460 FUN_0041d460; analysis pseudocode, not buildable source.
 */

void FUN_0041d460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

