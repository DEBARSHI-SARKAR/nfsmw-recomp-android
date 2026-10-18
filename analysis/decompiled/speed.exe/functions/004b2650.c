/* speed.exe 004b2650 FUN_004b2650; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

uint * FUN_004b2650(void)

{
  uint *puVar1;
  int unaff_EDI;
  
  FUN_007ec1bd();
  puVar1 = *(uint **)(unaff_EDI + 0x74);
  if (puVar1 == (uint *)0x0) {
    FUN_007ec1c8();
    return (uint *)0x0;
  }
  *(uint *)(unaff_EDI + 0x74) = puVar1[3];
  DAT_00911f54 = DAT_00911f54 + 0x100;
  if (DAT_00911f54 == 0) {
    DAT_00911f54 = 0x100;
  }
  *puVar1 = *puVar1 & 0xff | DAT_00911f54;
  FUN_007ec1c8();
  return puVar1;
}

