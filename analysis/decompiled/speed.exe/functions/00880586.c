/* speed.exe 00880586 Unwind@00880586; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_00880586(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x40) + 0x30),0x34,0xc0,
             (_func_void_void_ptr *)&DAT_00727690);
  return;
}

