/* speed.exe 007cfa80 FindHandlerForForeignException; analysis pseudocode, not buildable source.
 * calls 007c4fc0 _GetRangeOfTrysToCheck
 * calls 007cd100 __getptd
 * calls 007c4e10 _CallSETranslator
 * calls 007cfdf0 CatchIt
 */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  _ptiddata p_Var1;
  int iVar2;
  uint local_10;
  uint local_c;
  _s_TryBlockMapEntry *local_8;
  
  if ((*(int *)param_1 != -0x7ffffffd) &&
     ((p_Var1 = __getptd(), p_Var1->_NLG_dwCode == 0 ||
      (iVar2 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
      iVar2 == 0)))) {
    local_8 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_c,&local_10);
    for (; local_c < local_10; local_c = local_c + 1) {
      if (((local_8->tryLow <= param_6) && (param_6 <= local_8->tryHigh)) &&
         ((local_8->pHandlerArray[local_8->nCatches + -1].pType == (TypeDescriptor *)0x0 ||
          (*(char *)&local_8->pHandlerArray[local_8->nCatches + -1].pType[1].pVFTable == '\0')))) {
        CatchIt(param_1,param_2,param_3,param_4,param_5,
                local_8->pHandlerArray + local_8->nCatches + -1,(_s_CatchableType *)0x0,local_8,
                param_7,param_8,'\x01');
      }
      local_8 = local_8 + 1;
    }
  }
  return;
}

