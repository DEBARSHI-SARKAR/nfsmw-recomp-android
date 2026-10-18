/* speed.exe 0081bab9 FUN_0081bab9; analysis pseudocode, not buildable source.
 */

void FUN_0081bab9(void)

{
  int iVar1;
  
  if ((DAT_009c2188 != '\0') && (iVar1 = 0, '\0' < DAT_009c218b)) {
    do {
      (*(code *)(&DAT_009c21ac)[iVar1])();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_009c218b);
  }
  return;
}

