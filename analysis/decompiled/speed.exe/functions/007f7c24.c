/* speed.exe 007f7c24 FUN_007f7c24; analysis pseudocode, not buildable source.
 * calls 007f82bc FUN_007f82bc
 * calls 007f83c1 FUN_007f83c1
 */

undefined4 __thiscall FUN_007f7c24(int *param_1,uint param_2)

{
  if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  if (*param_1 != 0) {
    FUN_007f83c1(param_2);
  }
  FUN_007f82bc(param_2);
  return 0;
}

