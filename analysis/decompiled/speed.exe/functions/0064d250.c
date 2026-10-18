/* speed.exe 0064d250 FUN_0064d250; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00461980 FUN_00461980
 */

undefined4 * __thiscall FUN_0064d250(undefined4 *param_1,byte param_2)

{
  FUN_00461980(*param_1);
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_0092591c,param_1);
  }
  return param_1;
}

