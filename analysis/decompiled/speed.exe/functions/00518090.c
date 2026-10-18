/* speed.exe 00518090 FUN_00518090; analysis pseudocode, not buildable source.
 */

uint FUN_00518090(void)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_0091cb20 != 0) {
    sVar1 = *(short *)(DAT_0091cb20 + 0x48);
    uVar2 = CONCAT22((short)((uint)DAT_0091cb20 >> 0x10),sVar1);
    if ((sVar1 == 0) || (sVar1 == 0xb)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

