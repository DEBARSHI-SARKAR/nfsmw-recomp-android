/* speed.exe 008816b1 Unwind@008816b1; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008816b1(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x154) + 0x15c),8,0x1c,FUN_0074c6f0);
  return;
}

