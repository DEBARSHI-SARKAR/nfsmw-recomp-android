/* speed.exe 00506030 FUN_00506030; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00502d10 FUN_00502d10
 */

undefined4 __thiscall FUN_00506030(undefined4 param_1,byte param_2)

{
  FUN_00502d10();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00916044,param_1);
  }
  return param_1;
}

