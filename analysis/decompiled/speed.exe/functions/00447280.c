/* speed.exe 00447280 FUN_00447280; analysis pseudocode, not buildable source.
 * calls 0065f740 FUN_0065f740
 */

uint FUN_00447280(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 0;
  while( true ) {
    for (; iVar2 < (int)(DAT_0090db3c & 0xff); iVar2 = iVar2 + 1) {
      iVar1 = FUN_0065f740(((DAT_0090db3c >> 8 & 0xff) + iVar2) * 0x40 + 0x808 + DAT_0090d9e4);
      uVar3 = uVar3 + iVar1;
      if ((uVar3 & 0xf) != 0) {
        uVar3 = uVar3 + (0x10 - (uVar3 & 0xf));
      }
    }
    if ((int)(DAT_0090db3c._2_2_ & 0xff) <= iVar4) break;
    iVar1 = FUN_0065f740(((uint)(DAT_0090db3c._2_2_ >> 8) + iVar4) * 0x40 + 0x808 + DAT_0090d9e4);
    uVar3 = uVar3 + iVar1;
    if ((uVar3 & 0xf) != 0) {
      uVar3 = uVar3 + (0x10 - (uVar3 & 0xf));
    }
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}

