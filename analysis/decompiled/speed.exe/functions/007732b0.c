/* speed.exe 007732b0 FUN_007732b0; analysis pseudocode, not buildable source.
 * calls 005c8cc0 FUN_005c8cc0
 * calls 00444dc0 FUN_00444dc0
 * calls 007632b0 FUN_007632b0
 * calls 00767280 FUN_00767280
 * calls 00486610 FUN_00486610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_007732b0(undefined4 *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float local_c0;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
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
  float local_58 [3];
  uint local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28 [8];
  undefined4 local_8;
  float local_4;
  
  pfVar5 = *(float **)(param_2 + 4);
  local_a4 = *(float **)(param_2 + 8);
  puVar9 = (undefined4 *)0x0;
  local_b8 = 0;
  local_c0 = 1e+38;
  iVar8 = 0;
  local_9c = param_1;
  if (pfVar5 != local_a4) {
    do {
      local_a0 = (undefined4 *)*pfVar5;
      iVar8 = local_a0[7];
      if ((iVar8 != 0) && (uVar2 = *(ushort *)(iVar8 + 4), uVar2 != 0)) {
        FUN_007632b0(&local_98,1);
        FUN_00486610(param_3,&local_98,local_58);
        FUN_00486610(param_3 + 4,&local_98,local_48);
        uVar6 = (uint)uVar2;
        iVar8 = *(ushort *)(iVar8 + 2) + 0x10 + iVar8;
        if (uVar6 != 0) {
          uVar3 = *local_9c;
          do {
            if (((*(byte *)(iVar8 + 0xd) & (byte)uVar3) == 0) &&
               (cVar4 = FUN_00767280(local_58,iVar8,&local_b4), cVar4 != '\0')) {
              if (*(float *)(iVar8 + 0x14) <= *(float *)(iVar8 + 4)) {
                fVar1 = *(float *)(iVar8 + 0x14);
              }
              else {
                fVar1 = *(float *)(iVar8 + 4);
              }
              if (fVar1 < local_b0) {
                if (*(float *)(iVar8 + 4) <= *(float *)(iVar8 + 0x14)) {
                  fVar1 = *(float *)(iVar8 + 0x14);
                }
                else {
                  fVar1 = *(float *)(iVar8 + 4);
                }
                if ((local_b0 < fVar1) &&
                   (fVar1 = (local_b0 - local_58[1]) * (local_b0 - local_58[1]) +
                            (local_ac - local_58[2]) * (local_ac - local_58[2]) +
                            (local_b4 - local_58[0]) * (local_b4 - local_58[0]), fVar1 < local_c0))
                {
                  local_38 = local_b4;
                  local_34 = local_b0;
                  local_30 = local_ac;
                  local_2c = local_a8;
                  puVar9 = local_a0;
                  local_c0 = fVar1;
                  local_b8 = iVar8;
                }
              }
            }
            iVar8 = iVar8 + 0x20;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      pfVar5 = pfVar5 + 1;
      iVar8 = local_b8;
    } while (pfVar5 != local_a4);
  }
  *(undefined1 *)((int)param_4 + 0x51) = 0;
  if (iVar8 != 0) {
    *(undefined1 *)((int)param_4 + 0x51) = 2;
    param_4[0x15] = (float)puVar9;
    *(byte *)(param_4 + 0x14) = *(byte *)((int)puVar9 + 0x12) >> 1 & 1;
    local_98 = *puVar9;
    local_94 = puVar9[1];
    local_90 = puVar9[2];
    local_8c = 0;
    if ((*(byte *)((int)puVar9 + 0x12) & 3) == 0) {
      local_88 = 0;
      local_84 = 0x3f800000;
      local_80 = 0;
    }
    else {
      FUN_00444dc0(puVar9 + 8,puVar9,&local_88);
    }
    local_78 = puVar9[8];
    local_74 = puVar9[9];
    local_70 = puVar9[10];
    local_68 = puVar9[0xc];
    local_64 = puVar9[0xd];
    local_60 = puVar9[0xe];
    local_7c = 0;
    local_6c = 0;
    local_5c = 0x3f800000;
    FUN_005c8cc0(&local_98);
    FUN_00486610(iVar8,&local_98,local_58);
    FUN_00486610(iVar8 + 0x10,&local_98,local_48);
    local_4c = *(uint *)(iVar8 + 0xc);
    local_3c = *(undefined4 *)(iVar8 + 0x1c);
    iVar8 = puVar9[7];
    pfVar5 = local_58;
    pfVar10 = local_28;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
    local_8 = *(undefined4 *)
               ((uint)*(ushort *)(iVar8 + 2) +
               (uint)*(ushort *)(iVar8 + 6) + iVar8 + 0x10 + (local_4c & 0xff) * 4);
    local_4 = local_c0;
    pfVar5 = local_28;
    pfVar10 = param_4 + 8;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar10 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar10 = pfVar10 + 1;
    }
    FUN_00486610(&local_38,&local_98,param_4);
    param_4[3] = 1.0;
    param_4[5] = 0.0;
    param_4[4] = (param_4[0xe] - param_4[10]) * param_4[0xf];
    param_4[6] = -((param_4[0xc] - param_4[8]) * param_4[0xf]);
    param_4[7] = 0.0;
    if ((*param_3 - *param_4) * param_4[4] + (param_3[2] - param_4[2]) * param_4[6] < _DAT_00890968)
    {
      param_4[4] = -param_4[4];
      param_4[6] = -param_4[6];
    }
  }
  return *(char *)((int)param_4 + 0x51) != '\0';
}

