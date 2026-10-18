/* speed.exe 0085eaec FUN_0085eaec; analysis pseudocode, not buildable source.
 * calls 00860670 FUN_00860670
 * calls 007d893e __cintrindisp1
 */

void FUN_0085eaec(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_009c5310 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00860670();
    return;
  }
  __cintrindisp1();
  return;
}

