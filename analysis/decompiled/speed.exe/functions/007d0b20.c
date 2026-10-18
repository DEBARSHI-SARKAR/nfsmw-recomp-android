/* speed.exe 007d0b20 __CxxUnhandledExceptionFilter; analysis pseudocode, not buildable source.
 * calls 007d0a20 terminate
 * calls 007defc0 _ValidateExecute
 */

/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  int iVar1;
  
  if (((param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) &&
      (param_1->ExceptionRecord->NumberParameters == 3)) &&
     ((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930520 ||
      (param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930521)))) {
    terminate();
  }
  if ((DAT_009bac18 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_009bac18), iVar1 != 0)) {
    iVar1 = (*DAT_009bac18)(param_1);
    return iVar1;
  }
  return 0;
}

