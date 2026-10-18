/* speed.exe 00442d00 FUN_00442d00; analysis pseudocode, not buildable source.
 * calls 005dcee0 FUN_005dcee0
 * calls 005fc560 FUN_005fc560
 * calls 005faa20 FUN_005faa20
 * calls 005fc2c0 FUN_005fc2c0
 * calls 00418000 FUN_00418000
 * calls 006f94d0 FUN_006f94d0
 * calls 005d29d0 FUN_005d29d0
 * calls 005dcf00 FUN_005dcf00
 * calls 005fc380 FUN_005fc380
 * calls 00433080 FUN_00433080
 * calls 00438430 FUN_00438430
 * calls 005fc3e0 FUN_005fc3e0
 * calls 005dcf20 FUN_005dcf20
 * calls 0042e1e0 FUN_0042e1e0
 * calls 006ee9b0 FUN_006ee9b0
 * calls 00424530 FUN_00424530
 * calls 0041ae90 FUN_0041ae90
 * calls 00440330 FUN_00440330
 * calls 0042b410 FUN_0042b410
 * calls 006e8e90 FUN_006e8e90
 * calls 005cc240 FUN_005cc240
 * calls 00409e60 FUN_00409e60
 * calls 005fc440 FUN_005fc440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00442d00(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008698da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = param_1;
  FUN_006f94d0(1);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 4;
  }
  FUN_0042e1e0(puVar2);
  param_1[0x12] = &PTR_LAB_00892770;
  *param_1 = &PTR_FUN_008928ec;
  param_1[2] = &PTR_LAB_008928e4;
  param_1[0xb] = &PTR_LAB_008928d0;
  param_1[0xe] = &PTR_LAB_008928b4;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = &PTR_FUN_008918d8;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  param_1[0x50] = 0;
  local_4._0_1_ = 3;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x42700000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 1;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0xc0a00000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  FUN_00433080();
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  local_20 = FUN_005cc240("AIPursuit");
  uVar3 = FUN_006ee9b0(&local_20,0x3e800000,0,1);
  param_1[0x15] = uVar3;
  local_20 = FUN_005cc240("AIPursuit");
  uVar3 = FUN_006ee9b0(&local_20,0x3f800000,0,1);
  param_1[0x16] = uVar3;
  FUN_006e8e90(param_1[0x15],"AIPursuit");
  iVar4 = param_1[0x1a];
  iVar5 = iVar4;
  if (0 < iVar4) {
    do {
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[0x1a] = iVar5;
  }
  if (param_1[0x18] != 0) {
    (**(code **)(param_1[0x17] + 8))(param_1[0x18],param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  FUN_0041ae90(0x14);
  param_1[0x44] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  iVar4 = FUN_005d29d0(0x40,0);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00418000(0);
  }
  param_1[0x2f] = uVar3;
  FUN_00409e60();
  local_18 = 0;
  param_1[0x58] = 0;
  local_14 = 0;
  param_1[0x59] = 0;
  local_10 = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0xbf800000;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x5a] = 0;
  FUN_00438430(5);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (*(int *)(DAT_0091e000 + 0x1964) != 2)) {
    if ((*(int *)(DAT_0091e000 + 0x1964) == 0) &&
       ((*(int *)(DAT_0091e000 + 0x1968) == 0 || (iVar4 = FUN_005faa20(), iVar4 != 8)))) {
      param_1[0x39] = 0x3f800000;
      param_1[0x3a] = 0x40a00000;
      goto LAB_00443171;
    }
    if (*(int *)(DAT_0091e000 + 0x196c) == 0) {
      fVar6 = (float10)_DAT_00890968;
    }
    else {
      fVar6 = (float10)FUN_005dcee0();
    }
    param_1[0x39] = (float)fVar6;
    if (*(int *)(DAT_0091e000 + 0x196c) == 0) {
      fVar6 = (float10)_DAT_00890bf8;
    }
    else {
      fVar6 = (float10)FUN_005dcf00();
    }
    param_1[0x3a] = (float)fVar6;
    if (*(int *)(DAT_0091e000 + 0x196c) == 0) {
      fVar6 = (float10)_DAT_0089096c;
    }
    else {
      fVar6 = (float10)FUN_005dcf20();
    }
    param_1[0x3b] = (float)fVar6;
    if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
       (cVar1 = FUN_005fc380(), cVar1 == '\0')) {
      if ((*(int *)(DAT_0091e000 + 0x1968) == 0) ||
         (fVar6 = (float10)FUN_005fc2c0(), (float10)(float)param_1[0x3a] <= fVar6))
      goto LAB_00443171;
      fVar6 = (float10)FUN_005fc2c0();
    }
    else {
      fVar6 = (float10)FUN_005fc3e0();
      param_1[0x39] = (float)fVar6;
      fVar6 = (float10)FUN_005fc440();
      param_1[0x3b] = 0x3f800000;
    }
  }
  else {
    cVar1 = FUN_005fc560();
    if (cVar1 != '\0') {
      param_1[0x3a] = 0x40c00000;
      param_1[0x39] = 0x40c00000;
      goto LAB_00443171;
    }
    if (*(int *)(DAT_0091e000 + 0x196c) == 0) {
      fVar6 = (float10)_DAT_00890968;
    }
    else {
      fVar6 = (float10)FUN_005dcee0();
    }
    param_1[0x39] = (float)fVar6;
    if (*(int *)(DAT_0091e000 + 0x196c) == 0) {
      fVar6 = (float10)_DAT_00890bf8;
    }
    else {
      fVar6 = (float10)FUN_005dcf00();
    }
  }
  param_1[0x3a] = (float)fVar6;
LAB_00443171:
  param_1[0x38] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 7;
  FUN_00440330(0);
  param_1[0x45] = 0;
  param_1[0x46] = 0x41200000;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((int)param_1 + 0x11d) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 1;
  param_1[0x4f] = 0;
  uVar3 = FUN_005cc240(0);
  param_1[0x50] = uVar3;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x96] = 0x41200000;
  *(undefined1 *)(param_1 + 0x97) = 0;
  FUN_0042b410();
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0x447a0000;
  param_1[0x9a] = 0x47c35000;
  ExceptionList = local_c;
  return param_1;
}

