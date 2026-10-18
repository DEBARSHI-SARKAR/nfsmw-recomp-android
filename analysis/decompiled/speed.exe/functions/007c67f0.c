/* speed.exe 007c67f0 __heap_alloc; analysis pseudocode, not buildable source.
 * calls 007c6810 __heap_alloc_dbg
 */

/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __heap_alloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = (void *)__heap_alloc_dbg(_Size,1,0,0);
  return pvVar1;
}

