/* speed.exe 0072d4b0 FUN_0072d4b0; analysis pseudocode, not buildable source.
 * calls 0072d470 FUN_0072d470
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0072d4b0(undefined4 param_1,byte param_2)

{
  FUN_0072d470();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009a39f4,param_1);
  }
  return param_1;
}

