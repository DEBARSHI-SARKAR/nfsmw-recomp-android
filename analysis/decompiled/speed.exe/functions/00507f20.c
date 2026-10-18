/* speed.exe 00507f20 FUN_00507f20; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00507e90 FUN_00507e90
 */

undefined4 __thiscall FUN_00507f20(undefined4 param_1,byte param_2)

{
  FUN_00507e90();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00916064,param_1);
  }
  return param_1;
}

