/* speed.exe 005e7b20 FUN_005e7b20; analysis pseudocode, not buildable source.
 */

void FUN_005e7b20(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}

