/* speed.exe 00676490 FUN_00676490; analysis pseudocode, not buildable source.
 */

void FUN_00676490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}

