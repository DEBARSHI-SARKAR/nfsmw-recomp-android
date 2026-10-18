/* speed.exe 007593e0 FUN_007593e0; analysis pseudocode, not buildable source.
 * calls 007567f0 FUN_007567f0
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 __thiscall FUN_007593e0(undefined4 param_1,byte param_2)

{
  FUN_007567f0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_009b09b8,param_1);
  }
  return param_1;
}

