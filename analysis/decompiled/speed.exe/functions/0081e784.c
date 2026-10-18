/* speed.exe 0081e784 FUN_0081e784; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081e9e7 FUN_0081e9e7
 */

undefined4 FUN_0081e784(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (DAT_0090bd18 + 0x24) * (int)DAT_009c218c * 4;
  DAT_009c21f4 = FUN_0081e9e7(iVar2);
  FUN_00822050(DAT_009c21f4,iVar2);
  iVar2 = DAT_009c218c * 0x90 + DAT_009c21f4;
  iVar4 = 0;
  if (0 < DAT_009c218c) {
    iVar1 = 0;
    do {
      *(int *)(iVar1 + 100 + DAT_009c21f4) = iVar2;
      iVar3 = 0;
      if (0 < DAT_0090bd18) {
        do {
          *(undefined4 *)(*(int *)(iVar1 + 100 + DAT_009c21f4) + iVar3 * 4) = 0x3f800000;
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_0090bd18);
      }
      iVar2 = iVar2 + DAT_0090bd18 * 4;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x90;
    } while (iVar4 < DAT_009c218c);
  }
  return 0;
}

