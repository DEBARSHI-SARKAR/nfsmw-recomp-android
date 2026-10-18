/* speed.exe 007fd429 FUN_007fd429; analysis pseudocode, not buildable source.
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fd429(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x188);
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x180) = 0;
  iVar1 = *(int *)(unaff_ESI + 0x18c);
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(unaff_ESI + 0x18c) = 0;
  *(undefined4 *)(unaff_ESI + 0x184) = 0;
  return;
}

