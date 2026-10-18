/* speed.exe 006f47a0 FUN_006f47a0; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00401dc0 FUN_00401dc0
 * calls 0056f100 FUN_0056f100
 * calls 00748130 FUN_00748130
 * calls 007897c0 FUN_007897c0
 * calls 005fc5c0 FUN_005fc5c0
 * calls 00460bc0 FUN_00460bc0
 * calls 005cc240 FUN_005cc240
 * calls 005dca00 FUN_005dca00
 * calls 0056dbe0 FUN_0056dbe0
 * calls 006f2800 FUN_006f2800
 * calls 00454640 FUN_00454640
 * calls 005fc620 FUN_005fc620
 * calls 0041cb10 FUN_0041cb10
 * calls 005d59f0 FUN_005d59f0
 * calls 004040f0 FUN_004040f0
 * calls 00581c20 FUN_00581c20
 * calls 0056f340 FUN_0056f340
 * calls 0056ecf0 FUN_0056ecf0
 * calls 0056f120 FUN_0056f120
 * calls 0056f7b0 FUN_0056f7b0
 * calls 004655f0 FUN_004655f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f47a0(int param_1,float *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  float *local_584;
  float *local_580;
  char *local_57c;
  float local_56c;
  float local_568;
  float local_564;
  undefined1 *local_560;
  int local_55c;
  undefined4 local_558;
  float local_554;
  float local_550;
  float local_54c;
  float local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 *local_53c;
  undefined4 *local_538;
  undefined4 uStack_534;
  int local_530;
  float *local_52c;
  float *local_528;
  float *local_524;
  undefined4 *local_520;
  undefined4 *local_51c;
  undefined4 local_518;
  uint local_514;
  int local_510;
  uint local_50c;
  undefined4 *local_508;
  undefined4 local_504;
  undefined4 local_500 [102];
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  int iStack_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 *local_350;
  undefined4 local_34c;
  undefined4 local_348 [102];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a0 [103];
  
  local_56c = *param_2;
  local_568 = param_2[1];
  local_564 = param_2[2];
  local_54c = *(float *)(param_1 + 0x7c);
  local_548 = *(float *)(param_1 + 0x80);
  local_544 = *(undefined4 *)(param_1 + 0x84);
  if (*(int *)(DAT_009b3918 + 0x14) == 0) {
    local_56c = DAT_008a2fb4;
    local_568 = DAT_008a2fb8;
    local_564 = DAT_008a2fbc;
  }
  local_57c = (char *)0x0;
  local_580 = &local_550;
  local_584 = &local_56c;
  local_550 = 0.0;
  local_55c = 0;
  local_558 = 3;
  local_588 = 0x6f4834;
  local_560 = (undefined1 *)param_1;
  cVar3 = FUN_007897c0();
  if (cVar3 != '\0') {
    local_568 = local_550 + _DAT_0089096c;
  }
  local_554 = 1.0;
  local_510 = 0;
  local_50c = 0xb;
  local_508 = (undefined4 *)0x0;
  local_504 = 0;
  local_57c = (char *)0x6f486b;
  FUN_00581c20();
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  if (((DAT_00926064 == 0) || (PTR_s_bmwm3gtre46_008f86a8 == (undefined *)0x0)) ||
     (*PTR_s_bmwm3gtre46_008f86a8 == '\0')) {
    local_57c = (char *)0x6f48cf;
    iVar5 = FUN_005dca00();
    if (iVar5 != 0) {
      local_57c = (char *)0x6f48e0;
      local_57c = (char *)FUN_005fc5c0();
      if ((local_57c != (char *)0x0) && (*local_57c != '\0')) {
        local_580 = (float *)0x6f48ef;
        local_580 = (float *)FUN_00460bc0();
        local_584 = (float *)0x6f48f5;
        iVar5 = FUN_00748130();
        if (iVar5 != 0) {
          local_510 = *(int *)(iVar5 + 0x50);
          local_50c = local_50c | 0x10;
          local_57c = (char *)0x6f491c;
          FUN_00581c20();
          local_580 = (float *)0x6f4929;
          local_57c = (char *)iVar5;
          FUN_0056f340();
          puVar4 = local_1a0;
          puVar8 = local_500;
          for (iVar5 = 0x66; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          local_508 = local_500;
          local_57c = (char *)0x6f494a;
          fVar9 = (float10)FUN_005fc620();
          local_57c = (char *)(float)fVar9;
          local_580 = (float *)0x6f4957;
          FUN_006f2800();
        }
      }
    }
    if (local_510 == 0) {
      local_57c = (char *)0xb;
      local_580 = (float *)0x6f4970;
      iVar5 = FUN_0056dbe0();
      uVar7 = *(undefined4 *)(iVar5 + 0x10);
      if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
        iVar5 = *(int *)(DAT_0091cf90 + 0x10);
        uVar7 = *(undefined4 *)(iVar5 + 0xa8);
        if (((undefined4 *)(iVar5 + 0xa8) != (undefined4 *)0x0) && (iVar5 != -0x414)) {
          local_57c = *(char **)(iVar5 + 0xa8);
          local_580 = (float *)0x6f49a8;
          iVar5 = FUN_0056ecf0();
          if (iVar5 != 0) {
            local_57c = (char *)(uint)*(byte *)(iVar5 + 0x11);
            local_580 = (float *)0x6f49b9;
            iVar5 = FUN_0056f120();
            if (iVar5 != 0) {
              local_57c = (char *)0x6f49c4;
              fVar9 = (float10)FUN_0056f7b0();
              local_57c = (char *)(float)fVar9;
              local_580 = (float *)0x3f800000;
              local_584 = (float *)0x6f49d2;
              fVar9 = (float10)FUN_00401dc0();
              local_554 = (float)fVar9;
            }
          }
        }
      }
      local_580 = (float *)0x6f49ef;
      local_57c = (char *)uVar7;
      iVar5 = FUN_0056ecc0();
      local_510 = *(int *)(iVar5 + 8);
      local_57c = (char *)(uint)*(byte *)(iVar5 + 0x10);
      local_580 = (float *)0x6f4a03;
      puVar4 = (undefined4 *)FUN_0056f100();
      if (puVar4 != (undefined4 *)0x0) {
        local_508 = local_500;
        puVar8 = local_500;
        for (iVar5 = 0x66; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
  }
  else {
    local_57c = PTR_s_bmwm3gtre46_008f86a8;
    local_580 = (float *)0x6f48a8;
    local_510 = FUN_00454640();
    local_57c = (char *)DAT_00926078;
    local_580 = (float *)0x6f48bf;
    FUN_006f2800();
  }
  local_358 = 0;
  local_354 = 0xb;
  local_350 = (undefined4 *)0x0;
  local_34c = 0;
  local_57c = (char *)0x6f4a4b;
  FUN_00581c20();
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_354 = 0xb;
  if (DAT_00988e04 == 1) {
    if (DAT_00926064 == 0) {
      local_57c = (char *)(DAT_0091cf90 + 0x470);
      local_580 = (float *)0x6f4a96;
      local_358 = FUN_00454640();
      if (*(undefined4 **)(DAT_0091cf90 + 0x46c) != (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(DAT_0091cf90 + 0x46c);
        puVar8 = local_348;
        for (iVar5 = 0x66; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        local_350 = local_348;
        local_57c = *(char **)(DAT_0091cf90 + 0x46c);
        local_580 = (float *)0x6f4ad7;
        FUN_004655f0();
      }
    }
    else {
      local_57c = PTR_s_911turbo_008f86ac;
      local_580 = (float *)0x6f4ae5;
      local_358 = FUN_00454640();
    }
  }
  uVar7 = local_504;
  puVar4 = local_508;
  uVar1 = local_50c;
  local_57c = (char *)&local_540;
  local_560 = (undefined1 *)((int)local_560 + 0x58);
  DAT_009b9e64 = 0;
  local_55c = local_510;
  local_580 = (float *)0x6f4b1f;
  FUN_004040f0();
  local_538 = &local_540;
  local_52c = (float *)local_55c;
  local_528 = &local_54c;
  local_524 = &local_56c;
  local_518 = uVar7;
  local_580 = (float *)0x89121c;
  local_53c = (undefined4 *)0xa6b47fac;
  local_530 = 0;
  local_520 = puVar4;
  local_51c = (undefined4 *)local_560;
  local_514 = uVar1;
  local_584 = (float *)0x6f4b71;
  iVar5 = FUN_005cc240();
  piVar6 = DAT_0092c66c;
  do {
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
LAB_006f4b8d:
      if (DAT_0092d884 == 0) {
        local_57c = (char *)0x0;
      }
      else {
        local_57c = (char *)*DAT_0092d87c;
      }
      local_580 = (float *)0x6f4bc8;
      (**(code **)(*piVar6 + 0xc))();
      local_580 = (float *)&LAB_004037e0;
      local_584 = (float *)0x6f4bd5;
      piVar6 = (int *)FUN_005d59f0();
      if (piVar6 != (int *)0x0) {
        local_580 = (float *)local_558;
        local_584 = (float *)0x6f4be5;
        (**(code **)(*piVar6 + 8))();
      }
      puVar4 = local_350;
      uVar2 = local_354;
      uVar7 = local_358;
      if (iStack_35c != 0) {
        local_580 = (float *)&local_544;
        local_560 = (undefined1 *)iStack_35c;
        local_56c = local_54c * _DAT_00890da4 + local_56c;
        local_568 = local_548 * _DAT_00890da4 + local_568;
        local_584 = (float *)0x6f4c4d;
        FUN_004040f0();
        local_584 = (float *)&local_544;
        local_530 = (int)local_560;
        local_52c = &local_550;
        local_528 = (float *)&stack0xfffffa90;
        local_540 = 0xa6b47fac;
        local_520 = (undefined4 *)local_564;
        local_51c = puVar4;
        uStack_534 = 0;
        local_524 = (float *)uVar2;
        local_518 = uVar7;
        uStack_58c = local_544;
        local_560 = (undefined1 *)&uStack_590;
        uStack_590 = 0xa6b47fac;
        local_588 = 0xa6b47fac;
        local_53c = local_584;
        uStack_590 = FUN_005cc240("PVehicle");
        piVar6 = (int *)FUN_0041cb10();
        if (DAT_0092d884 != 0) {
          local_580 = (float *)DAT_0092d87c[DAT_0092d884 + -1];
          local_584 = (float *)0x6f4ce8;
          (**(code **)(*piVar6 + 0xc))();
          return;
        }
        local_580 = (float *)0x0;
        local_584 = (float *)0x6f4cfb;
        (**(code **)(*piVar6 + 0xc))();
      }
      return;
    }
    if (*piVar6 == iVar5) {
      local_588 = local_540;
      local_580 = (float *)&local_540;
      local_584 = (float *)0xa6b47fac;
      uStack_58c = 0x6f4bb7;
      piVar6 = (int *)(*(code *)piVar6[1])();
      goto LAB_006f4b8d;
    }
    piVar6 = (int *)piVar6[2];
  } while( true );
}

