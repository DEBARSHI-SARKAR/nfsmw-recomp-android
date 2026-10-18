/* speed.exe 00450630 FUN_00450630; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0044f2f0 FUN_0044f2f0
 */

undefined4 __thiscall FUN_00450630(undefined4 param_1,byte param_2)

{
  FUN_0044f2f0();
  if ((param_2 & 1) != 0) {
    DAT_0090d9f0 = DAT_0090d9f0 + -1;
    FUN_00463ca0(DAT_0090db50,param_1);
  }
  return param_1;
}

