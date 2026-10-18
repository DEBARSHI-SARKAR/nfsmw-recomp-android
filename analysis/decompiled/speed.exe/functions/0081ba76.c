/* speed.exe 0081ba76 FUN_0081ba76; analysis pseudocode, not buildable source.
 */

void FUN_0081ba76(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_009c218b) {
    while ((&DAT_009c21ac)[iVar1] != param_1) {
      iVar1 = iVar1 + 1;
      if (DAT_009c218b <= iVar1) {
        return;
      }
    }
    DAT_009c218b = DAT_009c218b + -1;
    for (; iVar1 < DAT_009c218b; iVar1 = iVar1 + 1) {
      (&DAT_009c21ac)[iVar1] = (&DAT_009c21b0)[iVar1];
    }
  }
  return;
}

