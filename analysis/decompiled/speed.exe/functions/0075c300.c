/* speed.exe 0075c300 FUN_0075c300; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0075a8e0 FUN_0075a8e0
 */

undefined4 __thiscall FUN_0075c300(undefined4 param_1,byte param_2)

{
  FUN_0075a8e0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b0a7c,param_1);
  }
  return param_1;
}

