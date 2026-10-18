/* speed.exe 0086c018 Unwind@0086c018; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_0086c018(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x50) + 0xbc),0x44,4,FUN_004aba50);
  return;
}

