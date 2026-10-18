/* speed.exe 0059fc80 FUN_0059fc80; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251e0 FUN_005251e0
 * calls 00466410 FUN_00466410
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059fc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00873333;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x100000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565510,puVar2);
  *puVar2 = &PTR_FUN_008a0320;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a2468;
  *puVar2 = &PTR_LAB_008a2428;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x42700000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  uVar3 = FUN_0058bbd0(0xde89e070);
  param_1[0x1c] = uVar3;
  uVar3 = FUN_0058bbd0(0x7b422ba3);
  param_1[0x1d] = uVar3;
  uVar3 = FUN_0058bbd0(0xe0b1430b);
  param_1[0x1e] = uVar3;
  uVar3 = FUN_0058bbd0(0x8674e6d4);
  param_1[0x1f] = uVar3;
  uVar3 = FUN_0058bbd0(0x84a226ec);
  param_1[0x20] = uVar3;
  uVar3 = FUN_0058bbd0(0x6a144066);
  param_1[0x21] = uVar3;
  iVar4 = FUN_005251e0(param_1[4],0x3c165f39);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  iVar4 = FUN_005251e0(param_1[4],0xbee44775);
  if (iVar4 != 0) {
    piVar6 = (int *)FUN_00466410();
    piVar5 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      piVar6[2] = iVar4;
      piVar5 = piVar6;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  uVar3 = FUN_00524850(param_1[4],0xfc39cb0a);
  param_1[0x22] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0xbee44775);
  param_1[0x23] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x814918ca);
  param_1[0x24] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0xa16f9f1e);
  param_1[0x25] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x5fa70d4c);
  param_1[0x26] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x875e92eb);
  param_1[0x27] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0xe0e0169b);
  param_1[0x28] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x8eeebd33);
  param_1[0x29] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x47a4e2a9);
  param_1[0x2a] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x8e3653a6);
  param_1[0x2b] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x30f39a6f);
  param_1[0x2c] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0xcf817638);
  param_1[0x2d] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x8c20a763);
  param_1[0x2e] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x5c2a4f20);
  param_1[0x2f] = uVar3;
  param_1[0x30] = *(undefined4 *)(*(int *)(param_1[0x28] + 0x2c) + 0x38);
  param_1[0x31] = *(undefined4 *)(*(int *)(param_1[0x29] + 0x2c) + 0x38);
  param_1[0x32] = *(undefined4 *)(*(int *)(param_1[0x2a] + 0x2c) + 0x38);
  param_1[0x33] = *(undefined4 *)(*(int *)(param_1[0x2b] + 0x2c) + 0x38);
  param_1[0x34] = *(undefined4 *)(*(int *)(param_1[0x2c] + 0x2c) + 0x38);
  param_1[0x35] = *(undefined4 *)(*(int *)(param_1[0x2d] + 0x2c) + 0x38);
  ExceptionList = local_c;
  return param_1;
}

