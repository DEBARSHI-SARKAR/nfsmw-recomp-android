/* speed.exe 0041d620 FUN_0041d620; analysis pseudocode, not buildable source.
 */

void FUN_0041d620(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
      param_1[6] = param_3[6];
      param_1 = param_1 + 7;
    } while (param_1 != param_2);
  }
  return;
}

