/* speed.exe 007fa3b4 FUN_007fa3b4; analysis pseudocode, not buildable source.
 * calls 007f9f29 FUN_007f9f29
 */

undefined4 __thiscall FUN_007fa3b4(undefined4 param_1,byte param_2)

{
  FUN_007f9f29();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

