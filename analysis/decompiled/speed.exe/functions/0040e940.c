/* speed.exe 0040e940 FUN_0040e940; analysis pseudocode, not buildable source.
 */

void FUN_0040e940(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

