/* speed.exe 007d04d0 ___CxxExceptionFilter; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007cfbb0 TypeMatch
 * calls 007d0130 BuildCatchObject
 */

/* Library Function - Single Match
    ___CxxExceptionFilter
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  _s_CatchableType *p_Var1;
  int iVar2;
  _ptiddata p_Var3;
  undefined4 *local_20;
  EHExceptionRecord *local_1c;
  int local_18;
  _s_HandlerType local_14;
  
  if (param_1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    local_1c = *(EHExceptionRecord **)param_1;
    if ((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) {
      if ((((*(int *)local_1c == -0x1f928c9d) && (*(int *)(local_1c + 0x10) == 3)) &&
          (((*(int *)(local_1c + 0x14) == 0x19930520 || (*(int *)(local_1c + 0x14) == 0x19930521))
           && (*(int *)(local_1c + 0x1c) == 0)))) &&
         (p_Var3 = __getptd(), p_Var3->_unexpected == (void *)0x0)) {
        return 0;
      }
      p_Var3 = __getptd();
      p_Var3->_purecall = (void *)((int)p_Var3->_purecall + 1);
      iVar2 = 1;
    }
    else {
      if (((*(int *)local_1c == -0x1f928c9d) && (*(int *)(local_1c + 0x10) == 3)) &&
         ((*(int *)(local_1c + 0x14) == 0x19930520 || (*(int *)(local_1c + 0x14) == 0x19930521)))) {
        if (*(int *)(local_1c + 0x1c) == 0) {
          p_Var3 = __getptd();
          if (p_Var3->_unexpected == (void *)0x0) {
            return 0;
          }
          p_Var3 = __getptd();
          local_1c = p_Var3->_unexpected;
        }
        local_14.pType = param_2;
        local_14.adjectives = param_3 | 0x80000000;
        local_20 = *(undefined4 **)(*(int *)(local_1c + 0x1c) + 0xc);
        for (local_18 = **(int **)(*(int *)(local_1c + 0x1c) + 0xc); local_20 = local_20 + 1,
            0 < local_18; local_18 = local_18 + -1) {
          p_Var1 = (_s_CatchableType *)*local_20;
          iVar2 = TypeMatch(&local_14,p_Var1,*(_s_ThrowInfo **)(local_1c + 0x1c));
          if (iVar2 != 0) {
            p_Var3 = __getptd();
            p_Var3->_purecall = (void *)((int)p_Var3->_purecall + 1);
            if (param_4 != (void *)0x0) {
              BuildCatchObject(local_1c,param_4,&local_14,p_Var1);
            }
            return 1;
          }
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

