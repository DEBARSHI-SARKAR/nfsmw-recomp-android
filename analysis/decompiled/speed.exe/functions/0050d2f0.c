/* speed.exe 0050d2f0 FUN_0050d2f0; analysis pseudocode, not buildable source.
 * calls 004fe4a0 FUN_004fe4a0
 * calls 0050af20 FUN_0050af20
 * calls 0050d170 FUN_0050d170
 */

void FUN_0050d2f0(void)

{
  if (DAT_0091606c != '\0') {
    FUN_0050af20();
    FUN_004fe4a0();
    FUN_0050d170();
    DAT_0091606c = '\0';
  }
  return;
}

