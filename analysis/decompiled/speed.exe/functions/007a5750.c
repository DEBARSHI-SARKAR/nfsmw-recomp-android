/* speed.exe 007a5750 FUN_007a5750; analysis pseudocode, not buildable source.
 * calls 005816b0 FUN_005816b0
 * calls 006530a0 FUN_006530a0
 */

uint FUN_007a5750(void)

{
  uint uVar1;
  
  uVar1 = FUN_005816b0();
  if (uVar1 != 0x34) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_006530a0(4);
  return uVar1;
}

