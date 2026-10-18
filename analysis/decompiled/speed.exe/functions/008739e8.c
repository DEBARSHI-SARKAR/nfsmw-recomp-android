/* speed.exe 008739e8 Unwind@008739e8; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_008739e8(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x2c),0x18,0x10,FUN_0058c610);
  return;
}

