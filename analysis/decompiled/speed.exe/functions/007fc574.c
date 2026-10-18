/* speed.exe 007fc574 FUN_007fc574; analysis pseudocode, not buildable source.
 * calls 007fba42 FUN_007fba42
 * calls 007fdf1a FUN_007fdf1a
 * calls 007fca30 FUN_007fca30
 * calls 007fe183 FUN_007fe183
 * calls 007fd4c3 FUN_007fd4c3
 */

undefined4 FUN_007fc574(int *param_1)

{
  if (*param_1 != 0) {
    FUN_007fd4c3(*param_1 + 0x13c);
    FUN_007fca30(*param_1 + 0x29c);
    FUN_007fdf1a(*param_1);
    FUN_007fe183(*param_1);
    FUN_007fba42(param_1);
  }
  return 1;
}

