/* speed.exe 007f3bd0 FUN_007f3bd0; analysis pseudocode, not buildable source.
 * calls 007f5d42 FUN_007f5d42
 */

void FUN_007f3bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  if (param_5 != 0) {
    FUN_007f5d42();
    return;
  }
  FUN_007f5d42(param_1,param_2,param_3,param_4,0);
  return;
}

