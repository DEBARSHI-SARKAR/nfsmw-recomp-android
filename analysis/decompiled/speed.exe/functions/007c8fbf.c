/* speed.exe 007c8fbf FUN_007c8fbf; analysis pseudocode, not buildable source.
 * calls 007c8ff0 __ArrayUnwind
 */

void FUN_007c8fbf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}

