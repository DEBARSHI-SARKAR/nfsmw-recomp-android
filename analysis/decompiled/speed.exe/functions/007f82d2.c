/* speed.exe 007f82d2 FUN_007f82d2; analysis pseudocode, not buildable source.
 * calls 007f839f FUN_007f839f
 */

undefined4 __thiscall FUN_007f82d2(undefined4 param_1,byte param_2)

{
  FUN_007f839f();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

