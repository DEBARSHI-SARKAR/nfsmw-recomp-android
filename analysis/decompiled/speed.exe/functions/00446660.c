/* speed.exe 00446660 FUN_00446660; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00753650 FUN_00753650
 */

undefined4 __thiscall FUN_00446660(undefined4 param_1,byte param_2)

{
  FUN_00753650();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b0a2c,param_1);
  }
  return param_1;
}

