/* speed.exe 007e9d50 FUN_007e9d50; analysis pseudocode, not buildable source.
 */

int FUN_007e9d50(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (((uVar2 == 0) && (uVar1 == 0x79)) || (uVar1 == 0x7b)) {
    if ((&DAT_008c1798)[uVar1 & 0xff] == '\x04') {
      uVar2 = 0x10;
    }
    else {
      uVar2 = ((&DAT_008c1798)[uVar1 & 0xff] != '\b') - 1 & 0x100;
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return ((int)(uVar2 * (byte)(&DAT_008c1798)[*(uint *)(param_1 + 0x54) & 0xff] +
                 ((int)(uVar2 * (byte)(&DAT_008c1798)[*(uint *)(param_1 + 0x54) & 0xff]) >> 0x1f &
                 7U)) >> 3) + 0x20;
  }
  return 0x20;
}

