/* speed.exe 00850d40 FUN_00850d40; analysis pseudocode, not buildable source.
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 */

void FUN_00850d40(void)

{
  int unaff_ESI;
  
  if (DAT_009c3cfc == 0) {
    FUN_0084bcc0(&DAT_009c3cd8);
    DAT_009c3880 = 0;
  }
  FUN_0084bd60(&DAT_009c3cd8);
  *(int *)(unaff_ESI + 0x7c) = DAT_009c3cfc;
  DAT_009c3cfc = unaff_ESI;
  FUN_0084bdf0(&DAT_009c3cd8);
  return;
}

