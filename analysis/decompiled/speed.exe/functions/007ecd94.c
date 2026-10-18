/* speed.exe 007ecd94 FUN_007ecd94; analysis pseudocode, not buildable source.
 * calls 007ec59c FUN_007ec59c
 * calls 007ec298 FUN_007ec298
 */

void FUN_007ecd94(int param_1)

{
  param_1 = DAT_009bb130 + param_1;
  while (DAT_009bb130 - param_1 < 0) {
    FUN_007ec59c();
    FUN_007ec298(0);
  }
  return;
}

