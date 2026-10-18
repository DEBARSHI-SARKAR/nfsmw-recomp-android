/* speed.exe 007ded80 __fptrap; analysis pseudocode, not buildable source.
 * calls 007c4240 __amsg_exit
 */

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}

