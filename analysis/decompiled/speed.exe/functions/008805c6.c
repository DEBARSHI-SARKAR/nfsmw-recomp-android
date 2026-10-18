/* speed.exe 008805c6 Unwind@008805c6; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008805c6(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x30),0x34,0xc0,
             (_func_void_void_ptr *)&DAT_00727690);
  return;
}

