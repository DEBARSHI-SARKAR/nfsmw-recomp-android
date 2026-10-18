/* speed.exe 007c7710 __msize; analysis pseudocode, not buildable source.
 * calls 007c7730 __msize_dbg
 */

/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl __msize(void *_Memory)

{
  size_t sVar1;
  
  sVar1 = __msize_dbg(_Memory,1);
  return sVar1;
}

