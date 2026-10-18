/* speed.exe 0047cf00 FUN_0047cf00; analysis pseudocode, not buildable source.
 * calls 004741f0 FUN_004741f0
 * calls 0047c440 FUN_0047c440
 * calls 0047ce80 FUN_0047ce80
 * calls 0046ae40 FUN_0046ae40
 * calls 00725550 FUN_00725550
 * calls 0046b1f0 FUN_0046b1f0
 * calls 0045db30 FUN_0045db30
 * calls 0045f490 FUN_0045f490
 * calls 0045ed10 thunk_FUN_006bd920
 * calls 006bde60 FUN_006bde60
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0046b410 FUN_0046b410
 * calls 00651790 FUN_00651790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0047cf00(int param_1,undefined4 param_2,short *param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  undefined1 local_50 [76];
  
  sVar1 = *param_3;
  if ((((sVar1 == 2) || (sVar1 == 3)) || (sVar1 == 4)) ||
     ((sVar1 == 6 || (bVar4 = false, sVar1 == 5)))) {
    bVar4 = true;
  }
  if (*(char *)(*(int *)(param_1 + 0x80) + 0xc0) != '\0') {
    *(undefined4 *)(param_1 + 0xa8) = DAT_00925ae8;
  }
  cVar5 = FUN_004741f0();
  if (cVar5 != '\0') {
    *(undefined4 *)(param_1 + 0xac) = DAT_00925ae8;
  }
  FUN_0046b1f0(param_3,param_5);
  FUN_0046b410(param_2);
  FUN_006bde60(local_50,param_2);
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_94 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    iVar2 = *(int *)(param_1 + 0xe0);
    local_9c = *(float *)(iVar2 + 0x24);
    local_a0 = *(float *)(iVar2 + 0x20);
    local_98 = *(float *)(iVar2 + 0x28);
    local_94 = 0;
    thunk_FUN_006bd920(&local_a0,local_50,&local_a0);
  }
  if ((DAT_00904ffa == '\0') && (DAT_009b0890 == 0)) {
    local_b0 = *(float *)(param_3 + 2);
    local_ac = *(float *)(param_3 + 6);
    local_a8 = *(float *)(param_3 + 4);
    FUN_0047ce80(&local_b0);
    uVar7 = (uint)(ushort)param_3[1];
  }
  else {
    local_b0 = DAT_008ee120;
    local_ac = DAT_008ee124;
    local_a8 = DAT_008ee128;
    uVar7 = DAT_009111e4;
  }
  fVar8 = (float10)FUN_0045db30(uVar7);
  fVar9 = (float10)FUN_0045dbf0(uVar7);
  if (bVar4) {
    local_84 = 0.0;
    fVar8 = ((float10)(float)fVar8 / fVar9) * (float10)local_b0 + (float10)local_a8;
  }
  else {
    fVar8 = (float10)local_a8 - (float10)(float)fVar8 / fVar9;
    local_84 = local_b0 + _DAT_0089096c;
  }
  local_c4 = (float)fVar8;
  local_80 = local_a0 * *(float *)(param_4 + 0x40);
  local_7c = local_9c * *(float *)(param_4 + 0x44);
  local_78 = local_98 * *(float *)(param_4 + 0x48);
  FUN_0046ae40(&local_80,param_4 + 0x50,param_4 + 0x60);
  local_80 = local_80 + local_b0;
  local_7c = local_7c + local_ac;
  local_78 = local_78 + local_a8;
  FUN_00651790(&local_80);
  local_70 = local_a0 * *(float *)(param_4 + 0x70);
  local_6c = local_9c * *(float *)(param_4 + 0x74);
  local_68 = local_98 * *(float *)(param_4 + 0x78);
  FUN_0046ae40(&local_70,param_4 + 0x80,param_4 + 0x90);
  local_70 = local_70 + local_84;
  local_68 = local_68 + local_c4;
  FUN_00651790(&local_70);
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 1.0;
  if (param_3[0xc] != 0) {
    iVar2 = *(int *)(param_1 + 0xe0);
    local_c0 = *(float *)(param_4 + 0x10) * *(float *)(iVar2 + 0x20);
    local_bc = *(float *)(param_4 + 0x14) * *(float *)(iVar2 + 0x24);
    local_a8 = *(float *)(param_4 + 0x18) * *(float *)(iVar2 + 0x28);
    local_b8 = local_a8 + _DAT_0089096c;
    local_60 = local_c0;
    FUN_0046ae40(&local_c0,param_4 + 0x20,param_4 + 0x30);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (_DAT_00894820 < *(float *)(iVar2 + 0x10)) {
    pfVar6 = (float *)FUN_0047c440(iVar2 + 0x20,iVar2);
    local_c0 = local_c0 + *pfVar6;
    local_bc = local_bc + pfVar6[1];
    local_b8 = local_b8 + pfVar6[2];
  }
  FUN_0045f490(&local_c0,&local_c0);
  FUN_00651790(&local_c0);
  uVar7 = (uint)(ushort)param_3[8];
  if (((bVar4) && (*(char *)(*(int *)(param_1 + 0x80) + 0xbc) != '\0')) &&
     (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x80) + 0x10))) {
    uVar7 = uVar7 + _DAT_0091112c;
  }
  pfVar6 = *(float **)(param_1 + 0x84);
  pfVar6[2] = (float)(uVar7 & 0xffff);
  if ((float)(uVar7 & 0xffff) != *pfVar6) {
    *(undefined2 *)(pfVar6 + 10) = 2;
  }
  if ((*(char *)(param_1 + 0xa2) != '\0') || (!bVar4)) {
    puVar3 = *(undefined4 **)(param_1 + 0x94);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[0xb] = puVar3[0xd];
    puVar3[0xc] = puVar3[0xe];
    *(undefined2 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = puVar3[0x18];
    puVar3[0x17] = puVar3[0x19];
    *(undefined2 *)(puVar3 + 0x20) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x84);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x88);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[0xb] = puVar3[0xd];
    puVar3[0xc] = puVar3[0xe];
    *(undefined2 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = puVar3[0x18];
    puVar3[0x17] = puVar3[0x19];
    *(undefined2 *)(puVar3 + 0x20) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x8c);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 10) = 0;
    puVar3[0xb] = puVar3[0xd];
    puVar3[0xc] = puVar3[0xe];
    *(undefined2 *)(puVar3 + 0x15) = 0;
    puVar3[0x16] = puVar3[0x18];
    puVar3[0x17] = puVar3[0x19];
    *(undefined2 *)(puVar3 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_00725550();
  }
  return;
}

