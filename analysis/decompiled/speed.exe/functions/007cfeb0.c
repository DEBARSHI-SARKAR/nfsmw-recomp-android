/* speed.exe 007cfeb0 CallCatchBlock; analysis pseudocode, not buildable source.
 * calls 007c5050 _CreateFrameInfo
 * calls 007c4d40 _CallCatchBlock2
 * calls 007d00bd FUN_007d00bd
 * calls 007cd100 __getptd
 * calls 007d0031 FUN_007d0031
 */

/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *pvVar2;
  FrameInfo local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  FrameInfo *local_20;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcb90;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  local_28 = 0;
  local_24 = *(undefined4 *)(param_2 + -4);
  ExceptionList = &pvStack_14;
  local_20 = _CreateFrameInfo(local_30,*(void **)(param_1 + 0x18));
  __getptd();
  __getptd();
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_1;
  p_Var1 = __getptd();
  p_Var1->_translator = param_3;
  local_8 = 1;
  _CallCatchBlock2(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_007d0031();
  pvVar2 = (void *)FUN_007d00bd();
  return pvVar2;
}

