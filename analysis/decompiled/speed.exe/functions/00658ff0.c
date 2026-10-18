/* speed.exe 00658ff0 FUN_00658ff0; analysis pseudocode, not buildable source.
 * calls 00658ee0 FUN_00658ee0
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_00658ff0(undefined4 param_1,byte param_2)

{
  FUN_00658ee0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00925878,param_1);
  }
  return param_1;
}

