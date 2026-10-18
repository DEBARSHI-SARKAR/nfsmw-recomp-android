/* speed.exe 007c9070 ArrayUnwindFilter; analysis pseudocode, not buildable source.
 * calls 007d0a20 terminate
 */

/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    terminate();
  }
  return 0;
}

