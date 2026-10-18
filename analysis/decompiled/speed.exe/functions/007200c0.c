/* speed.exe 007200c0 FUN_007200c0; analysis pseudocode, not buildable source.
 * calls 006e8e90 FUN_006e8e90
 * calls 00706da0 FUN_00706da0
 * calls 00652ad0 _malloc
 * calls 006ee9b0 FUN_006ee9b0
 * calls 0045da30 FUN_0045da30
 * calls 00456050 FUN_00456050
 * calls 0070d880 FUN_0070d880
 * calls 0045a760 FUN_0045a760
 * calls 00708180 FUN_00708180
 * calls 007067b0 FUN_007067b0
 * calls 00700370 FUN_00700370
 * calls 00710b90 FUN_00710b90
 * calls 004ab1c0 FUN_004ab1c0
 * calls 006e9c60 FUN_006e9c60
 * calls 00706690 FUN_00706690
 * calls 00465fd0 FUN_00465fd0
 * calls 005cc240 FUN_005cc240
 * calls 00711f30 FUN_00711f30
 * calls 00707eb0 FUN_00707eb0
 * calls 006f94d0 FUN_006f94d0
 * calls 005d0370 FUN_005d0370
 * calls 004662e0 FUN_004662e0
 * calls 0071e370 FUN_0071e370
 * calls 00706720 FUN_00706720
 * calls 007011e0 FUN_007011e0
 * calls 006fe980 FUN_006fe980
 * calls 00706600 FUN_00706600
 * calls 0071fec0 FUN_0071fec0
 * calls 006fe680 FUN_006fe680
 * calls 00706570 FUN_00706570
 * calls 00716c50 FUN_00716c50
 */

undefined4 * __fastcall FUN_007200c0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_30;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088049d;
  local_c = ExceptionList;
  local_30 = (char *)0x7200e9;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0();
  param_1[0x12] = &PTR___purecall_00890d38;
  DAT_00993cc8 = param_1;
  if (param_1 + 0x13 == (undefined4 *)0x0) {
    DAT_00993cc8 = (undefined4 *)0x0;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_008b24e4;
  param_1[2] = &PTR_LAB_008b24dc;
  param_1[0xb] = &PTR_LAB_008b24c8;
  param_1[0xe] = &PTR_LAB_008b24ac;
  param_1[0x12] = &PTR_LAB_008b24a8;
  local_30 = (char *)0x72013e;
  local_18 = (undefined4 *)FUN_005cc240();
  local_30 = (char *)0x0;
  uVar2 = FUN_006ee9b0(&local_18,0x3dcccccd);
  param_1[0x13] = uVar2;
  local_30 = (char *)0x720164;
  local_18 = (undefined4 *)FUN_005cc240();
  local_30 = (char *)0x0;
  uVar2 = FUN_006ee9b0(&local_18,0x3e800000);
  local_14 = param_1 + 0x16;
  param_1[0x14] = uVar2;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_4._0_1_ = 2;
  local_30 = (char *)0x7201a0;
  FUN_00711f30();
  local_4._0_1_ = 3;
  FUN_00716c50();
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x39] = &PTR_FUN_008b2658;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = DAT_008a2fb4;
  param_1[0x44] = DAT_008a2fb8;
  param_1[0x45] = DAT_008a2fbc;
  param_1[0x49] = DAT_008a2fb4;
  param_1[0x4a] = DAT_008a2fb8;
  local_4._0_1_ = 5;
  param_1[0x4b] = DAT_008a2fbc;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 1;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_30 = (char *)0x0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  param_1[0x59] = 0;
  FUN_004ab1c0(0);
  local_30 = (char *)0x0;
  local_4._0_1_ = 6;
  FUN_006fe680(0);
  local_30 = (char *)0x0;
  local_4._0_1_ = 7;
  FUN_006fe980(0);
  param_1[0x75] = 2;
  param_1[0x76] = 5;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x7a] = 0xffffffff;
  param_1[0x7d] = 0xffffffff;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  local_14 = &local_30;
  param_1[0x8a] = DAT_00925ae8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  local_30 = (char *)0x20d60dbf;
  uVar2 = FUN_00706570(param_1,FUN_00700f70,0);
  local_14 = &local_30;
  local_18 = &local_30;
  param_1[0x8f] = uVar2;
  uVar2 = FUN_005cc240("AIRacerBusted");
  *local_18 = uVar2;
  uVar2 = FUN_00706570(param_1,&LAB_0070ad10,0);
  local_14 = &local_30;
  param_1[0x90] = uVar2;
  local_30 = (char *)0x20d60dbf;
  uVar2 = FUN_00706600(param_1,&LAB_0071f6c0,0);
  local_14 = &local_30;
  local_18 = &local_30;
  param_1[0x92] = uVar2;
  uVar2 = FUN_005cc240("Infraction");
  *local_18 = uVar2;
  uVar2 = FUN_00706690(param_1,&LAB_00700fd0,0);
  local_14 = &local_30;
  local_18 = &local_30;
  param_1[0x93] = uVar2;
  uVar2 = FUN_005cc240("SoundAI");
  *local_18 = uVar2;
  uVar2 = FUN_00706720(param_1,&LAB_0071b940,0);
  local_14 = &local_30;
  local_18 = &local_30;
  param_1[0x94] = uVar2;
  uVar2 = FUN_005cc240("TireBlo");
  *local_18 = uVar2;
  uVar2 = FUN_007067b0(param_1,FUN_007132a0,0);
  param_1[0x95] = uVar2;
  DAT_009922b4 = 1;
  iVar3 = param_1[0x3b];
  if (iVar3 != 0) {
    local_30 = (char *)((param_1[0x3d] - iVar3 >> 2) * 4);
    FUN_005d0370(iVar3);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x77] = 0x46fffe00;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  local_30 = (char *)param_1[0x13];
  FUN_006e8e90();
  FUN_006e8e90(param_1[0x14],"Speech");
  FUN_00456050(0xbc683501,0);
  local_30 = (char *)0x72050f;
  FUN_0045a760();
  local_30 = (char *)0x551e22b3;
  FUN_00456050();
  local_30 = (char *)0x720525;
  FUN_0045a760();
  local_30 = "VoiceActors slotpool";
  iVar3 = FUN_004662e0(0xa0,10);
  param_1[0x8e] = iVar3;
  *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & 0xfffffffe;
  *(uint *)(param_1[0x8e] + 0x14) = *(uint *)(param_1[0x8e] + 0x14) & 0xfffffff7;
  iVar3 = DAT_00911fbc;
  if ((DAT_00993cc8 != (undefined4 *)0x0) &&
     (*(int *)(DAT_00993cc8[0x8e] + 0x18) != *(int *)(DAT_00993cc8[0x8e] + 0x2c))) {
    local_30 = (char *)0x1;
    iVar3 = FUN_00465fd0();
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    local_30 = (char *)0x720589;
    uVar2 = FUN_00700370();
  }
  param_1[0x36] = uVar2;
  local_30 = (char *)0x72059a;
  local_14 = _malloc(0x20);
  local_4._0_1_ = 9;
  if (local_14 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0071e370();
  }
  local_4._0_1_ = 8;
  param_1[0x7f] = uVar2;
  local_30 = (char *)0x7205c7;
  local_14 = _malloc(0x48);
  local_4._0_1_ = 10;
  if (local_14 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00707eb0();
  }
  local_4._0_1_ = 8;
  param_1[0x80] = uVar2;
  local_30 = (char *)0x7205f7;
  local_14 = _malloc(0xa0);
  local_4._0_1_ = 0xb;
  if (local_14 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0071fec0();
  }
  local_4._0_1_ = 8;
  param_1[0x81] = uVar2;
  local_30 = (char *)0x720624;
  local_14 = _malloc(0x44);
  local_4._0_1_ = 0xc;
  if (local_14 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00708180();
  }
  local_4._0_1_ = 8;
  param_1[0x82] = uVar2;
  local_30 = (char *)0x720651;
  local_14 = _malloc(100);
  local_4._0_1_ = 0xd;
  if (local_14 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0070d880();
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x83] = uVar2;
  puVar5 = param_1 + 0x6d;
  iVar3 = 2;
  do {
    local_30 = (char *)0x72068a;
    uVar2 = FUN_007011e0();
    puVar5[-4] = uVar2;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[-3] = 0;
    puVar5 = puVar5 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x73] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  local_18 = (undefined4 *)0x3;
  do {
    iVar3 = param_1[0x1b];
    local_30 = (char *)(param_1 + 0x1a);
    if ((iVar3 == 0) || ((uint)(param_1[0x1d] - iVar3 >> 2) <= (uint)(param_1[0x1c] - iVar3 >> 2)))
    {
      local_30 = (char *)0x1;
      FUN_00710b90(param_1[0x1c]);
    }
    else {
      iVar3 = param_1[0x1c];
      local_14 = (undefined4 *)((uint)local_14 & 0xffffff00);
      FUN_00706da0(iVar3,1,&local_18);
      param_1[0x1c] = iVar3 + 4;
    }
    local_18 = (undefined4 *)((int)local_18 + 1);
  } while ((int)local_18 < 10);
  puVar5 = (undefined4 *)0x0;
  while ((local_18 = puVar5, param_1[0x1b] != 0 &&
         (puVar5 < (undefined4 *)((int)(param_1[0x1c] - param_1[0x1b]) >> 2)))) {
    local_30 = (char *)0x72075a;
    iVar4 = FUN_0045da30();
    iVar3 = param_1[0x1b];
    local_14 = *(undefined4 **)(iVar3 + (int)puVar5 * 4);
    pvVar1 = *(void **)(iVar4 * 4 + iVar3);
    if (pvVar1 != local_14) {
      *(void **)(iVar3 + (int)local_18 * 4) = pvVar1;
      *(undefined4 **)(param_1[0x1b] + iVar4 * 4) = local_14;
    }
    puVar5 = (undefined4 *)((int)local_18 + 1);
  }
  local_30 = (char *)param_1[0x13];
  FUN_006e9c60();
  local_30 = (char *)param_1[0x14];
  FUN_006e9c60();
  ExceptionList = local_c;
  return param_1;
}

