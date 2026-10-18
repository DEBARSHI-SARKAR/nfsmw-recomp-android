/* speed.exe 00584e60 FUN_00584e60; analysis pseudocode, not buildable source.
 * calls 005848b0 FUN_005848b0
 * calls 0056fcc0 FUN_0056fcc0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00584e60(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float local_140 [18];
  uint local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_a8;
  float afStack_a0 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  local_f0 = 0x3f800000;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0x3f800000;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0x3f800000;
  local_c4 = 0;
  local_b4 = 0x3f800000;
  local_c0 = 0x43a00000;
  local_bc = 0x43700000;
  local_b8 = 0;
  FUN_005848b0(*(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x2c),local_50,local_60,
               *(undefined2 *)(*(int *)(param_1 + 0xa4) + 0x20),0x3f800000);
  FUN_0045ecf0(local_50,&local_f0,local_50);
  iVar11 = *(int *)(*(int *)(param_1 + 0xa4) + 0x18);
  if ((iVar11 != 1) && (iVar11 != 9)) {
    return;
  }
  local_140[0] = -0.5;
  local_140[1] = -0.5;
  local_140[2] = 0.0;
  local_140[4] = 0.5;
  local_140[5] = -0.5;
  local_140[6] = 0.0;
  local_140[8] = 0.5;
  local_140[9] = 0.5;
  local_140[10] = 0.0;
  local_140[0xc] = -0.5;
  local_140[0xd] = 0.5;
  local_140[0xe] = 0.0;
  pfVar9 = local_140;
  iVar11 = 4;
  do {
    thunk_FUN_006bd940(pfVar9,local_50,pfVar9);
    fVar3 = local_140[1];
    fVar2 = local_140[0];
    pfVar9[2] = 0.0;
    fVar7 = local_140[0xd];
    fVar5 = local_140[0xc];
    fVar4 = local_140[2];
    pfVar9 = pfVar9 + 4;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  fVar6 = local_140[0] + _DAT_0089f704;
  uVar8 = *(uint *)(param_1 + 0x90) & 0xfffffffe;
  *(uint *)(param_1 + 0x90) = uVar8;
  if ((((fVar6 < local_140[0xc]) ||
       (local_140[0] - _DAT_0089f704 < local_140[0xc] ==
        (local_140[0] - _DAT_0089f704 == local_140[0xc]))) ||
      (local_140[4] + _DAT_0089f704 < local_140[8])) ||
     (((local_140[4] - _DAT_0089f704 < local_140[8] ==
        (local_140[4] - _DAT_0089f704 == local_140[8]) ||
       (local_140[1] + _DAT_0089f704 < local_140[5])) ||
      ((local_140[1] - _DAT_0089f704 < local_140[5] ==
        (local_140[1] - _DAT_0089f704 == local_140[5]) ||
       ((local_140[9] + _DAT_0089f704 < local_140[0xd] ||
        (local_140[9] - _DAT_0089f704 < local_140[0xd] ==
         (local_140[9] - _DAT_0089f704 == local_140[0xd]))))))))) {
    if ((fVar6 < local_140[4]) ||
       (((((local_140[0] - _DAT_0089f704 < local_140[4] ==
            (local_140[0] - _DAT_0089f704 == local_140[4]) ||
           (local_140[8] + _DAT_0089f704 < local_140[0xc])) ||
          (local_140[8] - _DAT_0089f704 < local_140[0xc] ==
           (local_140[8] - _DAT_0089f704 == local_140[0xc]))) ||
         ((local_140[1] + _DAT_0089f704 < local_140[0xd] ||
          (local_140[1] - _DAT_0089f704 < local_140[0xd] ==
           (local_140[1] - _DAT_0089f704 == local_140[0xd]))))) ||
        ((local_140[5] + _DAT_0089f704 < local_140[9] ||
         (local_140[5] - _DAT_0089f704 < local_140[9] ==
          (local_140[5] - _DAT_0089f704 == local_140[9]))))))) goto LAB_00585204;
    *(uint *)(param_1 + 0x90) = uVar8 | 1;
    local_a8 = local_140[2];
    local_140[0] = local_140[4];
    local_140[1] = local_140[5];
    local_140[2] = local_140[6];
    local_140[4] = local_140[8];
    local_140[0xc] = fVar2;
    local_140[5] = local_140[9];
    local_140[0xd] = fVar3;
    local_140[6] = local_140[10];
    local_140[8] = fVar5;
    local_140[9] = fVar7;
    local_140[10] = local_140[0xe];
    local_140[0xe] = fVar4;
  }
  else {
    *(uint *)(param_1 + 0x90) = uVar8 | 1;
  }
  FUN_0056fcc0(local_140);
LAB_00585204:
  local_f8 = 0;
  iVar11 = 0;
  pfVar9 = (float *)(param_1 + 0x44);
  do {
    local_f4 = local_f8 + 1;
    uVar8 = local_f8 + 1 & 3;
    fVar2 = local_140[uVar8 * 4];
    fVar3 = *(float *)((int)local_140 + iVar11);
    pfVar1 = (float *)(iVar11 + 0x40 + param_1);
    fVar4 = local_140[uVar8 * 4 + 1];
    fVar5 = *(float *)((int)local_140 + iVar11 + 4);
    local_a8 = local_140[uVar8 * 4 + 2];
    pfVar9[1] = 0.0;
    local_a8 = local_a8 - *(float *)((int)local_140 + iVar11 + 8);
    *(float *)((int)afStack_a0 + iVar11 + 8) = local_a8;
    *(float *)((int)afStack_a0 + iVar11) = fVar2 - fVar3;
    *(float *)((int)afStack_a0 + iVar11 + 4) = fVar4 - fVar5;
    fVar2 = *(float *)((int)afStack_a0 + iVar11 + 4);
    *pfVar9 = *(float *)((int)afStack_a0 + iVar11);
    *pfVar1 = -fVar2;
    FUN_0045f490(pfVar1,pfVar1);
    uVar8 = local_f8;
    iVar10 = iVar11 + 0x10;
    local_f8 = local_f4;
    *(float *)(param_1 + 0x80 + uVar8 * 4) =
         -(*(float *)((int)local_140 + iVar11 + 8) * pfVar9[1] +
          *(float *)((int)local_140 + iVar11) * *pfVar1 +
          *pfVar9 * *(float *)((int)local_140 + iVar11 + 4));
    iVar11 = iVar10;
    pfVar9 = pfVar9 + 4;
  } while (iVar10 < 0x40);
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    *(float *)(param_1 + 0x8c) = local_140[0];
    *(float *)(param_1 + 0x80) = local_140[5];
    *(float *)(param_1 + 0x84) = local_140[8];
    *(float *)(param_1 + 0x88) = local_140[0xd];
  }
  return;
}

