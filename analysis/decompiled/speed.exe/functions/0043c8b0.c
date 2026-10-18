/* speed.exe 0043c8b0 FUN_0043c8b0; analysis pseudocode, not buildable source.
 * calls 0041ba80 FUN_0041ba80
 * calls 006e8e90 FUN_006e8e90
 * calls 00648db0 FUN_00648db0
 * calls 005d7930 FUN_005d7930
 * calls 0041ae90 FUN_0041ae90
 * calls 0041cd10 FUN_0041cd10
 * calls 0041cda0 FUN_0041cda0
 * calls 006fbf80 FUN_006fbf80
 * calls 0041cc80 FUN_0041cc80
 * calls 005cc240 FUN_005cc240
 * calls 0041b0d0 FUN_0041b0d0
 * calls 006ee9b0 FUN_006ee9b0
 * calls 0042e340 FUN_0042e340
 * calls 0041cbf0 FUN_0041cbf0
 * calls 0041ba30 FUN_0041ba30
 * calls 0041b990 FUN_0041b990
 * calls 005d29d0 FUN_005d29d0
 * calls 00424530 FUN_00424530
 * calls 0041b9e0 FUN_0041b9e0
 * calls 006f94d0 FUN_006f94d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0043c8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *extraout_ECX;
  char *extraout_ECX_00;
  int iVar7;
  char *extraout_ECX_01;
  char *local_2c;
  char *pcStack_28;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008691bb;
  local_c = ExceptionList;
  pcStack_28 = (char *)0x2;
  local_2c = (char *)0x43c8d9;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0();
  fVar3 = _DAT_008eb1ac;
  uVar4 = _DAT_008eb1a8;
  param_1[0x12] = &PTR_LAB_00890ec0;
  param_1[0x13] = uVar4;
  param_1[0x14] = fVar3;
  if (fVar3 <= DAT_0090d640) {
    fVar3 = DAT_0090d640;
  }
  DAT_0090d640 = fVar3;
  puVar6 = &DAT_0090d520;
  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 4;
  }
  puVar1 = param_1 + 0x15;
  local_2c = &LAB_00404d80;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x16] = puVar6;
  pcStack_28 = (char *)puVar1;
  FUN_005d7930();
  if (param_1 == (undefined4 *)0xffffffa4) {
    DAT_0092c67c = (undefined4 *)0x0;
  }
  else {
    DAT_0092c67c = param_1 + 0x15;
  }
  *puVar1 = &PTR_FUN_00890f50;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    pcStack_28 = (char *)0x0;
  }
  else {
    pcStack_28 = (char *)(param_1 + 4);
  }
  local_2c = (char *)0x43c985;
  FUN_0042e340();
  param_1[0x17] = &PTR_LAB_008918f0;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_00891978;
  param_1[2] = &PTR_LAB_00891970;
  param_1[0xb] = &PTR_LAB_0089195c;
  param_1[0xe] = &PTR_LAB_00891940;
  param_1[0x12] = &PTR_LAB_0089193c;
  *puVar1 = &PTR_LAB_00891900;
  pcStack_28 = (char *)0x43c9c3;
  uVar4 = FUN_0041b990();
  param_1[0x1b] = uVar4;
  param_1[0x1c] = 0;
  local_4._0_1_ = 4;
  pcStack_28 = (char *)0x43c9d8;
  uVar4 = FUN_0041b9e0();
  param_1[0x1e] = uVar4;
  param_1[0x1f] = 0;
  param_1[0x21] = 8;
  param_1[0x22] = 1;
  param_1[0x23] = 8;
  param_1[0x24] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 8;
  param_1[0x27] = 0;
  param_1[0x28] = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x42700000;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = &PTR_FUN_008918d8;
  local_4._0_1_ = 6;
  pcStack_28 = (char *)0x43ca77;
  uVar4 = FUN_0041ba30();
  param_1[0x4a] = uVar4;
  param_1[0x4b] = 0;
  local_4._0_1_ = 7;
  pcStack_28 = (char *)0x43ca8f;
  uVar4 = FUN_0041ba80();
  param_1[0x4d] = uVar4;
  param_1[0x4e] = 0;
  pcStack_28 = "SoundAI";
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x50] = 0;
  local_2c = (char *)0x43caaa;
  iVar5 = FUN_005cc240();
  piVar2 = DAT_0092c668;
  do {
    if (piVar2 == (int *)0x0) {
      pcStack_28 = (char *)0x0;
      local_2c = (char *)0x0;
LAB_0043cac8:
      param_1[0x50] = pcStack_28;
      if ((pcStack_28 != (char *)0x0) && (local_2c = (char *)0x0, param_1[0x11] != 0)) {
        local_2c = (char *)0x43cadf;
        FUN_006fbf80();
        local_2c = extraout_ECX;
      }
      pcStack_28 = (char *)0x0;
      local_14 = &local_2c;
      uVar4 = FUN_005cc240("AICopManager");
      *local_14 = uVar4;
      uVar4 = FUN_0041cbf0(param_1,&DAT_004062f0,0);
      pcStack_28 = (char *)0x0;
      local_14 = &local_2c;
      param_1[0x53] = uVar4;
      uVar4 = FUN_005cc240("AICopManager");
      *local_14 = uVar4;
      uVar4 = FUN_0041cc80(param_1,&LAB_00406300,0);
      pcStack_28 = (char *)0x0;
      local_14 = &local_2c;
      param_1[0x54] = uVar4;
      uVar4 = FUN_005cc240("AICopManager");
      *local_14 = uVar4;
      uVar4 = FUN_0041cd10(param_1,FUN_00439e60,0);
      pcStack_28 = (char *)0x0;
      local_14 = &local_2c;
      param_1[0x55] = uVar4;
      local_2c = extraout_ECX_00;
      uVar4 = FUN_005cc240("AICopManager");
      *local_14 = uVar4;
      uVar4 = FUN_0041cda0(param_1,&LAB_00406320,0);
      param_1[0x56] = uVar4;
      iVar5 = param_1[0x34];
      iVar7 = iVar5;
      if (0 < iVar5) {
        do {
          iVar7 = iVar7 + -1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_1[0x34] = iVar7;
      }
      if ((char *)param_1[0x32] != (char *)0x0) {
        pcStack_28 = (char *)param_1[0x33];
        local_2c = (char *)param_1[0x32];
        (**(code **)(param_1[0x31] + 8))();
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x34] = 0;
      }
      pcStack_28 = (char *)0x43cbee;
      FUN_0041b0d0();
      pcStack_28 = (char *)0x14;
      local_2c = (char *)0x43cbf7;
      FUN_0041ae90();
      pcStack_28 = "AICopManager";
      local_2c = (char *)0x43cc01;
      local_14 = (undefined4 *)FUN_005cc240();
      pcStack_28 = (char *)0x0;
      local_2c = (char *)0x0;
      local_2c = (char *)FUN_006ee9b0(&local_14,0x3f000000);
      pcStack_28 = "AICopManager";
      param_1[0x20] = local_2c;
      FUN_006e8e90();
      iVar5 = param_1[0x21];
      if ((int)param_1[0x23] < (int)param_1[0x21]) {
        iVar5 = param_1[0x23];
      }
      param_1[0x21] = iVar5;
      if ((0 < DAT_00926088) || (0 < DAT_0092608c)) {
        if (DAT_00926088 < iVar5) {
          iVar5 = DAT_00926088;
        }
        param_1[0x26] = iVar5;
        iVar5 = param_1[0x22];
        if (DAT_0092608c < (int)param_1[0x22]) {
          iVar5 = DAT_0092608c;
        }
        param_1[0x28] = iVar5;
      }
      if ((DAT_00926064 == 0) || (DAT_0090d5ec = 1, DAT_008f86c0 == 0)) {
        DAT_0090d5ec = 0;
      }
      pcStack_28 = (char *)0x0;
      local_2c = (char *)0x28c;
      local_14 = (undefined4 *)FUN_005d29d0();
      local_4 = CONCAT31(local_4._1_3_,9);
      if (local_14 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        pcStack_28 = (char *)0x0;
        local_2c = "AICopManager";
        uVar4 = FUN_00648db0(0,0x98c7a2f5);
      }
      param_1[0x4f] = uVar4;
      param_1[0x51] = 0;
      _DAT_0090d5f4 = param_1;
      ExceptionList = local_c;
      return param_1;
    }
    if (*piVar2 == iVar5) {
      local_2c = (char *)0x0;
      pcStack_28 = (char *)(*(code *)piVar2[1])(0,0);
      local_2c = extraout_ECX_01;
      goto LAB_0043cac8;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

