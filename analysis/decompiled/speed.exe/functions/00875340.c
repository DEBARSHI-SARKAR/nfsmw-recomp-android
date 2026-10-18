/* speed.exe 00875340 Unwind@00875340; analysis pseudocode, not buildable source.
 * calls 005d94f0 thunk_FUN_00452bd0
 */

void Unwind_00875340(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
    thunk_FUN_00452bd0();
    return;
  }
  return;
}

