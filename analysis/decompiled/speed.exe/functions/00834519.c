/* speed.exe 00834519 FUN_00834519; analysis pseudocode, not buildable source.
 * calls 00834314 FUN_00834314
 */

int FUN_00834519(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (&DAT_009c2aec)[param_1 * 4];
  iVar3 = 0;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = FUN_00834314(iVar1);
    if ((iVar4 == 0) && (DAT_009c2bf0 != (code *)0x0)) {
      do {
        iVar2 = (*DAT_009c2bf0)(iVar3,iVar1);
        if (-1 < iVar2) {
          iVar4 = FUN_00834314(iVar1);
        }
        iVar3 = iVar3 + 1;
      } while ((iVar4 == 0) && (0 < iVar2));
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

