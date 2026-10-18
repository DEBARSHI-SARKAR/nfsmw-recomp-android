/* speed.exe 007d0130 BuildCatchObject; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007def90 _ValidateWrite
 * calls 007d0ab0 _inconsistency
 * calls 007c4c60 FID_conflict:_CallMemberFunction1
 * calls 007c4c50 FID_conflict:_CallMemberFunction1
 * calls 007def60 _ValidateRead
 * calls 007defc0 _ValidateExecute
 * calls 007d0460 AdjustPointer
 */

/* Library Function - Single Match
    void __cdecl BuildCatchObject(struct EHExceptionRecord *,void *,struct _s_HandlerType const
   *,struct _s_CatchableType const *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl
BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
                _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  undefined4 uVar3;
  int *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bcba8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  if (((param_3->pType != (TypeDescriptor *)0x0) && (*(char *)&param_3->pType[1].pVFTable != '\0'))
     && ((param_3->dispCatchObj != 0 || ((param_3->adjectives & 0x80000000) != 0)))) {
    if ((param_3->adjectives & 0x80000000) == 0) {
      local_20 = (int *)((int)param_2 + param_3->dispCatchObj + 0xc);
    }
    else {
      local_20 = param_2;
    }
    local_8 = 0;
    if ((param_3->adjectives & 8) == 0) {
      if ((*(uint *)param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          ExceptionList = &local_14;
          iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
          if ((iVar1 == 0) || (iVar1 = _ValidateWrite(local_20,1), iVar1 == 0)) {
            _inconsistency();
          }
          else {
            _Size = *(size_t *)(param_4 + 0x14);
            pvVar2 = AdjustPointer(*(void **)(param_1 + 0x18),(PMD *)(param_4 + 8));
            FID_conflict__memcpy(local_20,pvVar2,_Size);
          }
        }
        else {
          ExceptionList = &local_14;
          iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
          if (((iVar1 == 0) || (iVar1 = _ValidateWrite(local_20,1), iVar1 == 0)) ||
             (iVar1 = _ValidateExecute(*(_func_int **)(param_4 + 0x18)), iVar1 == 0)) {
            _inconsistency();
          }
          else if ((*(uint *)param_4 & 4) == 0) {
            pvVar2 = AdjustPointer(*(void **)(param_1 + 0x18),(PMD *)(param_4 + 8));
            FID_conflict__CallMemberFunction1(local_20,*(undefined4 *)(param_4 + 0x18),pvVar2);
          }
          else {
            uVar3 = 1;
            pvVar2 = AdjustPointer(*(void **)(param_1 + 0x18),(PMD *)(param_4 + 8));
            FID_conflict__CallMemberFunction1(local_20,*(undefined4 *)(param_4 + 0x18),pvVar2,uVar3)
            ;
          }
        }
      }
      else {
        ExceptionList = &local_14;
        iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
        if ((iVar1 == 0) || (iVar1 = _ValidateWrite(local_20,1), iVar1 == 0)) {
          _inconsistency();
        }
        else {
          FID_conflict__memcpy(local_20,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 4) && (*local_20 != 0)) {
            pvVar2 = AdjustPointer((void *)*local_20,(PMD *)(param_4 + 8));
            *local_20 = (int)pvVar2;
          }
        }
      }
    }
    else {
      ExceptionList = &local_14;
      iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
      if ((iVar1 == 0) || (iVar1 = _ValidateWrite(local_20,1), iVar1 == 0)) {
        _inconsistency();
      }
      else {
        *local_20 = *(int *)(param_1 + 0x18);
        pvVar2 = AdjustPointer((void *)*local_20,(PMD *)(param_4 + 8));
        *local_20 = (int)pvVar2;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

