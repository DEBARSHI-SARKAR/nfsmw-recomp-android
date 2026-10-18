/* speed.exe 006dc3c0 FUN_006dc3c0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 006d7c10 FUN_006d7c10
 */

undefined4 __thiscall FUN_006dc3c0(undefined4 param_1,byte param_2)

{
  FUN_006d7c10();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(*(undefined4 *)(DAT_00982d10 + 8),param_1);
  }
  return param_1;
}

