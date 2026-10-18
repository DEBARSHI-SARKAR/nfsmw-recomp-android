/* speed.exe 00874258 Unwind@00874258; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00874258(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0xc),0x20,0x100,FUN_005ad560);
  return;
}

