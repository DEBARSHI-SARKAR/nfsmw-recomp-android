/* speed.exe 006c1b60 FUN_006c1b60; analysis pseudocode, not buildable source.
 * calls 006c2760 FUN_006c2760
 * calls 006c1990 FUN_006c1990
 * calls 006c1780 FUN_006c1780
 */

void FUN_006c1b60(void)

{
  int iVar1;
  
  FUN_006c1990();
  if (DAT_0093d898 == 0x1002) {
    iVar1 = FUN_006c2760();
    if (iVar1 != 0) {
      DAT_00901808 = 0;
    }
  }
  FUN_006c1780();
  return;
}

