/* speed.exe 0077b6c0 FUN_0077b6c0; analysis pseudocode, not buildable source.
 * calls 00773af0 FUN_00773af0
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0077b6c0(undefined4 param_1,byte param_2)

{
  FUN_00773af0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b38f0,param_1);
  }
  return param_1;
}

