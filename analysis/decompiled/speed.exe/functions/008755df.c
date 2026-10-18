/* speed.exe 008755df Unwind@008755df; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008755df(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x18),0x194,0x10,
             (_func_void_void_ptr *)&DAT_005e3010);
  return;
}

