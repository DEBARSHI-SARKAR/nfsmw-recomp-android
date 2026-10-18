/* speed.exe 0065a9d0 FUN_0065a9d0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0065a9c0 FUN_0065a9c0
 */

undefined4 __thiscall FUN_0065a9d0(undefined4 param_1,byte param_2)

{
  FUN_0065a9c0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00925900,param_1);
  }
  return param_1;
}

