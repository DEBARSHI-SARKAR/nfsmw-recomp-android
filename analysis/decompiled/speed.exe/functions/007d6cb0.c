/* speed.exe 007d6cb0 __security_check_cookie; analysis pseudocode, not buildable source.
 * calls 007e3cf0 ___security_error_handler
 * calls EXTERNAL:00000059 ExitProcess
 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    @__security_check_cookie@4
   
   Library: Visual Studio 2003 Debug */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  if (_StackCookie == DAT_00906980) {
    return;
  }
  puStack_c = &DAT_008bd1d8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  ___security_error_handler(1,0);
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}

