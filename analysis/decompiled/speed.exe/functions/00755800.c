/* speed.exe 00755800 FUN_00755800; analysis pseudocode, not buildable source.
 * calls 00506af0 FUN_00506af0
 * calls 00501570 FUN_00501570
 * calls 004fbac0 FUN_004fbac0
 * calls 00501480 FUN_00501480
 * calls 0045f2e0 FUN_0045f2e0
 * calls 00751540 FUN_00751540
 * calls 00505340 FUN_00505340
 * calls 00465f70 FUN_00465f70
 * calls 0045fd30 FUN_0045fd30
 * calls 0045fb70 FUN_0045fb70
 * calls 00739b40 FUN_00739b40
 * calls 00737c00 FUN_00737c00
 * calls 004fb6e0 FUN_004fb6e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00755800(int param_1)

{
  ushort uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_0045fb70(param_1 + 0x90,param_1 + 0xa0);
  local_48 = 0;
  do {
    local_44 = *(int *)(param_1 + 0x1628);
    if (local_44 <= *(int *)(param_1 + 0x162c)) {
      puVar8 = (uint *)(param_1 + 0xb84 + (local_44 + local_48 * 5) * 4);
      do {
        uVar10 = *puVar8 & 0xfffffffc;
        if ((uVar10 != 0) && (*(int *)(uVar10 + 8) != 0)) {
          FUN_00501480();
          FUN_0045f2e0(uVar10);
          *puVar8 = *puVar8 & 1;
        }
        local_44 = local_44 + 1;
        puVar8 = puVar8 + 1;
      } while (local_44 <= *(int *)(param_1 + 0x162c));
    }
    local_48 = local_48 + 1;
  } while (local_48 < 0x4c);
  iVar11 = *(int *)(param_1 + 0x84);
  local_4c = 0;
  do {
    local_38 = *(int *)(iVar11 + 0x48 + local_4c * 4);
    if (local_38 != 0) {
      local_48 = *(int *)(param_1 + 0x1628);
      if (local_48 <= *(int *)(param_1 + 0x162c)) {
        do {
          iVar5 = FUN_00739b40(local_4c,&local_40,&local_3c,DAT_00925e90 == 3);
          iVar7 = local_48;
          if (iVar5 != 0) {
            iVar7 = local_40;
            if (local_40 < local_48) {
              iVar7 = local_48;
            }
            if (local_3c < iVar7) {
              iVar7 = local_3c;
            }
          }
          local_34 = FUN_00751540(0,iVar7);
          if (local_34 != 0) {
            uVar10 = FUN_00465f70();
            iVar7 = local_48 + local_4c * 5;
            puVar8 = (uint *)(param_1 + 0xb84 + iVar7 * 4);
            *puVar8 = *(uint *)(param_1 + 0xb84 + iVar7 * 4) & 1 | uVar10;
            FUN_00506af0(local_34);
            if (*(int *)(uVar10 + 0xc) == 0) {
              FUN_00501480();
              FUN_0045f2e0(uVar10);
              *puVar8 = *puVar8 & 1;
            }
            else {
              if ((local_4c < 0x46) || (0x4b < local_4c)) {
                if (local_4c == 0x3f) {
                  uVar1 = *(ushort *)(*(int *)(iVar11 + 0x144) + 10);
                  if (uVar1 != 0xffff) {
                    local_34 = (uint)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
                    psVar9 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar1 * 2);
                    iVar7 = 0;
                    if (0 < (int)local_34) {
                      do {
                        psVar9 = psVar9 + 1;
                        iVar5 = *(int *)(DAT_009b09d4 + 0x1c) + *psVar9 * 8;
                        if (*(int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar9 * 8) == 0x721aff7c) {
                          if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
                            FUN_004fb6e0(param_1 + 0x5a8,0x49,0);
                            *(undefined4 *)(param_1 + 0xf8) = 1;
                            goto LAB_00755a74;
                          }
                          break;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < (int)local_34);
                    }
                  }
                  FUN_004fb6e0(param_1 + 0x23c,0x49,0);
                  *(undefined4 *)(param_1 + 0xf8) = 0;
                  goto LAB_00755a74;
                }
                uVar6 = 0x49;
                iVar7 = param_1 + 0x23c;
              }
              else {
                uVar6 = 8;
                iVar7 = local_4c * 0x60 + -0x112c + param_1;
              }
              FUN_004fb6e0(iVar7,uVar6,0);
            }
          }
LAB_00755a74:
          local_48 = local_48 + 1;
        } while (local_48 <= *(int *)(param_1 + 0x162c));
      }
      switch(local_4c) {
      case 0:
      case 2:
      case 3:
      case 10:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x10:
      case 0x17:
      case 0x21:
      case 0x2a:
      case 0x2c:
      case 0x3e:
      case 0x3f:
        if ((*(uint *)(param_1 + 0xb84 + (local_4c * 5 + *(int *)(param_1 + 0x1628)) * 4) &
            0xfffffffc) != 0) {
          FUN_00501570(&local_30,&local_20);
          FUN_0045fd30(param_1 + 0x90,param_1 + 0xa0,&local_30,&local_20);
        }
      }
    }
    local_4c = local_4c + 1;
  } while (local_4c < 0x4c);
  local_48 = *(int *)(param_1 + 0x1628);
  if (local_48 <= *(int *)(param_1 + 0x162c)) {
    puVar8 = (uint *)(param_1 + 0x10c0 + local_48 * 4);
    do {
      local_34 = puVar8[-5] & 0xfffffffc;
      if ((local_34 != 0) && ((*puVar8 & 0xfffffffc) == 0)) {
        uVar10 = FUN_00465f70();
        *puVar8 = *puVar8 & 1 | uVar10;
        FUN_00506af0(*(undefined4 *)(local_34 + 8));
        if (*(int *)(uVar10 + 0xc) == 0) {
          FUN_00501480();
          FUN_0045f2e0(uVar10);
          *puVar8 = *puVar8 & 1;
        }
        else {
          FUN_004fb6e0(param_1 + 0x23c,0x49,0);
        }
      }
      local_34 = puVar8[-0xd7] & 0xfffffffc;
      if ((local_34 != 0) && ((puVar8[-0xa5] & 0xfffffffc) == 0)) {
        uVar10 = FUN_00465f70();
        puVar8[-0xa5] = puVar8[-0xa5] & 1 | uVar10;
        FUN_00506af0(*(undefined4 *)(local_34 + 8));
        if (*(int *)(uVar10 + 0xc) == 0) {
          FUN_00501480();
          FUN_0045f2e0(uVar10);
          puVar8[-0xa5] = puVar8[-0xa5] & 1;
        }
        else {
          FUN_004fb6e0(param_1 + 0x23c,0x49,0);
        }
      }
      local_48 = local_48 + 1;
      puVar8 = puVar8 + 1;
    } while (local_48 <= *(int *)(param_1 + 0x162c));
  }
  uVar10 = *(uint *)(param_1 + 0x10c0 + *(int *)(param_1 + 0x1628) * 4);
  if ((*(uint *)(param_1 + 0x10ac + *(int *)(param_1 + 0x1628) * 4) & 0xfffffffc) != 0) {
    FUN_00501570(&local_20,&local_30);
    fVar3 = local_2c - local_1c;
    if (fVar3 < _DAT_00890968) {
      fVar3 = -fVar3;
    }
    *(float *)(param_1 + 0x120) = fVar3;
    fVar3 = local_30 - local_20;
    if (fVar3 < _DAT_00890968) {
      fVar3 = -fVar3;
    }
    *(float *)(param_1 + 0x128) = fVar3 * _DAT_008933d4;
  }
  if ((uVar10 & 0xfffffffc) != 0) {
    FUN_00501570(&local_20,&local_30);
    local_2c = local_2c - local_1c;
    if (local_2c < _DAT_00890968) {
      local_2c = -local_2c;
    }
    *(float *)(param_1 + 300) = local_2c;
    *(float *)(param_1 + 0x124) = local_2c;
    local_30 = local_30 - local_20;
    if (local_30 < _DAT_00890968) {
      local_30 = -local_30;
    }
    *(float *)(param_1 + 300) = local_30 * _DAT_008933d4;
  }
  local_1c = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0xa4);
  fVar3 = (*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0xa0)) * _DAT_008933d4;
  fVar4 = local_1c * _DAT_008933d4;
  local_18 = (*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xa8)) * _DAT_008933d4;
  *(float *)(param_1 + 0xb8) = local_18;
  *(float *)(param_1 + 0xb0) = fVar3;
  *(float *)(param_1 + 0xb4) = fVar4;
  if (*(int *)(iVar11 + 0x48) != 0) {
    uVar6 = FUN_00751540(0,*(undefined4 *)(param_1 + 0x1628));
    iVar7 = FUN_00505340(uVar6);
    if (iVar7 != 0) {
      uVar6 = FUN_004fbac0(0xc93b73fd);
      *(undefined4 *)(param_1 + 0x1284) = uVar6;
      uVar6 = FUN_004fbac0(0xf0a9f3cf);
      *(undefined4 *)(param_1 + 0x1288) = uVar6;
      uVar6 = FUN_004fbac0(0x90c81258);
      goto LAB_00755db0;
    }
  }
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x1284) = 0;
  *(undefined4 *)(param_1 + 0x1288) = 0;
LAB_00755db0:
  *(undefined4 *)(param_1 + 0x128c) = uVar6;
  bVar2 = 1;
  if ((*(int *)(iVar11 + 0xf8) != 0) && ((*(byte *)(*(int *)(iVar11 + 0xf8) + 5) & 0xe0) != 0)) {
    bVar2 = 0;
  }
  iVar11 = *(int *)(param_1 + 0x1628);
  if (iVar11 <= *(int *)(param_1 + 0x162c)) {
    puVar8 = (uint *)(param_1 + 0xf08 + iVar11 * 4);
    do {
      *puVar8 = *puVar8 & 0xfffffffc | (uint)bVar2;
      iVar11 = iVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar11 <= *(int *)(param_1 + 0x162c));
  }
  FUN_00737c00(0,0x2e,0x33);
  return;
}

