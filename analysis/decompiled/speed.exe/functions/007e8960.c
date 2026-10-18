/* speed.exe 007e8960 FUN_007e8960; analysis pseudocode, not buildable source.
 */

void FUN_007e8960(void)

{
  if ((DAT_009baf64 != 0) && (*(code **)(DAT_009baf64 + 0x1c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007e8974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_009baf64 + 0x1c))();
    return;
  }
  return;
}

