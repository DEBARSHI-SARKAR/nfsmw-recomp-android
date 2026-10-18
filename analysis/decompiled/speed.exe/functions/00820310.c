/* speed.exe 00820310 FUN_00820310; analysis pseudocode, not buildable source.
 * calls 00819670 FUN_00819670
 */

undefined4 FUN_00820310(undefined4 param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar1 = (**(code **)(*DAT_009c22cc + 0x10))(DAT_009c22cc,local_14,&local_8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  bVar2 = (byte)DAT_009c22e4;
  local_8 = local_8 >> (bVar2 & 0x1f);
  if (local_8 < DAT_009c22e0) {
    iVar1 = DAT_009c22d0 - DAT_009c22e0;
  }
  else {
    iVar1 = -DAT_009c22e0;
  }
  DAT_009c22d8 = DAT_009c22d8 + local_8 + iVar1;
  DAT_009c22e0 = local_8;
  if ((DAT_009c22d4 <= DAT_009c22d8 - DAT_009c22dc) &&
     (iVar1 = (**(code **)(*DAT_009c22cc + 0x20))
                        (DAT_009c22cc,DAT_009c22dc % DAT_009c22d0 << (bVar2 & 0x1f),
                         DAT_009c22d4 << (bVar2 & 0x1f),&local_c,&local_10,0,0,0), iVar1 == 0)) {
    FUN_00819670(param_1,local_c,DAT_009c22d4 << ((byte)DAT_009c22e4 & 0x1f));
    iVar1 = (**(code **)(*DAT_009c22cc + 0x2c))(DAT_009c22cc,local_c,local_10,0,0);
    if (iVar1 == 0) {
      DAT_009c22dc = DAT_009c22dc + DAT_009c22d4;
      return 0;
    }
  }
  return 0xffffffff;
}

