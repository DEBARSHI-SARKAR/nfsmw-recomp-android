/* speed.exe 007cfbb0 TypeMatch; analysis pseudocode, not buildable source.
 * calls 007d1120 _strcmp
 */

/* Library Function - Single Match
    int __cdecl TypeMatch(struct _s_HandlerType const *,struct _s_CatchableType const *,struct
   _s_ThrowInfo const *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  int iVar1;
  int local_8;
  
  if ((param_1->pType == (TypeDescriptor *)0x0) || (*(char *)&param_1->pType[1].pVFTable == '\0')) {
    local_8 = 1;
  }
  else if ((param_1->pType == *(TypeDescriptor **)(param_2 + 4)) ||
          (iVar1 = _strcmp((char *)(param_1->pType + 1),(char *)(*(int *)(param_2 + 4) + 8)),
          iVar1 == 0)) {
    if (((((*(uint *)param_2 & 2) == 0) || ((param_1->adjectives & 8) != 0)) &&
        (((*(uint *)param_3 & 1) == 0 || ((param_1->adjectives & 1) != 0)))) &&
       (((*(uint *)param_3 & 2) == 0 || ((param_1->adjectives & 2) != 0)))) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

