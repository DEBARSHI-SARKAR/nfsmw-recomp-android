/* speed.exe 0065abc0 FUN_0065abc0; analysis pseudocode, not buildable source.
 * calls 0065ab20 FUN_0065ab20
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0065abc0(undefined4 param_1,byte param_2)

{
  FUN_0065ab20();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00925914,param_1);
  }
  return param_1;
}

