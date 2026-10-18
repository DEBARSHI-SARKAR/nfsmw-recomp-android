/* speed.exe 007d7320 __flushall; analysis pseudocode, not buildable source.
 * calls 007d7330 flsall
 */

/* Library Function - Single Match
    __flushall
   
   Library: Visual Studio 2003 Debug */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = flsall(1);
  return iVar1;
}

