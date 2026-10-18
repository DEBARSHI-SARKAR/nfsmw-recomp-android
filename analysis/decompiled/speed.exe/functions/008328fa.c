/* speed.exe 008328fa FUN_008328fa; analysis pseudocode, not buildable source.
 */

int FUN_008328fa(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_009c2c1c) {
    do {
      if (*(int *)(DAT_009c2c10 + iVar1 * 8) == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_009c2c1c);
  }
  return -1;
}

