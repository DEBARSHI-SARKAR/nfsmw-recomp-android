/* speed.exe 007cfdb0 FrameUnwindFilter; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d0a20 terminate
 */

/* Library Function - Single Match
    int __cdecl FrameUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl FrameUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  _ptiddata p_Var1;
  
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)0x0;
    terminate();
  }
  return 0;
}

