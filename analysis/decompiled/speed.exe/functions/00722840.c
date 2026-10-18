/* speed.exe 00722840 FUN_00722840; analysis pseudocode, not buildable source.
 */

int FUN_00722840(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_009a3a14;
  if (0 < DAT_009a3a18) {
    do {
      if (*(short *)(iVar1 + 0x8a) == param_1) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x120;
    } while (iVar2 < DAT_009a3a18);
  }
  return 0;
}

