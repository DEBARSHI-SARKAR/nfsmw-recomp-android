/* speed.exe 00591a80 FUN_00591a80; analysis pseudocode, not buildable source.
 * calls 00591450 FUN_00591450
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_00591a80(undefined4 param_1,byte param_2)

{
  FUN_00591450();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_0091cf9c,param_1);
  }
  return param_1;
}

