/* speed.exe 006c7420 FUN_006c7420; analysis pseudocode, not buildable source.
 * calls 0045ed10 thunk_FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c7420(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_f0 [4];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_78 [5];
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_38;
  float local_34;
  float local_30;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    if ((*(int *)(DAT_00982c80 + 4) == 4) && (*(char *)(DAT_00982c80 + 0x40) == '\0')) {
      local_c0 = param_1[0x14];
      local_bc = param_1[0x18];
      local_b8 = param_1[0x1c];
      local_b0 = param_1[0x15];
      local_ac = param_1[0x19];
      local_a8 = param_1[0x1d];
      local_a0 = param_1[0x16];
      local_9c = param_1[0x1a];
      local_98 = param_1[0x1e];
      local_f0[0] = (float)param_1[4];
      local_f0[1] = (float)param_1[5];
      local_f0[2] = (float)param_1[6];
      local_e0 = param_1[8];
      local_dc = param_1[9];
      local_d8 = param_1[10];
      local_c8 = param_1[0xe];
      iVar3 = 0;
      local_b4 = 0;
      local_a4 = 0;
      local_94 = 0;
      local_d0 = param_1[0xc];
      local_cc = param_1[0xd];
      iVar4 = 0;
      do {
        fVar1 = *(float *)((int)local_f0 + iVar4);
        pfVar5 = local_78;
        for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
        local_78[2] = _DAT_008fae78 * *(float *)((int)local_f0 + iVar4 + 4);
        local_54 = 0;
        local_78[3] = _DAT_008fae78 * *(float *)((int)local_f0 + iVar4 + 8);
        local_50 = 0;
        local_4c = 0;
        local_64 = _DAT_008fae7c * *(float *)((int)local_f0 + iVar4);
        local_60 = _DAT_008fae7c * *(float *)((int)local_f0 + iVar4 + 4);
        local_78[0] = 4.2039e-45;
        local_5c = _DAT_008fae7c * *(float *)((int)local_f0 + iVar4 + 8);
        local_78[1] = _DAT_008fae78 * fVar1;
        thunk_FUN_006bd920(&local_90,param_2,(int)&local_c0 + iVar4);
        local_38 = -local_90;
        local_34 = -local_8c;
        local_30 = -local_88;
        (**(code **)(*DAT_00982bdc + 0xcc))(DAT_00982bdc,iVar3,local_78);
        if (((_DAT_00891218 <= ABS(local_38)) || (_DAT_00891218 <= ABS(local_34))) ||
           (_DAT_00891218 <= ABS(local_30))) {
          (**(code **)(*DAT_00982bdc + 0xd4))(DAT_00982bdc,iVar3,1);
        }
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0x20);
      (**(code **)(*DAT_00982bdc + 0xd4))(DAT_00982bdc,2,1);
      return;
    }
    iVar3 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x934);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),iVar3,param_1 + 4);
    }
    iVar3 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x95c);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),iVar3,param_1 + 0x14);
    }
  }
  return;
}

