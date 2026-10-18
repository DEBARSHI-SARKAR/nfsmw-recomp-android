/* speed.exe 0081dbad FUN_0081dbad; analysis pseudocode, not buildable source.
 * calls 0081ec32 FUN_0081ec32
 * calls 008219bb FUN_008219bb
 * calls 00821b41 FUN_00821b41
 * calls 0081f6c3 FUN_0081f6c3
 * calls 0081f413 FUN_0081f413
 * calls 00822548 FUN_00822548
 * calls 008225bd FUN_008225bd
 * calls 0081dab6 FUN_0081dab6
 * calls 008224de FUN_008224de
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081dbad(int param_1,undefined4 *param_2,undefined2 *param_3,char *param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  undefined1 local_f4 [3];
  byte local_f1;
  undefined2 local_dc;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_18 = 0;
  if (DAT_009c2188 == '\0') {
    uVar10 = 0xfffffff6;
  }
  else {
    FUN_008225bd(param_4);
    local_f1 = *(byte *)((int)param_2 + 2);
    local_14 = (undefined4 *)(uint)local_f1;
    puVar4 = (undefined4 *)(&DAT_009c1f44)[param_1];
    local_dc = param_3[4];
    uVar10 = *param_2;
    local_18 = 0;
    puVar4[1] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[3] = 0;
    puVar4[0x18] = uVar10;
    puVar4[2] = 0;
    *(undefined2 *)((int)puVar4 + 0x46) = 0;
    *(undefined2 *)(puVar4 + 0x11) = 0;
    local_c = 0;
    if (*(char *)((int)puVar4 + 0x62) != '\0') {
      local_10 = puVar4 + 0x19;
      puVar7 = puVar4 + 10;
      local_8 = (undefined4 *)(param_3 + 0xc);
      do {
        local_c = local_c + 1;
        puVar2 = local_8 + 1;
        local_10[-0x15] = 0;
        *(undefined2 *)(puVar7 + 3) = 0;
        *(undefined2 *)puVar7 = 0;
        *local_10 = *local_8;
        local_10 = local_10 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
        local_8 = puVar2;
      } while (local_c < (int)(uint)*(byte *)((int)puVar4 + 0x62));
    }
    while (local_c = FUN_00822548(&local_18,local_f4), local_c != 0) {
      FUN_0081ec32(local_c,&local_1c,&local_28);
      local_8 = (undefined4 *)FUN_0081f413(local_14,0x65,&local_20,local_1c,local_28);
      if ((int)local_8 < 0) {
        *puVar4 = 0xfffffff7;
      }
      else {
        *puVar4 = local_20;
        uVar6 = FUN_0081dab6(local_8,*(undefined1 *)((int)param_2 + 2));
        *(undefined1 *)((int)puVar4 + 0x42) = uVar6;
        local_24 = (int)local_8 * 0x90;
        iVar13 = local_24 + DAT_009c21f4;
        *(undefined4 *)(iVar13 + 0x18) = 0xffffffff;
        *(undefined4 *)(iVar13 + 0x14) = 0;
        *(undefined2 *)(iVar13 + 0x20) = *(undefined2 *)param_2;
        *(undefined1 *)(iVar13 + 0x22) = *(undefined1 *)((int)param_2 + 3);
        *(undefined1 *)(iVar13 + 0x23) = *(undefined1 *)((int)param_2 + 2);
        if (*(char *)((int)param_2 + 2) == '\x01') {
          *(undefined2 *)(iVar13 + 0x1c) = *(undefined2 *)(param_4 + 8);
        }
        else {
          FUN_00821b41(iVar13);
        }
        *(undefined2 *)(iVar13 + 0x4c) = 0;
        fVar5 = _DAT_00890bf0;
        *(undefined2 *)(iVar13 + 0x12) = 0xffff;
        *(undefined2 *)(iVar13 + 0x88) = *param_3;
        *(undefined2 *)(iVar13 + 0x8c) = *(undefined2 *)(param_4 + 0xc);
        *(char *)(iVar13 + 0x68) = param_4[1];
        *(char *)(iVar13 + 0x60) = param_4[5];
        **(float **)(iVar13 + 100) = (float)(int)param_4[5] * fVar5;
        cVar3 = *(char *)(param_3 + 3);
        iVar11 = 0;
        *(undefined1 *)(iVar13 + 0x26) = 0;
        *(undefined1 *)(iVar13 + 0x27) = 0;
        *(undefined4 *)(iVar13 + 0x78) = 0;
        *(undefined4 *)(iVar13 + 0x80) = 0;
        *(short *)(iVar13 + 0x86) = cVar3 * 100;
        local_10 = (undefined4 *)(int)*param_4;
        *(float *)(iVar13 + 0x38) = (float)(int)local_10 * fVar5;
        uVar8 = (uint)*(byte *)((int)param_2 + 2);
        if (uVar8 != 0) {
          do {
            *(short *)(iVar13 + 0x50 + iVar11 * 2) =
                 param_3[iVar11 + 6] - *(short *)((int)&DAT_009c21f4 + (iVar11 + uVar8 * 6) * 2);
            iVar9 = *(short *)(iVar13 + 4 + iVar11 * 2) * 0x90 + DAT_009c21f4;
            *(undefined2 *)(iVar9 + 0x24) = (undefined2)local_c;
            *(char *)(iVar9 + 0x5f) = param_4[4];
            *(undefined1 *)(iVar9 + 0x2b) = *(undefined1 *)((int)param_3 + 3);
            uVar10 = *(undefined4 *)(iVar13 + 0x38);
            *(undefined4 *)(iVar9 + 0x30) = 0;
            *(undefined4 *)(iVar9 + 0x38) = uVar10;
            *(undefined4 *)(iVar9 + 0x74) = 0;
            *(undefined1 *)(iVar9 + 0x5e) = 0;
            *(undefined1 *)(iVar9 + 0x5d) = 0;
            *(undefined4 *)(iVar9 + 0x3c) = 0;
            *(undefined4 *)(iVar9 + 0x70) = 0;
            *(undefined4 *)(iVar9 + 0x7c) = 0;
            *(undefined1 *)(iVar9 + 0x5c) = 1;
            *(undefined4 *)(iVar9 + 0x40) = 0x7f0000;
            *(undefined4 *)(iVar9 + 0x44) = 0x7fffffff;
            fVar5 = _DAT_0090bd14 * *(float *)(iVar9 + 0x38);
            *(undefined2 *)(iVar9 + 0x1e) = 0;
            *(float *)(iVar9 + 0x48) = fVar5;
            *(bool *)(iVar9 + 0x4e) = iVar11 == 5;
            uVar8 = (uint)*(byte *)((int)param_2 + 2);
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar8);
        }
        if (*(char *)((int)param_2 + 2) == '\x01') {
          *(undefined2 *)(iVar13 + 0x1e) = *(undefined2 *)(param_4 + 10);
        }
        local_c = 0;
        if (*(char *)((int)param_2 + 2) != '\0') {
          psVar12 = (short *)(iVar13 + 0x50);
          do {
            psVar1 = (short *)(psVar12[-0x26] * 0x90 + DAT_009c21f4 + 0x1c);
            *psVar1 = *psVar1 + *psVar12;
            local_c = local_c + 1;
            psVar12 = psVar12 + 1;
          } while (local_c < (int)(uint)*(byte *)((int)param_2 + 2));
        }
        *(undefined2 *)(iVar13 + 0x8a) = 0;
        FUN_008219bb(local_8);
        local_10 = (undefined4 *)
                   FUN_008224de(param_1,local_8,*(undefined2 *)(param_4 + 0xe),
                                *(undefined2 *)(param_4 + 0x14),*(undefined2 *)(param_4 + 0x16),
                                param_2,param_3);
        if (-1 < (int)local_10) break;
        if (0 < (int)local_14) {
          iVar13 = local_24 + 4;
          local_8 = local_14;
          do {
            FUN_0081f6c3((int)*(short *)(iVar13 + DAT_009c21f4));
            iVar13 = iVar13 + 2;
            local_8 = (undefined4 *)((int)local_8 + -1);
          } while (local_8 != (undefined4 *)0x0);
        }
        *puVar4 = local_10;
      }
    }
    uVar10 = *puVar4;
  }
  return uVar10;
}

