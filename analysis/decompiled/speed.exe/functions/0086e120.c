/* speed.exe 0086e120 Unwind@0086e120; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_0086e120(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 0x10c),8,0x42,FUN_00507e60)
  ;
  return;
}

