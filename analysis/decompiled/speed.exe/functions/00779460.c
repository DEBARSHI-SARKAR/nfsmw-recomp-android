/* speed.exe 00779460 FUN_00779460; analysis pseudocode, not buildable source.
 * calls 00779430 FUN_00779430
 * calls 004ba050 FUN_004ba050
 * calls 0045beb0 FUN_0045beb0
 * calls 007685e0 FUN_007685e0
 * calls 00410220 FUN_00410220
 * calls 00503c30 FUN_00503c30
 * calls 00768740 FUN_00768740
 * calls 006e9e40 FUN_006e9e40
 * calls 00503c50 FUN_00503c50
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 005ca910 FUN_005ca910
 * calls 00503c00 FUN_00503c00
 * calls 00503bc0 FUN_00503bc0
 * calls 00768980 FUN_00768980
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 007689e0 FUN_007689e0
 * calls 0076c3e0 FUN_0076c3e0
 * calls 00738ce0 FUN_00738ce0
 * calls 0050af90 FUN_0050af90
 * calls 0045a8a0 FUN_0045a8a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00779460(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  void *local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined **local_a0;
  float local_9c;
  float local_98;
  float local_94;
  char local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  void *local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_30;
  void *local_2c;
  float local_28;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_18 = &LAB_00881bce;
  local_1c = ExceptionList;
  local_a0 = &PTR_LAB_008b5b60;
  local_9c = DAT_008a2fb4;
  local_98 = DAT_008a2fb8;
  local_94 = DAT_008a2fbc;
  local_90 = '\0';
  local_8c = DAT_008a2fb4;
  local_88 = DAT_008a2fb8;
  local_84 = DAT_008a2fbc;
  local_14 = 0;
  ExceptionList = &local_1c;
  cVar3 = FUN_006e9e40(&local_a0);
  if (cVar3 != '\0') {
    local_e0 = local_8c;
    *(undefined1 *)(param_1 + 0x40) = 0;
    local_dc = local_88;
    local_d8 = local_84;
    fVar7 = (float10)FUN_00410220(&local_e0);
    iVar4 = FUN_00454810(0xa9402c33,0);
    if (iVar4 == 0) {
      iVar4 = FUN_006269b0(0x10);
    }
    fVar8 = (float10)FUN_00768980((float)fVar7,iVar4);
    iVar4 = FUN_00454810(0x15e6552f,0);
    if (iVar4 == 0) {
      iVar4 = FUN_006269b0(0x10);
    }
    fVar7 = (float10)FUN_00768980((float)fVar7,iVar4);
    fVar1 = (float)fVar7;
    local_cc = -local_9c;
    local_c0 = local_d8;
    local_bc = (void *)-local_e0;
    local_d0 = local_94;
    local_b0 = 0.0;
    local_ac = 0.0;
    local_a8 = 0.0;
    local_c8 = local_98;
    local_b8 = local_dc;
    if (*(int *)(param_1 + 0x34) != 0) {
      pfVar5 = (float *)FUN_00454810(&DAT_0099cb26,0);
      if (pfVar5 == (float *)0x0) {
        pfVar5 = (float *)FUN_006269b0(4);
      }
      if (_DAT_00890968 < *pfVar5) {
        pfVar5 = (float *)FUN_00454810(&DAT_0099cb26,0);
        if (pfVar5 == (float *)0x0) {
          pfVar5 = (float *)FUN_006269b0(4);
        }
        local_a8 = *pfVar5;
        pfVar5 = *(float **)(param_1 + 0x34);
        local_b0 = *pfVar5 * local_a8;
        local_ac = pfVar5[1] * local_a8;
        local_a8 = pfVar5[2] * local_a8;
      }
    }
    if ((local_90 != '\0') && (*(int *)(param_1 + 0x30) != 0)) {
      thunk_FUN_006bd940(&local_e0,*(int *)(param_1 + 0x30),&local_d0);
      FUN_00738ce0(&local_30,*(undefined4 *)(param_1 + 0x30),&local_c0);
      local_d0 = local_e0;
      local_cc = local_dc;
      local_c8 = local_d8;
      local_c0 = local_30;
      local_bc = local_2c;
      local_b8 = local_28;
    }
    fVar7 = (float10)FUN_004ba050(&local_d0);
    fVar2 = (float)fVar7;
    if (*(int *)(param_1 + 0x3c) != 0) {
      local_e0 = DAT_008a2fd0;
      local_dc = DAT_008a2fd4;
      local_d4 = DAT_008a2fdc;
      local_d8 = DAT_008a2fd8;
      FUN_0076c3e0(&DAT_008b5c9c,&local_c0);
      FUN_005ca910(&local_e0,&local_80);
      local_4c = local_cc;
      local_50 = local_d0;
      local_48 = local_c8;
      local_44 = 0x3f800000;
      if (*(int *)(param_1 + 0x3c) != 0) {
        if (((float)fVar8 <= _DAT_00890968) || (pfVar5 = (float *)FUN_00768740(), *pfVar5 <= fVar2))
        {
          FUN_00503c50();
        }
        else {
          FUN_00503c30();
          FUN_00503bc0(&local_80);
          FUN_00503c00(&local_b0);
          *(float *)(*(int *)(param_1 + 0x3c) + 0x68) = (float)fVar8;
          FUN_0050af90(param_2);
        }
      }
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      if (((*(char *)(param_1 + 0x41) == '\0') && (_DAT_00890968 < fVar1)) &&
         (pfVar5 = (float *)FUN_007685e0(), fVar2 < *pfVar5)) {
        local_4c = 0.0;
        local_48 = 0.0;
        local_44 = 0;
        local_80 = local_d0;
        local_7c = local_cc;
        local_70 = local_c0;
        local_78 = local_c8;
        local_6c = local_bc;
        local_60 = local_b0;
        local_68 = local_b8;
        local_5c = local_ac;
        local_40 = *(undefined4 *)(param_1 + 0x2c);
        local_58 = local_a8;
        local_14._0_1_ = 1;
        local_50 = fVar1;
        uVar6 = FUN_007689e0(&local_e0,*(undefined4 *)(param_1 + 0x30));
        local_14._0_1_ = 2;
        FUN_0045beb0(uVar6);
        local_14._0_1_ = 1;
        if (local_d8 != 0.0) {
          FUN_0045a8a0();
        }
        local_3c = *(undefined4 *)(param_1 + 0x48);
        iVar4 = FUN_00779430(&local_80);
        *(int *)(param_1 + 0x44) = iVar4;
        if (iVar4 == 0) {
          *(undefined1 *)(param_1 + 0x41) = 1;
        }
        local_14 = (uint)local_14._1_3_ << 8;
        if (local_44 != 0) {
          FUN_0045a8a0();
          ExceptionList = local_1c;
          return;
        }
      }
    }
    else {
      if (_DAT_00890968 < fVar1) {
        pfVar5 = (float *)FUN_00454810(0x98dba438,0);
        if (pfVar5 == (float *)0x0) {
          pfVar5 = (float *)FUN_006269b0(4);
        }
        if (fVar2 < *pfVar5) {
          (**(code **)(**(int **)(param_1 + 0x44) + 0xc))(&local_d0,&local_c0,&local_b0,fVar1);
          ExceptionList = local_2c;
          return;
        }
      }
      (**(code **)(**(int **)(param_1 + 0x44) + 4))();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    ExceptionList = local_1c;
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    ExceptionList = local_1c;
    return;
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    ExceptionList = local_1c;
    return;
  }
  FUN_00503c50();
  ExceptionList = local_1c;
  return;
}

