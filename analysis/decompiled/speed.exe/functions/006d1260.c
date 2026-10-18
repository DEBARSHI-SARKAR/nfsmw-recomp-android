/* speed.exe 006d1260 FUN_006d1260; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c6ed0 FUN_006c6ed0
 * calls 006c6cc0 FUN_006c6cc0
 * calls 006c83a0 FUN_006c83a0
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d1260(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_dc [4];
  int local_d8;
  char local_d2;
  char local_d1;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  cVar4 = '\0';
  local_d1 = '\0';
  local_d2 = '\0';
  if (DAT_00982c04 != 0) {
    if ((param_2 != 0) &&
       ((*(int *)(param_2 + 0x24) == 0x40cdc515 || (*(int *)(param_2 + 0x24) == 0x1149c7da)))) {
      cVar4 = '\x01';
      local_d1 = '\x01';
    }
    if ((*(char *)((int)param_1 + 0x91) == 'r') || (*(char *)((int)param_1 + 0x91) == 's')) {
      local_d2 = '\x01';
    }
  }
  bVar3 = *(byte *)(param_1 + 0x24) & 2;
  local_d0 = *param_1 * _DAT_008af9a4 - _DAT_0089096c;
  local_cc = -(param_1[1] * _DAT_008af9a0 - _DAT_0089096c);
  if (bVar3 == 0) {
    local_c8 = 1.0;
  }
  else {
    local_c8 = param_1[2];
  }
  local_b0 = param_1[4] * _DAT_008af9a4 - _DAT_0089096c;
  local_ac = -(param_1[5] * _DAT_008af9a0 - _DAT_0089096c);
  local_c4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x83),
                                        *(undefined1 *)(param_1 + 0x20)),
                               *(undefined1 *)((int)param_1 + 0x81)),
                      *(undefined1 *)((int)param_1 + 0x82));
  local_c0 = param_1[0x10];
  local_bc = param_1[0x11];
  local_b8 = param_1[0x18];
  local_b4 = param_1[0x19];
  if (bVar3 == 0) {
    local_a8 = 1.0;
  }
  else {
    local_a8 = param_1[6];
  }
  local_90 = param_1[8] * _DAT_008af9a4 - _DAT_0089096c;
  local_8c = -(param_1[9] * _DAT_008af9a0 - _DAT_0089096c);
  local_a4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x87),
                                        *(undefined1 *)(param_1 + 0x21)),
                               *(undefined1 *)((int)param_1 + 0x85)),
                      *(undefined1 *)((int)param_1 + 0x86));
  local_a0 = param_1[0x12];
  local_9c = param_1[0x13];
  local_98 = param_1[0x1a];
  local_94 = param_1[0x1b];
  if (bVar3 == 0) {
    local_88 = 1.0;
  }
  else {
    local_88 = param_1[10];
  }
  local_70 = param_1[0xc] * _DAT_008af9a4 - _DAT_0089096c;
  local_6c = -(param_1[0xd] * _DAT_008af9a0 - _DAT_0089096c);
  local_84 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x8b),
                                        *(undefined1 *)(param_1 + 0x22)),
                               *(undefined1 *)((int)param_1 + 0x89)),
                      *(undefined1 *)((int)param_1 + 0x8a));
  local_80 = param_1[0x14];
  local_7c = param_1[0x15];
  local_78 = param_1[0x1c];
  local_74 = param_1[0x1d];
  if (bVar3 == 0) {
    local_68 = 1.0;
  }
  else {
    local_68 = param_1[0xe];
  }
  local_64 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 0x8f),
                                        *(undefined1 *)(param_1 + 0x23)),
                               *(undefined1 *)((int)param_1 + 0x8d)),
                      *(undefined1 *)((int)param_1 + 0x8e));
  local_5c = param_1[0x17];
  local_60 = param_1[0x16];
  local_58 = param_1[0x1e];
  local_54 = param_1[0x1f];
  if (param_2 != 0) {
    if (param_3 != 0x61) {
      local_d8 = (int)*(short *)(param_2 + 0x46);
      fVar1 = _DAT_008933d4 / (float)(int)*(short *)(param_2 + 0x44);
      local_c0 = local_c0 + fVar1;
      fVar2 = _DAT_008933d4 / (float)local_d8;
      local_bc = local_bc + fVar2;
      local_a0 = local_a0 - fVar1;
      local_9c = local_9c + fVar2;
      local_80 = local_80 - fVar1;
      local_7c = local_7c - fVar2;
      local_60 = fVar1 + local_60;
      local_5c = local_5c - fVar2;
      if (DAT_00982bc8 != 0) {
        local_b8 = _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x44) + local_b8;
        local_b4 = _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x46) + local_b4;
        local_98 = local_98 - _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x44);
        local_94 = _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x46) + local_94;
        local_78 = local_78 - _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x44);
        local_74 = local_74 - _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x46);
        local_58 = _DAT_008933d4 / (float)(int)*(short *)(DAT_00982bc8 + 0x44) + local_58;
        local_d8 = (int)*(short *)(DAT_00982bc8 + 0x46);
        local_54 = local_54 - _DAT_008933d4 / (float)local_d8;
      }
    }
    FUN_006c6cc0(param_2,0);
  }
  if (DAT_00982bc4 != 0) {
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x2a4)
               ,DAT_00982bc4);
    cVar4 = local_d1;
  }
  if (param_3 == 0x61) {
    if (*(char *)(DAT_00982c80 + 0x40) == '\0') {
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,0,0x18,0x103);
      uVar5 = 0x10142;
    }
    else {
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,0,0x18,0x100);
      uVar5 = 0x20142;
    }
    (**(code **)(*DAT_00982bdc + 0x164))(DAT_00982bdc,uVar5);
    local_68 = 1.0;
    local_64 = 0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 1.0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    (**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,0x10,&local_68);
  }
  DAT_00982ca0 = 0;
  if (cVar4 != '\0') {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x34,1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x38,8);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x37,7);
    FUN_006c67c0(1,0x5f);
    FUN_006c83a0();
  }
  if (local_d2 != '\0') {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x34,1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x38,2);
    FUN_006c67c0(0,0x5f);
    if (*(char *)((int)param_1 + 0x91) == 'r') {
      if ((DAT_0093d944 & 0x2000) == 0) {
        uVar6 = 1;
        uVar5 = 2;
      }
      else {
        (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xc1,0xffb0b0b0);
        uVar6 = 0xf;
        uVar5 = 0xe;
      }
    }
    else {
      uVar6 = 2;
      uVar5 = 5;
    }
    FUN_006c6810(1,uVar5,uVar6);
    FUN_006c83a0();
  }
  if (DAT_008f9358 != '\0') {
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x104))(*(int **)(DAT_00982c80 + 0x48));
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x100))(*(int **)(DAT_00982c80 + 0x48),0);
    (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,6,2,auStack_dc,0x20);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x108))(*(int **)(DAT_00982c80 + 0x48));
  }
  if ((cVar4 != '\0') || (local_d2 != '\0')) {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x34,0);
  }
  FUN_006c6ed0();
  if (param_3 == 0x61) {
    (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,0,0x18,2);
  }
  return;
}

