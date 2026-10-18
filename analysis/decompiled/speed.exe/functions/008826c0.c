/* speed.exe 008826c0 Unwind@008826c0; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008826c0(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_(*(void **)(unaff_EBP + -0x10),8,6,FUN_007925e0);
  return;
}

