/* speed.exe 00848560 FUN_00848560; analysis pseudocode, not buildable source.
 * calls 0083a630 FUN_0083a630
 */

void FUN_00848560(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x4e8) != '\0') {
    FUN_0083a630(param_1 + 0x1d4,0x100,param_2);
  }
  return;
}

