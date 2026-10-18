/* speed.exe 0059ee10 FUN_0059ee10; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059ee10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873273;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x4000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_005656d0,puVar1);
  *puVar1 = &PTR_FUN_008a03a8;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a22f4;
  *puVar1 = &PTR_LAB_008a22cc;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar2 = FUN_005af1c0("RaceInformationGroup");
  FUN_0058bbd0(uVar2);
  uVar2 = FUN_005af1c0("CurrentLapTime");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x17] = uVar2;
  uVar2 = FUN_005af1c0("Complete_Text");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x18] = uVar2;
  uVar2 = FUN_005af1c0("POSITION_GROUP");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x19] = uVar2;
  uVar2 = FUN_005af1c0("Milestone_TollBooth");
  uVar2 = FUN_00524850(param_3,uVar2);
  param_1[0x1a] = uVar2;
  uVar2 = FUN_00524850(param_3,0x1cddd8d0);
  param_1[0x1b] = uVar2;
  uVar2 = FUN_00524850(param_3,0x18a7acd2);
  param_1[0x1c] = uVar2;
  uVar2 = FUN_00524850(param_3,0x9c183bf8);
  param_1[0x1d] = uVar2;
  uVar2 = FUN_00524850(param_3,0x3bbd6268);
  param_1[0x1e] = uVar2;
  uVar2 = FUN_00524850(param_3,0x9cb5c95d);
  param_1[0x1f] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

