/* speed.exe 00882640 Unwind@00882640; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00882640(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_(*(void **)(unaff_EBP + -0x10),8,6,FUN_007925e0);
  return;
}

