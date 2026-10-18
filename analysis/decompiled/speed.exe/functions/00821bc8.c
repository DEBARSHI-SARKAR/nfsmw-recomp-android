/* speed.exe 00821bc8 FUN_00821bc8; analysis pseudocode, not buildable source.
 */

void FUN_00821bc8(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  else {
    *(undefined4 *)param_1[1] = param_2;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_2;
  return;
}

