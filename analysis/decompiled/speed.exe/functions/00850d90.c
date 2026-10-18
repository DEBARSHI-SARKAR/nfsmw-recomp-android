/* speed.exe 00850d90 FUN_00850d90; analysis pseudocode, not buildable source.
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084bcf0 FUN_0084bcf0
 */

void FUN_00850d90(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  FUN_0084bd60(&DAT_009c3cd8);
  piVar2 = &DAT_009c3cfc;
  iVar1 = DAT_009c3cfc;
  while (iVar1 != unaff_ESI) {
    piVar2 = (int *)(iVar1 + 0x7c);
    iVar1 = *piVar2;
  }
  *piVar2 = *(int *)(unaff_ESI + 0x7c);
  FUN_0084bdf0(&DAT_009c3cd8);
  if (DAT_009c3cfc == 0) {
    FUN_0084bcf0(&DAT_009c3cd8);
  }
  return;
}

