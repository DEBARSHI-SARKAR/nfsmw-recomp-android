/* speed.exe 007c4db0 CatchGuardHandler; analysis pseudocode, not buildable source.
 * calls 007cf6f0 ___InternalCxxFrameHandler
 */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  if (*(int *)(param_2 + 8) == DAT_00906980) {
    _Var1 = ___InternalCxxFrameHandler
                      (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,
                       *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),param_2,0);
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
    _Var1 = 1;
  }
  return _Var1;
}

