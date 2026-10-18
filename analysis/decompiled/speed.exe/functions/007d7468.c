/* speed.exe 007d7468 FUN_007d7468; analysis pseudocode, not buildable source.
 * calls 007c9440 __unlock_file2
 */

void FUN_007d7468(void)

{
  int unaff_EBP;
  
  __unlock_file2(*(int *)(unaff_EBP + -0x20),
                 *(void **)(DAT_009c5454 + *(int *)(unaff_EBP + -0x20) * 4));
  return;
}

