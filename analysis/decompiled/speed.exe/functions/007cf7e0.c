/* speed.exe 007cf7e0 FindHandler; analysis pseudocode, not buildable source.
 * calls 007c4fc0 _GetRangeOfTrysToCheck
 * calls 007d0ab0 _inconsistency
 * calls 007cd100 __getptd
 * calls 007d03d0 ___DestructExceptionObject
 * calls 007cfa80 FindHandlerForForeignException
 * calls 007cfbb0 TypeMatch
 * calls 007d0a20 terminate
 * calls 007def60 _ValidateRead
 * calls 007cfdf0 CatchIt
 */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  _s_CatchableType *p_Var1;
  _ptiddata p_Var2;
  int iVar3;
  undefined4 *local_28;
  int local_24;
  _s_HandlerType *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  _s_TryBlockMapEntry *local_10;
  uchar local_9;
  int local_8;
  
  local_9 = '\0';
  local_8 = *(int *)(param_2 + 8);
  if ((local_8 < -1) || (param_5->maxState <= local_8)) {
    _inconsistency();
  }
  if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
      ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) &&
     (*(int *)(param_1 + 0x1c) == 0)) {
    p_Var2 = __getptd();
    if (p_Var2->_unexpected == (void *)0x0) {
      return;
    }
    p_Var2 = __getptd();
    param_1 = p_Var2->_unexpected;
    p_Var2 = __getptd();
    param_3 = p_Var2->_translator;
    local_9 = '\x01';
    iVar3 = _ValidateRead(param_1,1);
    if (iVar3 == 0) {
      _inconsistency();
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       (((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) &&
        (*(int *)(param_1 + 0x1c) == 0)))) {
      _inconsistency();
    }
  }
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) {
    local_10 = _GetRangeOfTrysToCheck(param_5,param_7,local_8,&local_14,&local_18);
    for (; local_14 < local_18; local_14 = local_14 + 1) {
      if ((local_10->tryLow <= local_8) && (local_8 <= local_10->tryHigh)) {
        local_20 = local_10->pHandlerArray;
        for (local_1c = local_10->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
          local_28 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0xc);
          for (local_24 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc); local_28 = local_28 + 1,
              0 < local_24; local_24 = local_24 + -1) {
            p_Var1 = (_s_CatchableType *)*local_28;
            iVar3 = TypeMatch(local_20,p_Var1,*(_s_ThrowInfo **)(param_1 + 0x1c));
            if (iVar3 != 0) {
              CatchIt(param_1,param_2,param_3,param_4,param_5,local_20,p_Var1,local_10,param_7,
                      param_8,local_9);
              goto LAB_007cf929;
            }
          }
          local_20 = local_20 + 1;
        }
      }
LAB_007cf929:
      local_10 = local_10 + 1;
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject(param_1,1);
    }
  }
  else if (param_6 == '\0') {
    FindHandlerForForeignException(param_1,param_2,param_3,param_4,param_5,local_8,param_7,param_8);
  }
  else {
    terminate();
  }
  return;
}

