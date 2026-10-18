/* speed.exe 007c8980 __aligned_realloc; analysis pseudocode, not buildable source.
 * calls 007c8b60 __aligned_offset_realloc_dbg
 */

/* Library Function - Single Match
    __aligned_realloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl __aligned_realloc(void *_Memory,size_t _NewSize,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)__aligned_offset_realloc_dbg(_Memory,_NewSize,_Alignment,0,0,0);
  return pvVar1;
}

