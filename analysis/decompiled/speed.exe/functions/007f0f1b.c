/* speed.exe 007f0f1b FUN_007f0f1b; analysis pseudocode, not buildable source.
 * calls 0085d840 _bsearch
 */

uint FUN_007f0f1b(void)

{
  int in_EAX;
  void *pvVar1;
  
  pvVar1 = _bsearch(&stack0x00000004,(void *)(in_EAX + 0x10),*(size_t *)(in_EAX + 8),4,FUN_007f0f08)
  ;
  if (pvVar1 != (void *)0x0) {
    return (uint)*(ushort *)((int)pvVar1 + 2);
  }
  return 0xffffffff;
}

