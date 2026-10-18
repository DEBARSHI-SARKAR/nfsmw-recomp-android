/* speed.exe 0086be28 Unwind@0086be28; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_0086be28(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),8,3,FUN_004c78d0);
  return;
}

