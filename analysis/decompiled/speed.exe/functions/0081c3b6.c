/* speed.exe 0081c3b6 FUN_0081c3b6; analysis pseudocode, not buildable source.
 */

int FUN_0081c3b6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (DAT_009c205e != 0) {
    do {
      if ((&DAT_009c1b68)[iVar2] != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)DAT_009c205e);
  }
  return iVar1;
}

