/* speed.exe 00875ca2 Unwind@00875ca2; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00875ca2(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x14) + 0x144),0x24,8,
             (_func_void_void_ptr *)&DAT_005ddef0);
  return;
}

