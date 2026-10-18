/* speed.exe 007f1c21 FUN_007f1c21; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f19fe FUN_007f19fe
 */

undefined4 __thiscall FUN_007f1c21(undefined4 param_1,byte param_2)

{
  FUN_007f19fe();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0xbc);
  }
  return param_1;
}

