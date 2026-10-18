/* speed.exe 0082caa0 FUN_0082caa0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082caa0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((((&DAT_009c2954)[uVar2] != 0) &&
        (uVar1 = *(uint *)((&DAT_009c2954)[uVar2] + 0x14), (uVar1 & param_1 & 0xf0000000) != 0)) &&
       ((uVar1 & param_1 & 0xf000000) != 0)) {
      uVar1 = 0;
      do {
        if ((param_1 & 0xffffff & 1 << ((byte)uVar1 & 0x1f)) != 0) {
          return *(undefined4 *)((&DAT_009c2954)[uVar2] + 0x40 + uVar1 * 4);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x18);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return 0;
}

