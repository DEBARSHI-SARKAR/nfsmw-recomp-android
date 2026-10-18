/* speed.exe 007cfdf0 CatchIt; analysis pseudocode, not buildable source.
 * calls 007cfeb0 CallCatchBlock
 * calls 007c4c70 _UnwindNestedFrames
 * calls 007d0130 BuildCatchObject
 * calls 007c4c00 _JumpToContinuation
 * calls 007cfc60 ___FrameUnwindToState
 */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObject(param_1,param_2,param_6,param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    _UnwindNestedFrames(param_2,param_1);
  }
  else {
    _UnwindNestedFrames(param_10,param_1);
  }
  ___FrameUnwindToState(param_2,param_4,param_5,param_8->tryLow);
  *(__ehstate_t *)(param_2 + 8) = param_8->tryHigh + 1;
  pvVar1 = CallCatchBlock(param_1,param_2,param_3,param_5,param_6->addressOfHandler,param_9,0x100);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,param_2);
  }
  return;
}

