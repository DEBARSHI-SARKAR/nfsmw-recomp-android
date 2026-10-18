/* speed.exe 007f31e1 FUN_007f31e1; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f310e FUN_007f310e
 */

undefined4 __thiscall FUN_007f31e1(undefined4 param_1,byte param_2)

{
  FUN_007f310e();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x14);
  }
  return param_1;
}

