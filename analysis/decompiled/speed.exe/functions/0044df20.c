/* speed.exe 0044df20 FUN_0044df20; analysis pseudocode, not buildable source.
 * calls 0044d450 FUN_0044d450
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0044df20(undefined4 param_1,byte param_2)

{
  FUN_0044d450();
  if ((param_2 & 1) != 0) {
    DAT_0090da8c = DAT_0090da8c + -1;
    FUN_00463ca0(DAT_0090db5c,param_1);
  }
  return param_1;
}

