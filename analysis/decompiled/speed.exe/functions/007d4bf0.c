/* speed.exe 007d4bf0 FUN_007d4bf0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000076 HeapAlloc
 */

LPVOID FUN_007d4bf0(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    if (DAT_009c531c != 1) {
      *(uint *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0xfU & 0xfffffff0;
    }
    pvVar1 = HeapAlloc(DAT_009c5318,0,*(SIZE_T *)(unaff_EBP + 8));
  }
  else {
    pvVar1 = *(LPVOID *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pvVar1;
}

