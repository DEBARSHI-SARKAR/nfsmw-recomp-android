/* speed.exe 004499e0 FUN_004499e0; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 * calls 004494d0 FUN_004494d0
 * calls 00444fe0 FUN_00444fe0
 * calls 00445fa0 FUN_00445fa0
 * calls 004467a0 FUN_004467a0
 * calls 007477a0 FUN_007477a0
 * calls 007477f0 FUN_007477f0
 * calls 0045ecf0 FUN_0045ecf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004499e0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  local_c0 = *(float *)(iVar4 + 0x90);
  local_bc = *(float *)(iVar4 + 0x94);
  local_b8 = *(float *)(iVar4 + 0x98);
  FUN_004494d0(param_2);
  FUN_00445fa0(1);
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
  if ((*(byte *)(*(int *)(param_1 + 0x14) + 0x34) & 1) == 0) {
    FUN_00444fe0(local_50,*(int *)(param_1 + 0xc) + 0x60);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xf8) = 0;
    local_a0 = 0x3f800000;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0x3f800000;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0x3f800000;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0x3f800000;
    FUN_0045ecf0(&local_a0,local_50,iVar4 + 0x40);
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    *(int *)(*(int *)(param_1 + 0xc) + 0xf8) = iVar4;
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_004467a0(1,&local_d0);
      iVar4 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar4 + 0xf4) != 0) {
        FUN_007477f0();
      }
      fVar2 = local_c8;
      local_a4 = *(float *)(iVar4 + 0x58);
      fVar1 = -local_cc;
      local_c8 = local_d0;
      local_cc = fVar2 + _DAT_00890d3c;
      local_60 = 0;
      local_5c = 3;
      local_d0 = fVar1;
      cVar3 = FUN_00789870(&local_d0,&local_d4,0);
      if (cVar3 != '\0') {
        if (*(char *)(param_1 + 0x19) == '\0') {
          *(float *)(param_1 + 0x1c) = local_d4;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        else {
          *(float *)(param_1 + 0x1c) =
               *(float *)(param_1 + 0x1c) * _DAT_008933d4 + local_d4 * _DAT_008933d4;
        }
        *(float *)(*(int *)(param_1 + 0xc) + 0x98) =
             (*(float *)(param_1 + 0x1c) - local_a4) + *(float *)(*(int *)(param_1 + 0xc) + 0x98) +
             _DAT_00893330;
      }
      goto LAB_00449c40;
    }
    FUN_00444fe0(&local_a0,*(int *)(param_1 + 0xc) + 0x60);
    FUN_0045ecf0(local_50,&local_a0,iVar4 + 0x40);
    iVar4 = *(int *)(param_1 + 0xc);
  }
  FUN_00444fe0(iVar4 + 0x60,&local_a0);
  if (*(int *)(iVar4 + 0xf4) == 0) {
    FUN_007477a0();
  }
LAB_00449c40:
  if (_DAT_00891218 < param_2) {
    iVar4 = *(int *)(param_1 + 0xc);
    local_58 = *(float *)(iVar4 + 0x98);
    local_d0 = *(float *)(iVar4 + 0x90) - local_c0;
    local_cc = *(float *)(iVar4 + 0x94) - local_bc;
    local_d4 = _DAT_0089096c / param_2;
    local_b8 = (local_58 - local_b8) * local_d4;
    *(float *)(iVar4 + 0xb8) = local_b8;
    *(float *)(iVar4 + 0xb0) = local_d0 * local_d4;
    *(float *)(iVar4 + 0xb4) = local_cc * local_d4;
    if (*(int *)(iVar4 + 0xf4) == 0) {
      FUN_007477a0();
    }
  }
  return;
}

