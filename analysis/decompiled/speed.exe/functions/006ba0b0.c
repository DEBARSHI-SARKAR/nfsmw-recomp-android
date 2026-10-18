/* speed.exe 006ba0b0 FUN_006ba0b0; analysis pseudocode, not buildable source.
 * calls 006e8e90 FUN_006e8e90
 * calls 00454640 FUN_00454640
 * calls 005d59f0 FUN_005d59f0
 * calls 0068c690 FUN_0068c690
 * calls 006ee9b0 FUN_006ee9b0
 * calls 005cc240 FUN_005cc240
 * calls 006f4400 FUN_006f4400
 * calls 0069b6c0 FUN_0069b6c0
 * calls 006eea40 FUN_006eea40
 * calls 006b9e70 FUN_006b9e70
 */

undefined4 * __thiscall FUN_006ba0b0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087dffc;
  pvStack_c = ExceptionList;
  pcStack_34 = (char *)param_2;
  uStack_38 = 0x6ba0dc;
  ExceptionList = &pvStack_c;
  FUN_006b9e70();
  pcStack_34 = (char *)0x0;
  uStack_38 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008ad61c;
  param_1[2] = &PTR_LAB_008ad614;
  param_1[0x13] = &PTR_LAB_008ad5f8;
  param_1[0x15] = &PTR_LAB_008ad578;
  param_1[0x18] = &PTR_LAB_008ad558;
  param_1[0x21] = 0;
  FUN_006eea40();
  pcStack_34 = (char *)0x0;
  uStack_38 = 0;
  local_4._0_1_ = 1;
  uVar2 = FUN_00454640("heliwash");
  FUN_0069b6c0(uVar2);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  local_4._0_1_ = 2;
  pcStack_34 = (char *)0x6ba150;
  iVar3 = (**(code **)(*(int *)param_1[0x12] + 0x48))();
  puVar4 = *(undefined1 **)(*(int *)(iVar3 + 8) + 0x1c);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_00890978;
  }
  piVar1 = (int *)param_1[0xd];
  pcStack_34 = (char *)0x6ba16c;
  pcStack_34 = (char *)(**(code **)(*(int *)param_1[0x12] + 0x40))();
  uStack_38 = 0x6ba174;
  uStack_38 = (**(code **)(*piVar1 + 0x70))();
  FUN_0068c690(puVar4);
  pcStack_34 = "Physics";
  local_4 = CONCAT31(local_4._1_3_,3);
  uStack_38 = 0x6ba18e;
  param_2 = (undefined4 *)FUN_005cc240();
  pcStack_34 = (char *)0x1;
  uStack_38 = 0;
  uStack_38 = FUN_006ee9b0(&param_2,0x3f800000);
  pcStack_34 = "HeliWash";
  param_1[0x3d] = uStack_38;
  FUN_006e8e90();
  pcStack_34 = auStack_1c;
  param_2 = &uStack_38;
  uStack_38 = 0x804c146e;
  uVar2 = FUN_006f4400();
  param_1[0x21] = uVar2;
  pcStack_34 = &LAB_004040e0;
  uStack_38 = 0x6ba1ec;
  uVar2 = FUN_005d59f0();
  param_1[0x41] = uVar2;
  pcStack_34 = &LAB_004039c0;
  uStack_38 = 0x6ba202;
  uVar2 = FUN_005d59f0();
  param_1[0x42] = uVar2;
  ExceptionList = pvStack_c;
  return param_1;
}

