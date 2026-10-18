/* speed.exe 0087e950 Unwind@0087e950; analysis pseudocode, not buildable source.
 * calls 004690b0 thunk_FUN_0045a430
 */

void Unwind_0087e950(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffe;
    thunk_FUN_0045a430();
    return;
  }
  return;
}

