/* speed.exe 0044f700 FUN_0044f700; analysis pseudocode, not buildable source.
 * calls 0044e120 FUN_0044e120
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0044f700(undefined4 param_1,byte param_2)

{
  FUN_0044e120();
  if ((param_2 & 1) != 0) {
    DAT_0090d9f8 = DAT_0090d9f8 + -1;
    FUN_00463ca0(DAT_0090db54,param_1);
  }
  return param_1;
}

