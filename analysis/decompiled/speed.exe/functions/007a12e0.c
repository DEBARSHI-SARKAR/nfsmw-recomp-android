/* speed.exe 007a12e0 FUN_007a12e0; analysis pseudocode, not buildable source.
 * calls 0079f240 FUN_0079f240
 * calls 007a10e0 FUN_007a10e0
 */

void FUN_007a12e0(void)

{
  if (DAT_009b41fc < 1) {
    if (DAT_009b4220 < 1) {
      return;
    }
  }
  else {
    FUN_0079f240();
  }
  if (DAT_009b4220 < 1) {
    return;
  }
  FUN_007a10e0();
  return;
}

