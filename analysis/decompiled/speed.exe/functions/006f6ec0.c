/* speed.exe 006f6ec0 FUN_006f6ec0; analysis pseudocode, not buildable source.
 * calls 006f6cf0 FUN_006f6cf0
 * calls 006cb560 FUN_006cb560
 */

void FUN_006f6ec0(void)

{
  if (DAT_009885e0 != 0) {
    if (DAT_00988df4 == 0) {
      FUN_006f6cf0();
      return;
    }
    FUN_006cb560(&LAB_006f6eb0,DAT_00988df4,0,0);
  }
  return;
}

