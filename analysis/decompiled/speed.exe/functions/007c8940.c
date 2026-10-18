/* speed.exe 007c8940 __aligned_malloc; analysis pseudocode, not buildable source.
 * calls 007c89f0 __aligned_offset_malloc_dbg
 */

/* Library Function - Single Match
    __aligned_malloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __aligned_malloc(size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)__aligned_offset_malloc_dbg(_Size,_Alignment,0,0,0);
  return pvVar1;
}

