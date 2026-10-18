/* speed.exe 007c4ef0 TranslatorGuardHandler; analysis pseudocode, not buildable source.
 * calls 007c4c70 _UnwindNestedFrames
 * calls 007cf6f0 ___InternalCxxFrameHandler
 * calls 007c4e10 _CallSETranslator
 */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  if (*(int *)(param_2 + 8) == DAT_00906980) {
    if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1);
      if (*(int *)(param_2 + 0x24) == 0) {
        _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
      }
      _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                        (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x007c4fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _Var1 = (*local_8)();
      return _Var1;
    }
    *(undefined4 *)(param_2 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 1;
}

