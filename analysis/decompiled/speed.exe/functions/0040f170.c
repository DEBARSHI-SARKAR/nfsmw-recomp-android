/* speed.exe 0040f170 FUN_0040f170; analysis pseudocode, not buildable source.
 */

void FUN_0040f170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-7] = param_2[-7];
    param_3[-6] = param_2[-6];
    param_3[-5] = param_2[-5];
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -7;
    param_3 = param_3 + -7;
  }
  return;
}

