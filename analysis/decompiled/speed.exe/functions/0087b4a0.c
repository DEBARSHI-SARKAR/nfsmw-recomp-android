/* speed.exe 0087b4a0 Unwind@0087b4a0; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void Unwind_0087b4a0(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_(*(void **)(unaff_EBP + -0x10),0x30,3,thunk_FUN_0067c950);
  return;
}

