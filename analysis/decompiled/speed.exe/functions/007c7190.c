/* speed.exe 007c7190 FID_conflict:__expand; analysis pseudocode, not buildable source.
 * calls 007c71c0 __expand_dbg
 */

/* Library Function - Multiple Matches With Different Base Names
    __expand
    _realloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl FID_conflict___expand(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
  pvVar1 = (void *)__expand_dbg(_Memory,_NewSize,1,0,0);
  return pvVar1;
}

