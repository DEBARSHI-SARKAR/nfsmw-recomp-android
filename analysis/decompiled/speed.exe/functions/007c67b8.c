/* speed.exe 007c67b8 FUN_007c67b8; analysis pseudocode, not buildable source.
 * calls 007d4a70 __callnewh
 */

undefined4 FUN_007c67b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    iVar1 = __callnewh(*(size_t *)(unaff_EBP + 8));
    if (iVar1 != 0) {
      __lock(4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar2 = __heap_alloc_dbg(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0x10),
                               *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_007c67ad();
      uVar2 = FUN_007c67b8();
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar2;
}

