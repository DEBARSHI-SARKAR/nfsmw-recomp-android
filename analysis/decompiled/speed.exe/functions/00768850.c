/* speed.exe 00768850 FUN_00768850; analysis pseudocode, not buildable source.
 * calls 0045e240 FUN_0045e240
 * calls 006e9e40 FUN_006e9e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00768850(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined **local_70;
  undefined4 local_6c [16];
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_008818f8;
  local_1c = ExceptionList;
  local_70 = &PTR_LAB_008b5b34;
  puVar7 = &DAT_008a3028;
  puVar8 = local_6c;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_14 = 0;
  ExceptionList = &local_1c;
  cVar5 = FUN_006e9e40(&local_70);
  iVar6 = *(int *)(param_1 + 0x1c);
  if (cVar5 == '\0') {
    *(undefined4 *)(iVar6 + 0x50) = 0;
    *(undefined4 *)(iVar6 + 0x54) = 0;
    *(undefined4 *)(iVar6 + 0x58) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60) = 0;
    ExceptionList = local_1c;
    return;
  }
  fVar1 = *(float *)(iVar6 + 0x44);
  fVar2 = *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar6 + 0x48);
  FUN_0045e240(iVar6,local_6c);
  iVar6 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar6 + 0x44) = -local_2c;
  *(undefined4 *)(iVar6 + 0x40) = local_24;
  *(undefined4 *)(iVar6 + 0x48) = local_28;
  if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x1c) + 0x60)) {
    fVar4 = _DAT_0089096c / param_2;
    *(float *)(*(int *)(param_1 + 0x1c) + 0x50) =
         (*(float *)(*(int *)(param_1 + 0x1c) + 0x40) - fVar2) * fVar4;
    *(float *)(*(int *)(param_1 + 0x1c) + 0x54) =
         (*(float *)(*(int *)(param_1 + 0x1c) + 0x44) - fVar1) * fVar4;
    *(float *)(*(int *)(param_1 + 0x1c) + 0x58) =
         (*(float *)(*(int *)(param_1 + 0x1c) + 0x48) - fVar3) * fVar4;
  }
  *(float *)(*(int *)(param_1 + 0x1c) + 0x60) =
       param_2 + *(float *)(*(int *)(param_1 + 0x1c) + 0x60);
  ExceptionList = local_1c;
  return;
}

