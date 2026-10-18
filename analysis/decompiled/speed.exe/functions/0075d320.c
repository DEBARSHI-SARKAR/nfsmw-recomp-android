/* speed.exe 0075d320 FUN_0075d320; analysis pseudocode, not buildable source.
 * calls 007591c0 FUN_007591c0
 * calls 0075d220 FUN_0075d220
 * calls 0066bee0 FUN_0066bee0
 * calls 007327e0 FUN_007327e0
 * calls 00407510 FUN_00407510
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 004e4ea0 FUN_004e4ea0
 * calls 004ab1c0 FUN_004ab1c0
 * calls 005d29d0 FUN_005d29d0
 * calls 00672d30 FUN_00672d30
 * calls 00736da0 FUN_00736da0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 007453a0 FUN_007453a0
 * calls 0045be30 FUN_0045be30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0075d320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  float *local_4c;
  uint local_48;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_008814a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_007591c0(param_2,param_3);
  param_1[0x1c] = &PTR___purecall_008a94b0;
  local_14 = 0;
  *param_1 = &PTR_FUN_008b5254;
  param_1[0x1c] = &PTR_LAB_008b5250;
  FUN_007327e0(0,0,0);
  local_14._0_1_ = 1;
  FUN_004ab1c0(0,0,0);
  local_14._0_1_ = 2;
  FUN_00736da0(0,0,0);
  param_1[0xdc] = DAT_008a2fac;
  param_1[0xdd] = DAT_008a2fb0;
  param_1[0xde] = DAT_008a2fb4;
  param_1[0xdf] = DAT_008a2fb8;
  param_1[0xe0] = DAT_008a2fbc;
  param_1[0xe1] = DAT_008a2fb4;
  param_1[0xe2] = DAT_008a2fb8;
  param_1[0xe3] = DAT_008a2fbc;
  param_1[0xe4] = DAT_008a2fb4;
  param_1[0xe5] = DAT_008a2fb8;
  param_1[0xe6] = DAT_008a2fbc;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  puVar1 = param_1 + 0xf9;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *puVar1 = puVar1;
  param_1[0xfa] = puVar1;
  puVar1 = param_1 + 0xfb;
  *puVar1 = puVar1;
  param_1[0xfc] = puVar1;
  param_1[0xfd] = *(undefined4 *)(param_4 + 0xc);
  param_1[0xfe] = 0;
  param_1[0xcc] = 0x3f800000;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0x3f800000;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x3f800000;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0x3f800000;
  local_14._0_1_ = 5;
  uVar4 = FUN_004e4ea0(*(undefined4 *)(param_4 + 0x14),0,0);
  local_14._0_1_ = 6;
  FUN_0045be30(uVar4);
  local_14 = CONCAT31(local_14._1_3_,5);
  FUN_0045a430();
  iVar5 = FUN_00454810(0xbd38d1ca,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  uVar4 = FUN_00407510(iVar5,0,0);
  local_14._0_1_ = 7;
  FUN_0045be30(uVar4);
  local_14 = CONCAT31(local_14._1_3_,5);
  FUN_0045a430();
  pfVar9 = (float *)(param_1 + 0x27);
  local_4c = (float *)(param_1 + 0x34);
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  local_48 = 0;
  do {
    iVar5 = FUN_005d29d0(0xf0,0);
    local_14._0_1_ = 8;
    if (iVar5 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)FUN_007453a0();
    }
    local_4c[-0x17] = fVar6;
    pfVar2 = (float *)((int)pfVar9 + param_1[7] + (-0x8c - (int)param_1));
    pfVar9[-3] = *pfVar2;
    pfVar9[-2] = pfVar2[1];
    pfVar9[-1] = pfVar2[2];
    *pfVar9 = pfVar2[3];
    local_14 = CONCAT31(local_14._1_3_,5);
    fVar3 = *pfVar9;
    if (*pfVar9 <= _DAT_00890cd4) {
      fVar3 = _DAT_00890cd4;
    }
    *local_4c = fVar3;
    *pfVar9 = 0.0;
    *(undefined4 *)((int)fVar6 + 0x10) = 0;
    *(undefined4 *)((int)fVar6 + 0x14) = 0;
    *(undefined4 *)((int)fVar6 + 0x18) = 0;
    *(undefined4 *)((int)fVar6 + 0x1c) = 0;
    fVar10 = (float10)FUN_0066bee0(param_1 + 0x46,CONCAT31((int3)(local_48 >> 8),local_48 < 2));
    local_4c[4] = (float)(fVar10 * (float10)_DAT_008933d4);
    local_48 = local_48 + 1;
    local_4c = local_4c + 1;
    pfVar9 = pfVar9 + 4;
  } while (local_48 < 4);
  param_1[0xee] = 0x3e97e932;
  FUN_0075d220(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
               *(char *)(param_4 + 0x18) == '\0',*(undefined4 *)(param_4 + 0x10));
  if (*(int *)(param_4 + 0xc) == 0) {
    uVar7 = param_1[0xfe] | 4;
  }
  else {
    uVar7 = param_1[0xfe] & 0xfffffffb;
  }
  param_1[0xfe] = uVar7;
  if ((param_1[0xfd] == 0) || (param_1[0xfd] == 2)) {
    iVar5 = FUN_00672d30(param_1 + 0x41,4);
    iVar8 = FUN_00672e80(param_1 + 0x41,4);
    if ((iVar5 != 0) || (iVar8 == 0)) {
      param_1[0xfe] = param_1[0xfe] | 0x10;
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

