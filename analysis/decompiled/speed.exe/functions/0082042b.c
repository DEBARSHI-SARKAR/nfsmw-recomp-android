/* speed.exe 0082042b FUN_0082042b; analysis pseudocode, not buildable source.
 */

int FUN_0082042b(void)

{
  int iVar1;
  uint local_8;
  
  if (DAT_009c22a8 != 0) {
    iVar1 = (**(code **)(*DAT_009c22b0 + 0x10))(DAT_009c22b0,&local_8,0);
    if (-1 < iVar1) {
      iVar1 = DAT_009c2298 - (local_8 >> 1) / ((uint)DAT_009c2060 + (uint)DAT_009c205f);
      if (iVar1 < 0) {
        iVar1 = iVar1 + DAT_009c22b8;
      }
      return (iVar1 * 1000) / (int)(uint)DAT_009c2046;
    }
  }
  return 0;
}

