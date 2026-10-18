/* speed.exe 007cd4b0 __heap_init; analysis pseudocode, not buildable source.
 * calls 007d5190 ___sbh_heap_init
 * calls EXTERNAL:0000006e HeapDestroy
 * calls EXTERNAL:0000006f HeapCreate
 * calls 007cd480 ___heap_select
 */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_009c5318 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_009c5318 == (HANDLE)0x0) {
    iVar1 = 0;
  }
  else {
    DAT_009c531c = ___heap_select();
    if ((DAT_009c531c == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
      HeapDestroy(DAT_009c5318);
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}

