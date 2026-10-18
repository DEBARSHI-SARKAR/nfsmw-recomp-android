/* speed.exe 00692c50 FUN_00692c50; analysis pseudocode, not buildable source.
 * calls 0066bcc0 FUN_0066bcc0
 * calls 0066bc60 FUN_0066bc60
 * calls 0066bb30 FUN_0066bb30
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00692c50(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  float fStack_8;
  float local_4;
  
  iVar1 = param_1 + 0x130;
  iVar5 = FUN_0066bb30(iVar1);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    return;
  }
  fVar6 = (float10)FUN_00401ae0(*(undefined4 *)(param_1 + 0x8c),0,0x3f000000);
  local_c = (float)fVar6;
  local_4 = *(float *)(param_1 + 0xec) * _DAT_008a9394;
  cVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))();
  if (cVar4 != '\0') {
    local_c = 0.0;
  }
  if ((iVar5 == 1) &&
     (fVar6 = (float10)FUN_0066bc60(param_1 + 0x144,iVar1,param_2), (float10)local_4 < fVar6)) {
    local_c = 0.0;
  }
  if (*(float *)(param_1 + 0x90) <= local_c) {
    if (local_c <= *(float *)(param_1 + 0x90)) goto LAB_00692dad;
    fVar2 = *(float *)(*(int *)(param_1 + 0x138) + 0x10);
    if (fVar2 <= _DAT_008aabe0) {
      *(float *)(param_1 + 0x90) = local_c;
      goto LAB_00692dad;
    }
    fVar2 = param_3 / fVar2 + *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x90) = fVar2;
    if (local_c <= fVar2) {
      *(float *)(param_1 + 0x90) = local_c;
      goto LAB_00692dad;
    }
  }
  else {
    fVar2 = *(float *)(*(int *)(param_1 + 0x138) + 4);
    if (fVar2 <= _DAT_008aabe0) {
      *(float *)(param_1 + 0x90) = local_c;
      goto LAB_00692dad;
    }
    fVar2 = *(float *)(param_1 + 0x90) - param_3 / fVar2;
    *(float *)(param_1 + 0x90) = fVar2;
    if (fVar2 <= local_c) {
      fVar2 = local_c;
    }
  }
  *(float *)(param_1 + 0x90) = fVar2;
LAB_00692dad:
  fVar2 = *(float *)(param_1 + 0x90);
  fVar3 = _DAT_0089096c;
  if ((fVar2 < _DAT_0089096c) && (fVar3 = fVar2, fVar2 < _DAT_00890968)) {
    fVar3 = _DAT_00890968;
  }
  *(float *)(param_1 + 0x90) = fVar3;
  fVar6 = (float10)FUN_0066bcc0(param_1 + 0x144,iVar1,local_4,fVar3,param_2,&fStack_8);
  *(float *)(param_1 + 0x98) = (float)fVar6;
  if (*(float *)(param_1 + 0x94) <= fStack_8) {
    if (fStack_8 <= *(float *)(param_1 + 0x94)) {
      return;
    }
    fVar2 = param_3 * _DAT_008aad94 + *(float *)(param_1 + 0x94);
    if (fStack_8 <= fVar2) {
      fVar2 = fStack_8;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x94) - param_3 * _DAT_008aad94;
    if (fVar2 <= fStack_8) {
      *(float *)(param_1 + 0x94) = fStack_8;
      return;
    }
  }
  *(float *)(param_1 + 0x94) = fVar2;
  return;
}

