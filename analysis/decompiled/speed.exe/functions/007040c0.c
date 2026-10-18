/* speed.exe 007040c0 FUN_007040c0; analysis pseudocode, not buildable source.
 * calls 004bac70 FUN_004bac70
 */

undefined4 FUN_007040c0(void)

{
  char cVar1;
  
  if (DAT_00992230 == 0) {
    return 0;
  }
  if (((*(uint *)(DAT_00992230 + 0x28) >> 3 & 1) == 0) && (cVar1 = FUN_004bac70(), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}

