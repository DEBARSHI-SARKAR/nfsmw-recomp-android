/* speed.exe 007c4c00 _JumpToContinuation; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x007c4c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

