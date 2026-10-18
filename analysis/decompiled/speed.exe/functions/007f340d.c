/* speed.exe 007f340d FUN_007f340d; analysis pseudocode, not buildable source.
 * calls 007f33d9 FUN_007f33d9
 * calls 007f1932 FUN_007f1932
 */

undefined4 __thiscall FUN_007f340d(undefined4 param_1,byte param_2)

{
  FUN_007f33d9();
  if ((param_2 & 1) != 0) {
    FUN_007f1932(param_1,0x46c);
  }
  return param_1;
}

