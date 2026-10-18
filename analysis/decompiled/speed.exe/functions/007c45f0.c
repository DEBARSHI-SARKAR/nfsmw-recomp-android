/* speed.exe 007c45f0 FUN_007c45f0; analysis pseudocode, not buildable source.
 * calls 007c464d FUN_007c464d
 * calls 007ce700 FUN_007ce700
 */

void FUN_007c45f0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_009c5310 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_007ce700();
    return;
  }
  FUN_007c464d((double)in_ST1,(double)in_ST0);
  return;
}

