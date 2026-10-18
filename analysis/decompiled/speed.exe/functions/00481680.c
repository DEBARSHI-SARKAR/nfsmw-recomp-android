/* speed.exe 00481680 FUN_00481680; analysis pseudocode, not buildable source.
 * calls 00648db0 FUN_00648db0
 * calls 00652ad0 _malloc
 * calls 0045f640 FUN_0045f640
 * calls 00476440 FUN_00476440
 * calls 005d8660 FUN_005d8660
 * calls 0047b980 FUN_0047b980
 */

undefined4 * __thiscall FUN_00481680(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086a7c2;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_005d8660(0);
  *param_1 = &PTR_FUN_00894bac;
  local_14 = 0;
  FUN_0047b980();
  param_1[7] = &PTR___purecall_00895120;
  local_14._0_1_ = 1;
  *param_1 = &PTR_FUN_0089520c;
  param_1[7] = &PTR_FUN_00895204;
  FUN_00648db0(0,0x98c7a2f5,"CDActionDebug",0);
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = &DAT_00890978;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  piVar1 = *(int **)(param_2 + 0x20);
  local_14._0_1_ = 2;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  if (piVar1 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
    param_1[0xaf] = puVar3[3];
    param_1[0xac] = *puVar3;
    param_1[0xad] = puVar3[1];
    param_1[0xae] = puVar3[2];
    iVar4 = (**(code **)(*piVar1 + 0x14))();
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x1c);
      local_40 = *(undefined4 *)(iVar2 + 0x40);
      local_3c = *(undefined4 *)(iVar2 + 0x44);
      local_38 = *(undefined4 *)(iVar2 + 0x48);
      FUN_0045f640(&local_30,*(int *)(iVar4 + 0x1c) + 0x40,*(int *)(iVar4 + 0x1c) + 0x50,0x41a00000)
      ;
    }
  }
  pvVar5 = _malloc(0xb0);
  local_14 = CONCAT31(local_14._1_3_,3);
  if (pvVar5 == (void *)0x0) {
    param_1[0xab] = 0;
  }
  else {
    uVar6 = FUN_00476440(*(undefined4 *)(param_2 + 8),&local_40,&local_30,0);
    param_1[0xab] = uVar6;
  }
  ExceptionList = pvStack_1c;
  return param_1;
}

