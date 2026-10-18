/* speed.exe 007faa42 FUN_007faa42; analysis pseudocode, not buildable source.
 * calls 007fa4f4 FUN_007fa4f4
 */

undefined4 __thiscall FUN_007faa42(undefined4 param_1,byte param_2)

{
  FUN_007fa4f4();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

