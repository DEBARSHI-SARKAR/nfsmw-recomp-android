/* speed.exe 00874438 Unwind@00874438; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00874438(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0xc),0x18,0x40,FUN_005be440);
  return;
}

