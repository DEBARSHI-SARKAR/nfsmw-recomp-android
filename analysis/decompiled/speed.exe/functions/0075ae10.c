/* speed.exe 0075ae10 FUN_0075ae10; analysis pseudocode, not buildable source.
 * calls 005c8cc0 FUN_005c8cc0
 * calls 0075a130 FUN_0075a130
 * calls 006bd900 FUN_006bd900
 * calls 006813b0 FUN_006813b0
 * calls 006684d0 FUN_006684d0
 * calls 00652ad0 _malloc
 * calls 0066a780 FUN_0066a780
 * calls 00444fe0 FUN_00444fe0
 * calls 004023c0 FUN_004023c0
 * calls 005ca910 FUN_005ca910
 * calls 0045e240 FUN_0045e240
 * calls 004011c0 FUN_004011c0
 * calls 0073b8a0 FUN_0073b8a0
 * calls 00404db0 FUN_00404db0
 * calls 005e29f0 FUN_005e29f0
 * calls 00738960 FUN_00738960
 * calls 00466340 FUN_00466340
 * calls 00744d40 FUN_00744d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0075ae10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_bc [12];
  undefined1 local_b0 [48];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00881275;
  local_1c = ExceptionList;
  if (((*(int *)(param_1 + 0x2c) != -1) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    ExceptionList = &local_1c;
    if (*(int *)(param_1 + 0x34) == 0) {
      ExceptionList = &local_1c;
      iVar2 = FUN_00744d40();
      if (iVar2 == 0) {
        ExceptionList = local_1c;
        return;
      }
      if (*(int *)(iVar2 + 0x28) < 2) {
        ExceptionList = local_1c;
        return;
      }
      iVar1 = *(int *)(iVar2 + 0x44);
      if (*(int *)(param_1 + 0xc0) == 0) {
        puVar3 = _malloc(0x36c);
        local_14 = 0;
        puVar6 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          FUN_00404db0(puVar3,0xc,0x49);
          puVar6 = puVar3;
        }
        *(undefined4 **)(param_1 + 0xc0) = puVar6;
        puVar3 = (undefined4 *)(iVar1 + 0x23c);
        for (iVar7 = 0xdb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        local_14 = 0xffffffff;
      }
      if (*(int *)(param_1 + 0xc4) == 0) {
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar1 + 0xd8);
      }
      uVar4 = FUN_00738960();
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      FUN_004023c0(*(int *)(iVar2 + 0x2c) * 0xd0 + DAT_009b09d8);
      iVar2 = FUN_006813b0();
      if ((iVar2 != 0) && (psVar5 = (short *)FUN_0066a780(), psVar5 != (short *)0x0)) {
        local_cc = (float)(int)*psVar5 * _DAT_00896ab8;
        local_c8 = (float)(int)psVar5[1] * _DAT_00896ab8;
        local_c4 = (float)(int)psVar5[2] * _DAT_00896ab8;
        local_c0 = (float)(int)psVar5[3] * _DAT_00896ab8;
        FUN_006684d0();
        FUN_005ca910(&local_cc);
        puVar6 = (undefined4 *)FUN_004011c0(local_70,local_bc,0x3f800000);
        local_80 = *puVar6;
        local_7c = puVar6[1];
        local_78 = puVar6[2];
        local_74 = puVar6[3];
        FUN_005c8cc0(local_b0);
        FUN_0045e240(param_1 + 0x40,local_b0);
      }
      if (*(int *)(param_1 + 0x34) == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        ExceptionList = local_1c;
        return;
      }
    }
    FUN_00444fe0(param_1 + 0x80);
    FUN_006bd900(local_60,param_1 + 0x40,param_1 + 0x80);
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar2 = FUN_00466340();
      local_14 = 1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0075a130(*(undefined4 *)(param_1 + 0x34),local_60);
      }
      local_14 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      if (*(int *)(param_1 + 0xc0) != 0) {
        FUN_0073b8a0(*(int *)(param_1 + 0xc0));
      }
      if (*(int *)(param_1 + 0xc4) != 0) {
        iVar2 = *(int *)(param_1 + 0x38);
        *(int *)(iVar2 + 0x80) = *(int *)(param_1 + 0xc4);
        *(undefined4 *)(iVar2 + 0x84) = 0xd6d6080a;
        ExceptionList = local_1c;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x38) + 0x28) = 1;
      FUN_005e29f0();
    }
  }
  ExceptionList = local_1c;
  return;
}

