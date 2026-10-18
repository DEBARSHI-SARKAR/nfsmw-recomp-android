/* speed.exe 00660270 FUN_00660270; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 * calls 0065fe90 FUN_0065fe90
 */

undefined4 FUN_00660270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_009258d4 != 0) {
    param_1 = FUN_00660100(param_2,param_3);
  }
  if (DAT_009258d8 != 0) {
    FUN_0065fe90(param_1,param_2,param_3);
  }
  return param_1;
}

