/* speed.exe 00748440 FUN_00748440; analysis pseudocode, not buildable source.
 * calls 00748350 FUN_00748350
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_00748440(undefined4 param_1,byte param_2)

{
  FUN_00748350();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b0a04,param_1);
  }
  return param_1;
}

