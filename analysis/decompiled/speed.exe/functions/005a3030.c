/* speed.exe 005a3030 FUN_005a3030; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00405d20 FUN_00405d20
 * calls 0065c210 FUN_0065c210
 * calls 00514c70 FUN_00514c70
 * calls 00739a70 FUN_00739a70
 * calls 004fb000 FUN_004fb000
 * calls 007a2960 FUN_007a2960
 * calls 00653f60 FUN_00653f60
 * calls 0064bad0 FUN_0064bad0
 * calls 00460bf0 FUN_00460bf0
 * calls 005252d0 FUN_005252d0
 * calls 00525220 FUN_00525220
 * calls 005910e0 FUN_005910e0
 * calls 007a9db0 FUN_007a9db0
 * calls 00516c90 FUN_00516c90
 * calls 0065faf0 FUN_0065faf0
 * calls 00586290 FUN_00586290
 * calls 00514cc0 FUN_00514cc0
 * calls 00524850 FUN_00524850
 */

undefined4 * __thiscall FUN_005a3030(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 *local_340;
  undefined1 local_33c [32];
  undefined1 local_31c [784];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087362b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_340 = param_1;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0f58;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  local_4 = 0;
  param_1[0xd] = 0;
  cVar2 = FUN_004fb000();
  if (cVar2 != '\0') {
    uVar4 = param_1[4];
    uVar6 = 0;
    uVar3 = FUN_00460bf0("CURRENT_GEN_WIDESCREEN",uVar4,0);
    FUN_00516c90(uVar3,uVar4,uVar6);
  }
  uVar4 = FUN_00524850(param_1[4],0x534cc377);
  FUN_00514c70(uVar4);
  iVar5 = FUN_00653f60();
  if (iVar5 == 0) {
    uVar4 = FUN_00524850(param_1[4],0x43d41f73);
    FUN_00514c70(uVar4);
  }
  uVar4 = FUN_00524850(param_1[4],0xc6cc55a4);
  FUN_00514cc0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0x13cf446d);
  FUN_00514c70(uVar4);
  uVar4 = FUN_00524850(param_1[4],0x8c0bd743);
  FUN_00514c70(uVar4);
  iVar5 = FUN_00524850(param_1[4],0x8c0bd743);
  uVar4 = FUN_00524850(param_1[4],0x4b98c4b9);
  FUN_00514c70(uVar4);
  FUN_00525220(param_1[4],0xc6cc55a4,0x9b580b7e);
  if (iVar5 != 0) {
    if ((*(uint *)(iVar5 + 0x1c) & 0x10000000) != 0) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xefffffff;
    }
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
  }
  param_1[0xd] = DAT_00925b14;
  param_1[0xc] = DAT_00925b14;
  uVar4 = FUN_005cc240("Event");
  FUN_00405d20(&local_364);
  local_360 = local_364;
  local_358 = 0x20;
  local_354 = 0;
  local_350 = 0;
  local_34c = 0x10;
  local_348 = 0;
  local_344 = 0;
  local_35c = uVar4;
  FUN_0065faf0();
  FUN_0065c210();
  if (DAT_009b9e64 == '\0') {
    FUN_00739a70(0xffffffff,0,0,0);
    uVar1 = *(uint *)(DAT_0091cf90 + 300);
    if ((((uVar1 >> 2 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) && ((uVar1 >> 3 & 1) == 0)) {
      uVar4 = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
    }
    else {
      uVar4 = *(undefined4 *)(DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18);
    }
    FUN_005910e0(uVar4,0,local_31c);
    FUN_007a9db0(local_31c,2,0);
    FUN_007a2960();
    DAT_009b9e64 = '\x01';
  }
  FUN_0064bad0(local_33c,0x20);
  FUN_005252d0(param_1[4],0x69ef31d7,&DAT_008941f8,local_33c);
  ExceptionList = local_c;
  return param_1;
}

