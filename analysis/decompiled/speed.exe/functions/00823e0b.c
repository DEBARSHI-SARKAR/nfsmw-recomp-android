/* speed.exe 00823e0b FUN_00823e0b; analysis pseudocode, not buildable source.
 */

int FUN_00823e0b(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_009c2044 != 0) {
    do {
      if (*(int *)(DAT_009c21f8 + iVar1 * 8) == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)DAT_009c2044);
  }
  return -9;
}

