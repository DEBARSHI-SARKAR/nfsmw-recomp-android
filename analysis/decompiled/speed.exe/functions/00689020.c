/* speed.exe 00689020 FUN_00689020; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005cc240 FUN_005cc240
 * calls 006f1220 FUN_006f1220
 * calls 00685240 FUN_00685240
 * calls 006883e0 FUN_006883e0
 * calls 005d29d0 FUN_005d29d0
 * calls 00675ab0 FUN_00675ab0
 * calls 00423750 FUN_00423750
 * calls 006269b0 FUN_006269b0
 * calls 00403c30 FUN_00403c30
 * calls 0067f4c0 FUN_0067f4c0
 * calls 0067eca0 FUN_0067eca0
 * calls 005d7930 FUN_005d7930
 * calls 006ee9b0 FUN_006ee9b0
 * calls 006864a0 FUN_006864a0
 * calls 0041ae90 FUN_0041ae90
 * calls 00454810 FUN_00454810
 * calls 006459e0 FUN_006459e0
 */

undefined4 * __thiscall
FUN_00689020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined4 *puStack_b0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 *local_90;
  undefined4 auStack_8c [16];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087bce0;
  pvStack_c = ExceptionList;
  puStack_b0 = (undefined4 *)0x18;
  puStack_b4 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x1;
  ExceptionList = &pvStack_c;
  local_90 = param_1;
  FUN_006883e0(param_3);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar7 = param_1 + 0x2b;
  puStack_b4 = &LAB_004040e0;
  *puVar7 = &PTR_FUN_00890970;
  param_1[0x2c] = puVar5;
  puStack_b8 = (undefined1 *)0x689085;
  puStack_b0 = puVar7;
  FUN_005d7930();
  *puVar7 = &PTR_FUN_008aa150;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar1 = param_1 + 0x2d;
  puStack_b4 = &LAB_00668440;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x2e] = puVar5;
  puStack_b8 = (undefined1 *)0x6890b8;
  puStack_b0 = puVar1;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a9410;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 4;
  }
  puVar1 = param_1 + 0x2f;
  puStack_b4 = &LAB_006680f0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x30] = puVar5;
  puStack_b8 = (undefined1 *)0x6890eb;
  puStack_b0 = puVar1;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a93ec;
  param_1[0x31] = &PTR___purecall_008a94b0;
  puStack_b0 = (undefined4 *)param_3;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008aa9d8;
  param_1[2] = &PTR_LAB_008aa9d0;
  param_1[0xb] = &PTR_LAB_008aa940;
  param_1[0xe] = &PTR_LAB_008aa920;
  param_1[0x10] = &PTR_LAB_008aa904;
  *puVar7 = &PTR_LAB_008aa828;
  param_1[0x2d] = &PTR_LAB_008aa81c;
  *puVar1 = &PTR_LAB_008aa814;
  param_1[0x31] = &PTR_LAB_008aa810;
  puStack_b4 = (undefined1 *)0x689159;
  FUN_00403c30();
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = DAT_008a2fb4;
  param_1[0x4e] = DAT_008a2fb8;
  param_1[0x4f] = DAT_008a2fbc;
  param_1[0x50] = param_2;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x3f800000;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 1;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  local_4._0_1_ = 4;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  puStack_b0 = (undefined4 *)0x689257;
  iVar4 = FUN_00675ab0();
  param_1[0x5b] = iVar4;
  *(undefined1 *)(iVar4 + 0x15) = 1;
  *(undefined4 *)(param_1[0x5b] + 4) = param_1[0x5b];
  *(undefined4 *)param_1[0x5b] = param_1[0x5b];
  *(undefined4 *)(param_1[0x5b] + 8) = param_1[0x5b];
  param_1[0x5c] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = param_6;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x189) = 0;
  param_1[99] = *param_8;
  param_1[100] = param_8[1];
  param_1[0x65] = param_8[2];
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = param_10;
  *(undefined1 *)(param_1 + 0x69) = 0;
  if (param_9 != (undefined4 *)0x0) {
    param_1[0x66] = *param_9;
    param_1[0x67] = param_9[1];
    param_1[0x68] = param_9[2];
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  puVar5 = param_1 + 0x32;
  *DAT_0092c514 = puVar5;
  puVar7 = puVar5;
  param_1[0x33] = DAT_0092c514;
  DAT_0092c514 = puVar7;
  *puVar5 = &DAT_0092c510;
  puStack_b0 = param_1 + 0xb;
  puStack_b4 = (undefined1 *)0x68933f;
  FUN_00423750();
  if (param_7 != (undefined4 *)0x0) {
    puStack_b0 = (undefined4 *)0x0;
    puStack_b4 = (undefined1 *)0x198;
    puStack_b8 = (undefined1 *)0x68935d;
    puVar5 = (undefined4 *)FUN_005d29d0();
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar7 = puVar5;
      for (iVar4 = 0x66; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *param_7;
        param_7 = param_7 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    param_1[0x39] = puVar5;
  }
  puStack_b0 = (undefined4 *)0x0;
  puStack_b4 = (undefined1 *)0xef6ddf2;
  puStack_b8 = (undefined1 *)0x689385;
  iVar4 = FUN_00454810();
  if (iVar4 == 0) {
    puStack_b0 = (undefined4 *)0x10;
    puStack_b4 = (undefined1 *)0x689390;
    iVar4 = FUN_006269b0();
  }
  param_1[0x46] = *(undefined4 *)(iVar4 + 8);
  if (param_1 == (undefined4 *)0xffffff4c) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_1 + 0x2b;
  }
  if (DAT_0092cd20 <= DAT_0092cd24) {
    puStack_b0 = (undefined4 *)(DAT_0092cd24 + 1);
    puStack_b4 = (undefined1 *)0x6893ca;
    puStack_b0 = (undefined4 *)(**(code **)(DAT_0092cd18 + 0xc))();
    puStack_b4 = (undefined1 *)0x6893d5;
    FUN_0041ae90();
  }
  piVar2 = (int *)(DAT_0092cd1c + DAT_0092cd24 * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)puVar5;
  }
  DAT_0092cd24 = DAT_0092cd24 + 1;
  puStack_b0 = (undefined4 *)0x6893fd;
  FUN_0067eca0();
  puStack_b0 = (undefined4 *)&DAT_008aaa1c;
  if (param_1[0x50] == 0) {
    puStack_b4 = (undefined1 *)0x689448;
    puStack_9c = (undefined1 *)FUN_005cc240();
    puStack_b8 = (undefined1 *)0x3f800000;
    ppuVar9 = &puStack_9c;
  }
  else if (param_1[0x50] == 1) {
    puStack_b4 = (undefined1 *)0x68942e;
    puStack_98 = (undefined1 *)FUN_005cc240();
    puStack_b8 = (undefined1 *)0x3e800000;
    ppuVar9 = &puStack_98;
  }
  else {
    puStack_b4 = (undefined1 *)0x689414;
    puStack_94 = (undefined1 *)FUN_005cc240();
    puStack_b8 = (undefined1 *)0x3f000000;
    ppuVar9 = &puStack_94;
  }
  puStack_b0 = (undefined4 *)0x0;
  puStack_b4 = (undefined1 *)0x0;
  uVar6 = FUN_006ee9b0(ppuVar9);
  param_1[0x45] = uVar6;
  puStack_b0 = (undefined4 *)0x68946f;
  FUN_0067f4c0();
  if ((int *)param_1[0x3e] != (int *)0x0) {
    puStack_b0 = (undefined4 *)0x68947e;
    (**(code **)(*(int *)param_1[0x3e] + 0x10))();
  }
  puStack_b0 = (undefined4 *)0x0;
  puStack_b4 = (undefined1 *)param_4;
  puStack_b8 = auStack_4c;
  param_1[0x52] = 0;
  puVar5 = (undefined4 *)FUN_006f1220();
  puStack_b0 = auStack_8c;
  puVar7 = auStack_8c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puStack_b4 = (undefined1 *)param_5;
  puStack_b8 = (undefined1 *)0x6894bb;
  FUN_00685240();
  if (param_1 == (undefined4 *)0xffffffd4) {
    uRam00000034 = 0;
  }
  else {
    param_1[0x18] = param_1[0xd];
  }
  puStack_b0 = (undefined4 *)0x0;
  puStack_b4 = (undefined1 *)0x5aab860f;
  puStack_b8 = (undefined1 *)0x6894de;
  iVar4 = FUN_00454810();
  if (iVar4 == 0) {
    puStack_b0 = (undefined4 *)0x10;
    puStack_b4 = (undefined1 *)0x6894e9;
    iVar4 = FUN_006269b0();
  }
  pcVar3 = *(char **)(iVar4 + 0xc);
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    puStack_b0 = (undefined4 *)0x3f800000;
    puStack_b4 = (undefined1 *)0x68950a;
    fVar8 = (float10)FUN_006e8de0();
    puStack_9c = (undefined1 *)&puStack_b8;
    puStack_b4 = (undefined1 *)(float)fVar8;
    puStack_b8 = (undefined1 *)FUN_005cc240(pcVar3);
    uVar6 = FUN_006459e0(param_1 + 4,param_1 + 0x2d);
    param_1[0x44] = uVar6;
  }
  puStack_b0 = (undefined4 *)0x1;
  puStack_b4 = (undefined1 *)0x689544;
  FUN_006864a0();
  ExceptionList = pvStack_c;
  return param_1;
}

