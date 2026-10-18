/* speed.exe 007a4db0 FUN_007a4db0; analysis pseudocode, not buildable source.
 * calls 00575b00 FUN_00575b00
 */

char FUN_007a4db0(void)

{
  char cVar1;
  
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
    cVar1 = FUN_00575b00();
    return (-(cVar1 != '\0') & 8U) + 2;
  }
  if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
     (cVar1 = '\x04', (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
    cVar1 = '\x01';
  }
  return cVar1;
}

