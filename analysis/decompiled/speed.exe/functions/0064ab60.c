/* speed.exe 0064ab60 FUN_0064ab60; analysis pseudocode, not buildable source.
 * calls 00505350 FUN_00505350
 * calls 0045ce40 FUN_0045ce40
 * calls 004facb0 FUN_004facb0
 */

void FUN_0064ab60(void)

{
  if (DAT_00925874 == '\0') {
    FUN_0045ce40();
    if (DAT_00915fe4 != 0) {
      FUN_00505350();
    }
    FUN_004facb0();
    return;
  }
  return;
}

