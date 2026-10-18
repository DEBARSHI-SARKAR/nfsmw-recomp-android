/* speed.exe 0041fe30 FUN_0041fe30; analysis pseudocode, not buildable source.
 * calls 006fbea0 FUN_006fbea0
 * calls 00418d90 FUN_00418d90
 * calls 005cc240 FUN_005cc240
 * calls 00410320 FUN_00410320
 * calls 0041ceb0 FUN_0041ceb0
 * calls 005d59f0 FUN_005d59f0
 * calls 00452880 FUN_00452880
 * calls 00659250 FUN_00659250
 */

undefined4 * __thiscall FUN_0041fe30(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867d77;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418d90();
  param_1[0x12] = &PTR___purecall_00890d38;
  *param_1 = &PTR_FUN_0089100c;
  param_1[2] = &PTR_LAB_00891004;
  param_1[0x12] = &PTR_FUN_00891000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  puVar4 = &DAT_008a3028;
  puVar5 = param_1 + 0x1b;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4 = 0;
  piVar1 = (int *)(**(code **)(*(int *)param_1[0xf] + 0x44))();
  *(bool *)(param_1 + 0x16) = DAT_0092c4f0 == *piVar1;
  FUN_006fbea0(param_1 + 0x12);
  uVar2 = (**(code **)(*(int *)*param_2 + 0x54))();
  param_1[0x17] = uVar2;
  uVar2 = FUN_005d59f0();
  param_1[0x18] = uVar2;
  param_1[0x14] = 0x417a5639;
  param_1[0x15] = 0x41c4b176;
  piVar1 = (int *)(**(code **)(*(int *)param_1[0xf] + 4))();
  (**(code **)(*piVar1 + 0x70))();
  FUN_005cc240("AIAction");
  uVar2 = FUN_0041ceb0(param_1,&LAB_00406a90,0);
  param_1[0x19] = uVar2;
  FUN_00452880(0x14,1);
  local_4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  if (local_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00410320(0xeec2271a,0,0);
  }
  param_1[0x1a] = uVar2;
  param_1[0x2d] = 0;
  ExceptionList = unaff_EBX;
  return param_1;
}

