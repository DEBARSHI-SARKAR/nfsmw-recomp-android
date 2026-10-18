/* speed.exe 005964a0 FUN_005964a0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0057d6a0 FUN_0057d6a0
 * calls 00524850 FUN_00524850
 * calls 00524920 FUN_00524920
 * calls 00514cc0 FUN_00514cc0
 * calls 005dbed0 FUN_005dbed0
 * calls 005251e0 FUN_005251e0
 * calls 00525220 FUN_00525220
 * calls 00573140 FUN_00573140
 * calls 005951e0 FUN_005951e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005964a0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int local_24;
  float local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872c48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x586ab4a6);
  FUN_00514cc0(uVar3);
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x44ac8987);
  FUN_00514cc0(uVar3);
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x30ee5e68);
  FUN_00514cc0(uVar3);
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (-1 < iVar1) {
    if (iVar1 < 4) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x586ab4a6,0x96b05f47);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x44ac8987,0xce678ad3);
      uVar3 = 0xb67da102;
    }
    else {
      if (iVar1 != 5) goto LAB_00596577;
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x586ab4a6,0x96b05f47);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x44ac8987,0xce678ad3);
      uVar3 = 0x7540fb04;
    }
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x30ee5e68,uVar3);
  }
LAB_00596577:
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0xff115fff);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1f0),0xd0b8aa33);
  local_1c = 0x8569ab44;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    local_1c = 0x8569a25f;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (-1 < iVar1) {
    if (iVar1 < 5) {
      if (0 < *(int *)(param_1 + 0x1cc)) {
        local_1c = 1;
        do {
          iVar9 = 0;
          iVar4 = FUN_005dbed0(0);
          iVar1 = *(int *)(iVar4 + 0x10);
          while (iVar1 != local_1c) {
            iVar4 = FUN_005dbed0(iVar9);
            iVar9 = iVar9 + 1;
            iVar1 = *(int *)(iVar4 + 0x10);
          }
          puVar5 = _malloc(0x54);
          local_4 = 0;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(param_1 + 0x1b8));
            uVar3 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar3);
            uVar6 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(param_1 + 0x1b8));
            uVar6 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar6);
            uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(param_1 + 0x1b8));
            uVar7 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar7);
            FUN_005951e0(uVar6,uVar3,uVar7,iVar4);
            *puVar5 = &PTR_FUN_008a1a88;
          }
          local_4 = 0xffffffff;
          uVar3 = FUN_00573140("LINE%d_GROUP",*(undefined4 *)(param_1 + 0x1b8),0x1744b3,1);
          FUN_00524920(*(undefined4 *)(param_1 + 0x1c0),uVar3);
          if (puVar5 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = puVar5 + 1;
          }
          puVar5 = *(undefined4 **)(param_1 + 0x1b4);
          *puVar5 = piVar8;
          *(int **)(param_1 + 0x1b4) = piVar8;
          piVar8[1] = (int)puVar5;
          *piVar8 = param_1 + 0x1b0;
          *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
          bVar2 = local_1c < *(int *)(param_1 + 0x1cc);
          local_1c = local_1c + 1;
        } while (bVar2);
      }
    }
    else if ((iVar1 == 5) && (0 < *(int *)(param_1 + 0x1cc))) {
      local_24 = 1;
      do {
        iVar9 = 0;
        iVar4 = FUN_005dbed0(0);
        iVar1 = *(int *)(iVar4 + 0x10);
        while (iVar1 != local_24) {
          iVar4 = FUN_005dbed0(iVar9);
          iVar9 = iVar9 + 1;
          iVar1 = *(int *)(iVar4 + 0x10);
        }
        local_20 = *(float *)(iVar4 + 0x120);
        if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\0') {
          local_20 = local_20 * _DAT_008a0294 * _DAT_008967e0;
        }
        puVar5 = _malloc(0x60);
        local_4 = 1;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar3 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(param_1 + 0x1b8));
          uVar3 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar3);
          uVar6 = FUN_00573140(&DAT_008a0dac,"COLUMN2_DATA",*(undefined4 *)(param_1 + 0x1b8));
          uVar6 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar6);
          uVar7 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(param_1 + 0x1b8));
          uVar7 = FUN_005251e0(*(undefined4 *)(param_1 + 0x1c0),uVar7);
          FUN_005951e0(uVar6,uVar3,uVar7,iVar4);
          *puVar5 = &PTR_FUN_008a1a50;
          puVar5[0x15] = local_1c;
          puVar5[0x16] = local_20;
          puVar5[0x17] = "%$0.0f";
        }
        local_4 = 0xffffffff;
        FUN_0057d6a0(puVar5);
        bVar2 = local_24 < *(int *)(param_1 + 0x1cc);
        local_24 = local_24 + 1;
      } while (bVar2);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

