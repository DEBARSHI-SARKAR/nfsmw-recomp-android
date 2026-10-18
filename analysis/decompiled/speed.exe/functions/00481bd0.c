/* speed.exe 00481bd0 FUN_00481bd0; analysis pseudocode, not buildable source.
 * calls 00651940 FUN_00651940
 * calls 006517f0 FUN_006517f0
 * calls 0046f360 FUN_0046f360
 * calls 00470890 FUN_00470890
 * calls 00652ad0 _malloc
 * calls 005d29d0 FUN_005d29d0
 * calls 00467b10 FUN_00467b10
 * calls 0047cf00 FUN_0047cf00
 * calls 00468c50 FUN_00468c50
 * calls 00467a80 FUN_00467a80
 * calls 0045f490 FUN_0045f490
 * calls 006bde60 FUN_006bde60
 * calls 00468d30 FUN_00468d30
 * calls 004713c0 FUN_004713c0
 * calls 0046f2b0 FUN_0046f2b0
 * calls 00468be0 FUN_00468be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00481bd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,char param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_180;
  float local_17c;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 *local_124;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_70 [16];
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086a8f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_124 = param_1;
  FUN_00470890(param_2,1);
  param_1[0x26] = param_4;
  param_1[0x27] = param_4;
  param_1[0x20] = param_3;
  *(undefined1 *)((int)param_1 + 0xa3) = param_8;
  *(bool *)(param_1 + 0x28) = param_6 == '\0';
  *(undefined1 *)((int)param_1 + 0xa1) = param_7;
  *param_1 = &PTR_LAB_00894cc8;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  param_1[0x2a] = DAT_00925ae8 + -8000;
  param_1[0x2b] = DAT_00925ae8 + -0x1900;
  param_1[0x2c] = DAT_00925ae8 + -6000;
  local_14 = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar1 = FUN_004713c0(param_1[0x26]);
  FUN_0046f2b0(&local_110,0);
  puVar2 = _malloc(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[9] = local_108;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x2a) = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  param_1[0x21] = puVar2;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00467a80(1,local_110);
  }
  param_1[0x22] = uVar4;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00467a80(1,local_10c);
  }
  param_1[0x23] = uVar4;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00467b10(1,local_70);
  }
  param_1[0x24] = uVar4;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00467b10(1,local_70);
  }
  param_1[0x25] = uVar4;
  iVar5 = FUN_005d29d0(0x30,0);
  local_14._0_1_ = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0046f360(5);
  }
  param_1[0x38] = uVar4;
  local_14 = (uint)local_14._1_3_ << 8;
  FUN_0047cf00(local_60,uVar1,&local_110,1);
  FUN_006bde60(&local_190,local_60);
  if (*(char *)((int)param_1 + 0xa1) != '\0') {
    local_190 = -local_190;
    local_18c = -local_18c;
    local_180 = -local_180;
    local_17c = -local_17c;
    local_170 = -local_170;
    local_16c = -local_16c;
    local_160 = -local_160;
    local_15c = -local_15c;
  }
  uVar1 = param_1[0x23];
  local_1c4 = param_1[0x22];
  uVar4 = param_1[0x20];
  FUN_00468be0(param_1[0x21]);
  FUN_00468c50(local_1c4,&local_190,uVar4);
  FUN_00468d30(uVar1,&local_190,uVar4);
  FUN_006517f0(&local_1b0);
  FUN_006517f0(&local_140);
  FUN_00651940(&local_1a0);
  FUN_00651940(&local_150);
  local_1c0 = local_140 - local_1b0;
  local_1bc = local_13c - local_1ac;
  local_1b8 = local_138 - local_1a8;
  local_1e0 = local_150 - local_1a0;
  local_1dc = local_14c - local_19c;
  local_1d8 = local_148 - local_198;
  local_118 = local_1d8;
  FUN_0045f490(&local_1c0,&local_1c0);
  FUN_0045f490(&local_1e0,&local_1e0);
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  if (((param_5 == '\0') ||
      (_DAT_008946dc <
       SQRT((local_1a0 - local_1b0) * (local_1a0 - local_1b0) +
            (local_19c - local_1ac) * (local_19c - local_1ac) +
            (local_198 - local_1a8) * (local_198 - local_1a8)))) ||
     (local_1e0 * local_1c0 + local_1dc * local_1bc + local_1d8 * local_1b8 < _DAT_00895288)) {
    puVar2 = (undefined4 *)param_1[0x25];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2[0xb] = puVar2[0xd];
    puVar2[0xc] = puVar2[0xe];
    *(undefined2 *)(puVar2 + 0x15) = 0;
    puVar2[0x16] = puVar2[0x18];
    puVar2[0x17] = puVar2[0x19];
    *(undefined2 *)(puVar2 + 0x20) = 0;
    puVar2 = (undefined4 *)param_1[0x21];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2 = (undefined4 *)param_1[0x22];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2[0xb] = puVar2[0xd];
    puVar2[0xc] = puVar2[0xe];
    *(undefined2 *)(puVar2 + 0x15) = 0;
    puVar2[0x16] = puVar2[0x18];
    puVar2[0x17] = puVar2[0x19];
    *(undefined2 *)(puVar2 + 0x20) = 0;
    puVar2 = (undefined4 *)param_1[0x23];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2[0xb] = puVar2[0xd];
    puVar2[0xc] = puVar2[0xe];
    *(undefined2 *)(puVar2 + 0x15) = 0;
    puVar2[0x16] = puVar2[0x18];
    puVar2[0x17] = puVar2[0x19];
    *(undefined2 *)(puVar2 + 0x20) = 0;
  }
  else {
    param_1[0x2d] = 0x3f800000;
  }
  ExceptionList = local_1c;
  return param_1;
}

