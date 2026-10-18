/* speed.exe 008816cc Unwind@008816cc; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008816cc(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x154) + 0xb84),4,0x17c,
             (_func_void_void_ptr *)&LAB_007374c0);
  return;
}

