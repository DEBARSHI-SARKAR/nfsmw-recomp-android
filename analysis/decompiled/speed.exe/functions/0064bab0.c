/* speed.exe 0064bab0 FUN_0064bab0; analysis pseudocode, not buildable source.
 * calls 0064a2c0 FUN_0064a2c0
 */

int FUN_0064bab0(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0091cf90 + 0x16f) == '\0') {
    iVar1 = FUN_0064a2c0();
    return iVar1;
  }
  return DAT_0091cf90 + 0x16f;
}

