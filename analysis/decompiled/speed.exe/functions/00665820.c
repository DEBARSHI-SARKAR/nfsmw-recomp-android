/* speed.exe 00665820 FUN_00665820; analysis pseudocode, not buildable source.
 * calls 00665720 FUN_00665720
 * calls 007c7250 FUN_007c7250
 */

undefined4 __thiscall FUN_00665820(undefined4 param_1,byte param_2)

{
  FUN_00665720();
  if ((param_2 & 1) != 0) {
    FUN_007c7250(param_1);
  }
  return param_1;
}

