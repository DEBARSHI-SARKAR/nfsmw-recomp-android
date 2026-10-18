/* speed.exe 007c89d0 __aligned_offset_malloc; analysis pseudocode, not buildable source.
 * calls 007c89f0 __aligned_offset_malloc_dbg
 */

/* Library Function - Single Match
    __aligned_offset_malloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)__aligned_offset_malloc_dbg(_Size,_Alignment,_Offset,0,0);
  return pvVar1;
}

