/* speed.exe 007fd4c3 FUN_007fd4c3; analysis pseudocode, not buildable source.
 * calls 007fd429 FUN_007fd429
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fd4c3(int *param_1)

{
  if (*param_1 != 0) {
    FUN_007fd429();
    FUN_007fc603(*param_1);
    *param_1 = 0;
  }
  return;
}

