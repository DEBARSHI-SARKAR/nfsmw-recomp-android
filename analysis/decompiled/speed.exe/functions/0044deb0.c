/* speed.exe 0044deb0 FUN_0044deb0; analysis pseudocode, not buildable source.
 * calls 0044de20 FUN_0044de20
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_0044deb0(undefined4 param_1,byte param_2)

{
  FUN_0044de20();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_0090d9dc,param_1);
  }
  return param_1;
}

