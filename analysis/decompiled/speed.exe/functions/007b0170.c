/* speed.exe 007b0170 FUN_007b0170; analysis pseudocode, not buildable source.
 * calls 007aed80 FUN_007aed80
 * calls 00575b00 FUN_00575b00
 */

bool FUN_007b0170(void)

{
  int iVar1;
  char extraout_AL;
  int iVar2;
  
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) {
    FUN_00575b00();
    if (extraout_AL == '\0') {
      iVar1 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4);
      iVar2 = FUN_007aed80(2);
      return iVar2 <= iVar1;
    }
  }
  return true;
}

