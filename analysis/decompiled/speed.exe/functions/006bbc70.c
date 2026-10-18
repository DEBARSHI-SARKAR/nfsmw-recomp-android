/* speed.exe 006bbc70 FUN_006bbc70; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0068c2e0 FUN_0068c2e0
 * calls 006f4400 FUN_006f4400
 * calls 006a63a0 FUN_006a63a0
 * calls 00452430 FUN_00452430
 * calls 006b9e70 FUN_006b9e70
 */

undefined4 * __thiscall FUN_006bbc70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e18e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b9e70();
  local_4 = 0;
  *param_1 = &PTR_FUN_008ad83c;
  param_1[2] = &PTR_LAB_008ad834;
  param_1[0x13] = &PTR_LAB_008ad818;
  param_1[0x15] = &PTR_LAB_008ad798;
  param_1[0x18] = &PTR_LAB_008ad778;
  param_1[0x21] = 0;
  iVar3 = FUN_006a63a0();
  param_1[0x2a] = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2a];
  *(undefined4 *)param_1[0x2a] = param_1[0x2a];
  *(undefined4 *)(param_1[0x2a] + 8) = param_1[0x2a];
  param_1[0x2b] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  uVar4 = FUN_005d59f0();
  param_1[0x24] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x22] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x23] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x28] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x25] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x26] = uVar4;
  uVar4 = FUN_005d59f0();
  param_1[0x27] = uVar4;
  if (param_1[0x22] != 0) {
    iVar3 = (**(code **)(*(int *)param_1[0x12] + 0x48))();
    puVar6 = *(undefined1 **)(*(int *)(iVar3 + 8) + 0x1c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00890978;
    }
    piVar1 = (int *)param_1[0x12];
    piVar2 = (int *)param_1[0xd];
    (**(code **)(*piVar1 + 0x40))();
    (**(code **)(*piVar2 + 0x44))();
    FUN_00452430();
    uVar4 = (**(code **)(*piVar1 + 200))();
    uVar5 = (**(code **)(*piVar2 + 0x70))(param_3,uVar4);
    FUN_0068c2e0(puVar6,uVar5,param_3,uVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    uVar4 = FUN_006f4400();
    param_1[0x21] = uVar4;
  }
  ExceptionList = local_c;
  return param_1;
}

