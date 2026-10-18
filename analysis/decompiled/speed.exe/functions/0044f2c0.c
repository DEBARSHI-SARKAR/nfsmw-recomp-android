/* speed.exe 0044f2c0 FUN_0044f2c0; analysis pseudocode, not buildable source.
 * calls 0044e1c0 FUN_0044e1c0
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0044f2c0(undefined4 param_1,byte param_2)

{
  FUN_0044e1c0();
  if ((param_2 & 1) != 0) {
    DAT_0090da00 = DAT_0090da00 + -1;
    FUN_00463ca0(DAT_0090db58,param_1);
  }
  return param_1;
}

