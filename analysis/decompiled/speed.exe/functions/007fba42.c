/* speed.exe 007fba42 FUN_007fba42; analysis pseudocode, not buildable source.
 * calls 007fb8f9 FUN_007fb8f9
 * calls 007fca30 FUN_007fca30
 * calls 007fc603 FUN_007fc603
 * calls 007fd4c3 FUN_007fd4c3
 */

void FUN_007fba42(int *param_1)

{
  if (*param_1 != 0) {
    FUN_007fb8f9(*param_1);
    FUN_007fd4c3(*param_1 + 0x13c);
    FUN_007fca30(*param_1 + 0x29c);
  }
  FUN_007fc603(*param_1);
  *param_1 = 0;
  return;
}

