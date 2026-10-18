/* speed.exe 007fa354 FUN_007fa354; analysis pseudocode, not buildable source.
 * calls 007f9e28 FUN_007f9e28
 */

undefined4 __thiscall FUN_007fa354(undefined4 param_1,byte param_2)

{
  FUN_007f9e28();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

