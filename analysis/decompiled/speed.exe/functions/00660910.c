/* speed.exe 00660910 FUN_00660910; analysis pseudocode, not buildable source.
 * calls 0045cc20 FUN_0045cc20
 * calls 00660730 FUN_00660730
 * calls 006607d0 FUN_006607d0
 * calls 00660530 FUN_00660530
 */

void FUN_00660910(void)

{
  FUN_00660530();
  if (DAT_009258d8 != 0) {
    FUN_0045cc20(&LAB_006606e0);
    FUN_006607d0();
    return;
  }
  if (DAT_009258d4 != 0) {
    FUN_00660730();
  }
  FUN_006607d0();
  return;
}

