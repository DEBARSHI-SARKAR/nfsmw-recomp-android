/* speed.exe 00880f46 Unwind@00880f46; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00880f46(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0xb84),4,0x17c,
             (_func_void_void_ptr *)&LAB_007374c0);
  return;
}

