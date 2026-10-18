/* speed.exe 005d1530 FUN_005d1530; analysis pseudocode, not buildable source.
 */

void FUN_005d1530(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}

