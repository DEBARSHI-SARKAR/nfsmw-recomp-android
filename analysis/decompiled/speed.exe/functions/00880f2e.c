/* speed.exe 00880f2e Unwind@00880f2e; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00880f2e(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 0x15c),8,0x1c,FUN_0074c6f0)
  ;
  return;
}

