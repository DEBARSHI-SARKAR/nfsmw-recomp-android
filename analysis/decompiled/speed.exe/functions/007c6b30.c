/* speed.exe 007c6b30 _calloc; analysis pseudocode, not buildable source.
 * calls 007c6b60 __calloc_dbg
 */

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = (void *)__calloc_dbg(_Count,_Size,1,0,0);
  return pvVar1;
}

