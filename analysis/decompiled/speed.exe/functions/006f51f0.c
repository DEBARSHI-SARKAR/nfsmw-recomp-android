/* speed.exe 006f51f0 FUN_006f51f0; analysis pseudocode, not buildable source.
 * calls 0062f820 FUN_0062f820
 * calls 006f3560 FUN_006f3560
 * calls 006ea390 FUN_006ea390
 * calls 00652ac0 _malloc
 * calls 006253d0 FUN_006253d0
 * calls 00460e30 FUN_00460e30
 * calls 0072c620 FUN_0072c620
 * calls 007c4b80 FUN_007c4b80
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00620a20 FUN_00620a20
 * calls 0062c9a0 FUN_0062c9a0
 * calls 006ef490 FUN_006ef490
 * calls 00789870 FUN_00789870
 * calls 00728c60 FUN_00728c60
 * calls 006ef2c0 FUN_006ef2c0
 * calls 00460c50 FUN_00460c50
 * calls 006f2f60 FUN_006f2f60
 * calls 00627400 FUN_00627400
 * calls 00446f00 FUN_00446f00
 * calls 006ea1c0 FUN_006ea1c0
 * calls 005cc240 FUN_005cc240
 * calls 004491e0 FUN_004491e0
 * calls 0047ef70 FUN_0047ef70
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006f51f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 local_100;
  float local_fc [5];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087ebc6;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(float *)(param_1 + 0x3c0) = (float)DAT_00925b14 * _DAT_00890984;
  *(int *)(param_1 + 0x2b4) = param_2;
  uVar4 = FUN_00460bf0(param_3);
  *(undefined4 *)(param_1 + 0x34c) = uVar4;
  iVar5 = FUN_00460e30(param_3,"IntroNisBL",10);
  if (iVar5 == 0) {
LAB_006f5290:
    *(undefined1 *)(param_1 + 0x3a0) = 1;
  }
  else {
    iVar5 = FUN_00460e30(param_3,"IntroNisDD",10);
    if (iVar5 == 0) goto LAB_006f5290;
    iVar5 = FUN_00460e30(param_3,"IntroNis10",10);
    if (iVar5 == 0) goto LAB_006f5290;
    iVar5 = FUN_00460e30(param_3,"EndingNIS",9);
    if (iVar5 == 0) goto LAB_006f5290;
  }
  iVar5 = FUN_00460e30(param_3,"IntroNisDD",10);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x39e) = 1;
  }
  iVar5 = FUN_00460e30(param_3,"IntroNisBL",10);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x39f) = 1;
  }
  iVar5 = FUN_00460e30(param_3,"IntroNisBL",10);
  if (iVar5 == 0) {
LAB_006f5309:
    *(undefined1 *)(param_1 + 0x39d) = 1;
  }
  else {
    iVar5 = FUN_00460e30(param_3,"IntroNis10",10);
    if (iVar5 == 0) goto LAB_006f5309;
    iVar5 = FUN_00460e30(param_3,"EndingNIS",9);
    if (iVar5 == 0) goto LAB_006f5309;
  }
  if ((DAT_009260c0 == 0) && (DAT_00988e04 != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((DAT_00982ba0 == 0) || (param_2 != 1)) && (!bVar2)) &&
     (((DAT_00901b28 != '\0' || (param_2 != 4)) || (0 < DAT_008ee348)))) {
    local_fc[1] = -NAN;
    local_fc[0] = 75.0;
    iVar5 = FUN_007c4b80();
    iVar5 = FUN_004491e0(*(undefined4 *)(param_1 + 0x34c),param_1 + 0x2b8,local_fc + 1,local_fc,
                         iVar5 / 0x168);
    if (iVar5 != 0) {
      puVar1 = (undefined4 *)(iVar5 + 0x10);
      FUN_006ea390(puVar1,*(undefined2 *)(iVar5 + 0x20));
      if (DAT_008ee348 < 1) {
        if (param_2 == 1) {
          local_e8 = *(undefined4 *)(iVar5 + 0x18);
          local_fc[4] = -*(float *)(iVar5 + 0x14);
          local_e4 = *puVar1;
          local_100 = 0;
          local_fc[2] = 0.0;
          local_fc[3] = 4.2039e-45;
          cVar3 = FUN_00789870(local_fc + 4,&local_100,0);
          if (cVar3 != '\0') {
            *(undefined4 *)(iVar5 + 0x18) = local_100;
            FUN_006ea390(puVar1,*(undefined2 *)(iVar5 + 0x20));
            FUN_006f3560(param_1 + 0x374,0x41200000);
          }
        }
        FUN_00446f00(local_a0,local_60,1);
        FUN_0045ecf0(local_e0,local_60,local_a0);
        puVar9 = local_e0;
        uVar4 = FUN_00460bf0(param_3,puVar9);
        param_4 = FUN_0047ef70(uVar4,puVar9);
        if (param_2 == 4) {
          if (local_fc[0] < _DAT_008b02f4) {
            iVar5 = FUN_00627400(8);
            local_14 = 0;
            if (iVar5 != 0) {
              FUN_00620a20();
            }
            local_14 = 0xffffffff;
            *(undefined4 *)(param_1 + 0x2ac) = 5;
            pvVar6 = _malloc(0xa0);
            local_14 = 1;
            if (pvVar6 != (void *)0x0) {
              puVar9 = local_e0;
              puVar8 = local_a0;
              uVar4 = FUN_00460bf0(param_3,param_4,puVar8,puVar9);
              uVar4 = FUN_006ef2c0(uVar4,param_4,puVar8,puVar9);
              *(undefined4 *)(param_1 + 0x398) = uVar4;
              ExceptionList = local_1c;
              return;
            }
            *(undefined4 *)(param_1 + 0x398) = 0;
            ExceptionList = local_1c;
            return;
          }
          goto LAB_006f558c;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x38c) = param_5;
    if (0 < DAT_008ee348) {
      *(undefined1 *)(param_1 + 0x38d) = 1;
    }
    DAT_009aac81 = 0;
    DAT_00911024 = 1;
    iVar5 = FUN_00460c50(param_1 + 0x2cc);
    if (param_3 != 0) {
      uVar4 = FUN_006ea1c0(*(undefined4 *)(param_1 + 0x34c));
      FUN_006f2f60(uVar4);
      if (((*(int *)(param_1 + 0x2b4) == 1) || (*(int *)(param_1 + 0x2b4) == 2)) && (iVar5 < 1)) {
        *(undefined1 *)(param_1 + 0x39c) = 1;
        iVar7 = FUN_00627400(0x10);
        local_14 = 2;
        if (iVar7 != 0) {
          FUN_006253d0(0xb,1);
        }
        local_14 = 0xffffffff;
      }
      iVar7 = FUN_00627400(0xc);
      local_14 = 3;
      if (iVar7 != 0) {
        FUN_0062c9a0(0);
      }
      local_14 = 0xffffffff;
      uVar4 = FUN_005cc240(param_3);
      *(undefined4 *)(param_1 + 0x350) = uVar4;
      *(undefined4 *)(param_1 + 0x35c) = param_4;
    }
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x2ac) = 1;
      FUN_006ef490();
    }
    else {
      *(undefined1 *)(param_1 + 0x39c) = 1;
      iVar5 = FUN_00627400(0xc);
      local_14 = 4;
      if (iVar5 != 0) {
        FUN_0062f820(param_1 + 0x2cc);
      }
      local_14 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2ac) = 4;
    }
    uVar4 = FUN_00460bf0("SCENERY_GROUP_DOOR");
    iVar5 = FUN_00728c60(uVar4);
    if (iVar5 != 0) {
      uVar4 = FUN_00460bf0("SCENERY_GROUP_DOOR");
      FUN_0072c620(uVar4);
    }
    ExceptionList = local_1c;
    return;
  }
LAB_006f558c:
  *(undefined4 *)(param_1 + 0x2ac) = 7;
  ExceptionList = local_1c;
  return;
}

