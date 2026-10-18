/* speed.exe 0086b700 Unwind@0086b700; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_0086b700(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 0x44),0x1c,6,FUN_004b02a0);
  return;
}

