/* speed.exe 007d50f0 __heapset; analysis pseudocode, not buildable source.
 * calls 007d5030 __heapchk
 */

/* Library Function - Single Match
    __heapset
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapset(uint _Fill)

{
  int iVar1;
  
  iVar1 = __heapchk();
  return iVar1;
}

