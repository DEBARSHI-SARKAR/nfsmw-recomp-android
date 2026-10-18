/* speed.exe 005175b0 FUN_005175b0; analysis pseudocode, not buildable source.
 * calls 007f7f1e FUN_007f7f1e
 */

undefined4 __thiscall FUN_005175b0(undefined4 param_1,byte param_2)

{
  FUN_007f7f1e();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

