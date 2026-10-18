/* speed.exe 00657ad0 FUN_00657ad0; analysis pseudocode, not buildable source.
 */

void FUN_00657ad0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    param_3[6] = param_1[6];
    param_3[7] = param_1[7];
    *(undefined1 *)(param_3 + 8) = *(undefined1 *)(param_1 + 8);
    param_3 = param_3 + 9;
  }
  return;
}

