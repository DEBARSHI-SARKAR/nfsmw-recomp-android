/* speed.exe 0059f440 FUN_0059f440; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251e0 FUN_005251e0
 * calls 004647c0 FUN_004647c0
 * calls 005af1c0 FUN_005af1c0
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059f440(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008732f3;
  local_c = ExceptionList;
  puVar4 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar4 = puVar4;
  param_1[3] = puVar4;
  param_1[4] = param_3;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar4 = param_1 + 0xc;
  local_4 = 0;
  *puVar4 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565580,puVar4);
  *puVar4 = &PTR_FUN_008a0360;
  *param_1 = &PTR_FUN_008a2420;
  *puVar4 = &PTR_LAB_008a23f8;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xf] = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  uVar1 = FUN_005af1c0("MILESTONE_INFO_GROUP");
  uVar1 = FUN_0058bbd0(uVar1);
  param_1[0x2b] = uVar1;
  uVar1 = FUN_005af1c0("MILESTONE_ICON_GROUP");
  uVar1 = FUN_0058bbd0(uVar1);
  param_1[0x2c] = uVar1;
  uVar1 = FUN_005251e0(param_1[4],0x894662c5);
  param_1[0x2d] = uVar1;
  iVar3 = 1;
  puVar4 = param_1 + 0x32;
  param_3 = 4;
  do {
    FUN_004647c0(local_2c,"MILSTONE_ICON_%d",iVar3);
    uVar1 = param_1[4];
    uVar2 = FUN_005af1c0(local_2c);
    uVar1 = FUN_00524850(uVar1,uVar2);
    puVar4[-4] = uVar1;
    FUN_004647c0(local_2c,"MILESTONE_ICON_BACKING_%d",iVar3);
    uVar1 = param_1[4];
    uVar2 = FUN_005af1c0(local_2c);
    uVar1 = FUN_00524850(uVar1,uVar2);
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  uVar1 = FUN_00524850(param_1[4],0x5c697702);
  param_1[0x36] = uVar1;
  uVar1 = FUN_00524850(param_1[4],0xf4405ec0);
  param_1[0x37] = uVar1;
  uVar1 = FUN_005251e0(param_1[4],0xc3e48fbf);
  param_1[0x38] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

