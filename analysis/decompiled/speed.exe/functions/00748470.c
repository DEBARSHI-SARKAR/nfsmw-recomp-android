/* speed.exe 00748470 FUN_00748470; analysis pseudocode, not buildable source.
 * calls 00748310 FUN_00748310
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_00748470(undefined4 param_1,byte param_2)

{
  FUN_00748310();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b0a00,param_1);
  }
  return param_1;
}

