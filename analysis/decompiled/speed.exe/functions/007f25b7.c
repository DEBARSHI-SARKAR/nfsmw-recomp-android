/* speed.exe 007f25b7 FUN_007f25b7; analysis pseudocode, not buildable source.
 * calls 007f1932 FUN_007f1932
 * calls 007f2148 FUN_007f2148
 */

undefined4 __thiscall FUN_007f25b7(undefined4 param_1,byte param_2)

{
  FUN_007f2148();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x46c);
  }
  return param_1;
}

