/* speed.exe 0065ae90 FUN_0065ae90; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0065ae90(undefined4 param_1,byte param_2)

{
  FUN_0065ad80();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00925914,param_1);
  }
  return param_1;
}

