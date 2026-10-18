/* speed.exe 0072e790 FUN_0072e790; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0072d5a0 FUN_0072d5a0
 */

undefined4 __thiscall FUN_0072e790(undefined4 param_1,byte param_2)

{
  FUN_0072d5a0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009a3a00,param_1);
  }
  return param_1;
}

