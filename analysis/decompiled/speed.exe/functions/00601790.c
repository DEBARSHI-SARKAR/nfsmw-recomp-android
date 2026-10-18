/* speed.exe 00601790 FUN_00601790; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 005fbd90 FUN_005fbd90
 * calls 005faa20 FUN_005faa20
 * calls 005e9ec0 FUN_005e9ec0
 * calls 00454810 FUN_00454810
 * calls 005f2090 FUN_005f2090
 * calls 00452430 FUN_00452430
 * calls 00401670 FUN_00401670
 * calls 00600a20 FUN_00600a20
 * calls 00766810 FUN_00766810
 * calls 005e8130 FUN_005e8130
 * calls 006269b0 FUN_006269b0
 * calls 005c6bb0 FUN_005c6bb0
 * calls 005e28b0 FUN_005e28b0
 * calls 005da0b0 FUN_005da0b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00601790(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 **ppuVar12;
  float10 fVar13;
  float fVar14;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *local_90 [33];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087618e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_90[0x20] = param_1;
  FUN_005e8130(param_2,5);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a3a84;
  FUN_00766810();
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar5 = &DAT_008a3028;
  ppuVar12 = local_90 + 0x10;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppuVar12 = (undefined4 *)*puVar5;
    puVar5 = puVar5 + 1;
    ppuVar12 = ppuVar12 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 1.0;
  local_90[0x10] = (undefined4 *)0x3f800000;
  local_90[0x15] = (undefined4 *)0x3f800000;
  local_90[0x1a] = (undefined4 *)0x3f800000;
  local_90[0x1f] = (undefined4 *)0x3f800000;
  local_90[0x1e] = (undefined4 *)0x0;
  local_90[0x1d] = (undefined4 *)0x0;
  local_90[0x1c] = (undefined4 *)0x0;
  local_90[0x1b] = (undefined4 *)0x0;
  local_90[0x19] = (undefined4 *)0x0;
  local_90[0x18] = (undefined4 *)0x0;
  local_90[0x17] = (undefined4 *)0x0;
  local_90[0x16] = (undefined4 *)0x0;
  local_90[0x14] = (undefined4 *)0x0;
  local_90[0x13] = (undefined4 *)0x0;
  local_90[0x12] = (undefined4 *)0x0;
  local_90[0x11] = (undefined4 *)0x0;
  pfVar4 = (float *)FUN_00454810(0x5a6a57c6,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  FUN_005c6bb0(local_90 + 0x10,*pfVar4 * _DAT_008a3874,local_90 + 0x10);
  FUN_00401670(&local_c8,local_90 + 0x10,&local_c8);
  param_1[0x1a] = local_c8;
  param_1[0x1b] = local_c4;
  param_1[0x1c] = local_c0;
  FUN_005f2090(8);
  puVar5 = (undefined4 *)FUN_00454810(0x9f743a0e,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_006269b0(0xc);
  }
  pfVar4 = (float *)FUN_00454810(0x6d9e21ad,0);
  if (pfVar4 != (float *)0x0) {
    local_a8 = *pfVar4;
    local_a4 = pfVar4[1];
    local_a0 = pfVar4[2];
  }
  local_94 = *puVar5;
  local_98 = puVar5[2];
  local_9c = -(float)puVar5[1];
  local_b0 = local_a8;
  local_c0 = local_a8;
  puVar9 = &DAT_008a3028;
  ppuVar12 = local_90;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppuVar12 = (undefined4 *)*puVar9;
    puVar9 = puVar9 + 1;
    ppuVar12 = ppuVar12 + 1;
  }
  local_b8 = local_a4;
  local_b4 = local_a0;
  local_c8 = local_a4;
  local_c4 = local_a0;
  pfVar6 = (float *)FUN_00454810(0x39bf8002,0);
  if (pfVar6 == (float *)0x0) {
    if (pfVar4 == (float *)0x0) {
      pfVar4 = (float *)FUN_00454810(0x5816c1fc,0);
      if (pfVar4 == (float *)0x0) {
        pfVar4 = (float *)FUN_006269b0(4);
      }
      local_c8 = *pfVar4;
      fVar14 = local_c8 * _DAT_008933d4;
      local_c4 = 50.0;
      local_c0 = 1.0;
      param_1[0xe] = param_1[0xe] & 0xffffff1f | 0x10;
      fVar14 = fVar14 * fVar14 + _DAT_008910f0;
    }
    else {
      fVar14 = local_c8 * _DAT_008933d4;
      fVar2 = local_c0 * _DAT_008933d4;
      param_1[0xe] = param_1[0xe] & 0xffffff1f | 0x10;
      fVar14 = fVar14 * fVar14 + fVar2 * fVar2;
    }
    fVar13 = (float10)FUN_005c5e80(fVar14);
    local_bc = (float)fVar13;
  }
  else {
    local_bc = *pfVar6;
    local_c8 = local_bc + local_bc;
    param_1[0xe] = param_1[0xe] & 0xffffff3f | 0x30;
    local_c4 = local_c8;
    local_c0 = local_c8;
  }
  local_90[0] = (undefined4 *)0x3f800000;
  local_90[5] = (undefined4 *)0x3f800000;
  local_90[10] = (undefined4 *)0x3f800000;
  local_90[0xf] = (undefined4 *)0x3f800000;
  local_90[0xe] = (undefined4 *)0x0;
  local_90[0xd] = (undefined4 *)0x0;
  local_90[0xc] = (undefined4 *)0x0;
  local_90[0xb] = (undefined4 *)0x0;
  local_90[9] = (undefined4 *)0x0;
  local_90[8] = (undefined4 *)0x0;
  local_90[7] = (undefined4 *)0x0;
  local_90[6] = (undefined4 *)0x0;
  local_90[4] = (undefined4 *)0x0;
  local_90[3] = (undefined4 *)0x0;
  local_90[2] = (undefined4 *)0x0;
  local_90[1] = (undefined4 *)0x0;
  pfVar4 = (float *)FUN_00454810(0x5a6a57c6,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  FUN_005c6bb0(local_90,*pfVar4 * _DAT_008a3874,local_90);
  param_1[10] = local_90[0];
  param_1[0xf] = local_c4 + local_c4;
  param_1[0xb] = local_90[1];
  param_1[0xc] = local_90[2];
  param_1[0xd] = local_90[3];
  param_1[0xd] = local_c8;
  param_1[0x12] = local_90[8];
  param_1[0x13] = local_90[9];
  param_1[0x14] = local_90[10];
  param_1[0x15] = local_90[0xb];
  local_b4 = (float)local_98;
  param_1[0x15] = local_c0;
  local_b8 = local_9c;
  local_b0 = (float)local_94;
  local_ac = local_bc;
  param_1[0x16] = local_9c;
  param_1[0x17] = local_98;
  param_1[0x18] = local_94;
  param_1[0x19] = local_bc;
  param_1[0xe] = param_1[0xe] & 0xf0 | 0x4810d01;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  pcVar7 = (char *)FUN_00454810(0xce4261ac,0);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)FUN_006269b0(1);
  }
  if (*pcVar7 != '\0') {
    param_1[0xe] = param_1[0xe] | 0x200;
  }
  param_1[0x22] = 1;
  param_1[0x26] = 0xc34649c0;
  param_1[0x27] = 8;
  param_1[0x28] = 0x10;
  uVar8 = FUN_00452430();
  param_1[0x2b] = uVar8;
  param_1[0x10] = param_1 + 0x22;
  cVar3 = FUN_005e28b0(0xf05931ab);
  if (cVar3 != '\0') {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x200;
    puVar9 = (undefined4 *)FUN_00454810(0x277566f3,0);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_006269b0(4);
    }
    iVar11 = FUN_00600a20(*puVar9);
    if (iVar11 != 0) {
      cVar3 = FUN_005fbd90();
      if (cVar3 == '\0') {
        uVar8 = FUN_005faa20();
        switch(uVar8) {
        case 0:
          uVar8 = 1;
          break;
        case 1:
          uVar8 = 2;
          break;
        case 2:
          uVar8 = 3;
          break;
        case 3:
          uVar8 = 4;
          break;
        case 4:
          uVar8 = 5;
          break;
        case 5:
          uVar8 = 6;
          break;
        default:
          ExceptionList = local_c;
          return param_1;
        }
      }
      else {
        uVar8 = 7;
      }
LAB_00601e64:
      uVar8 = FUN_005e9ec0(uVar8,puVar5,0,0);
      param_1[0x30] = uVar8;
      ExceptionList = local_c;
      return param_1;
    }
    goto LAB_00601ee8;
  }
  cVar3 = FUN_005e28b0(0x73049919);
  if (cVar3 == '\0') {
    cVar3 = FUN_005e28b0(0x4698966b);
    if (cVar3 == '\0') {
      cVar3 = FUN_005e28b0(0x326427bb);
      if (cVar3 == '\0') {
        cVar3 = FUN_005e28b0(0xb05871d3);
        if (cVar3 == '\0') {
          cVar3 = FUN_005e28b0(0x45e28759);
          if (cVar3 != '\0') {
            *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 4;
            goto LAB_00601ee8;
          }
          cVar3 = FUN_005e28b0(0x76720f56);
          if (cVar3 != '\0') {
            *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 8;
            goto LAB_00601ee8;
          }
          cVar3 = FUN_005e28b0(0xa3e939e9);
          if (cVar3 != '\0') {
            *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 0x10;
            goto LAB_00601ee8;
          }
          cVar3 = FUN_005e28b0(0x98217dbf);
          if (cVar3 == '\0') goto LAB_00601ee8;
          uVar8 = 0xf;
        }
        else {
          *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 1;
          pcVar7 = (char *)FUN_005da0b0();
          if (*pcVar7 == '\0') {
            uVar8 = 0xe;
            goto LAB_00601e64;
          }
          uVar8 = 0xd;
        }
      }
      else {
        *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 0x80;
        uVar8 = 8;
      }
    }
    else {
      *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 0x40;
      uVar8 = 10;
    }
  }
  else {
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 0x20;
    uVar8 = 9;
  }
  uVar8 = FUN_005e9ec0(uVar8,puVar5,0,0);
  param_1[0x30] = uVar8;
LAB_00601ee8:
  if (param_1[0x30] != 0) {
    piVar10 = (int *)FUN_00454810(0x6ce23062,0);
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)FUN_006269b0(4);
    }
    if (0 < *piVar10) {
      bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
      piVar10 = (int *)FUN_00454810(0x6ce23062,0);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)FUN_006269b0(4);
      }
      if ((int)(uint)bVar1 <= *piVar10) {
        *(byte *)(param_1[0x30] + 2) = *(byte *)(param_1[0x30] + 2) | 1;
        *(byte *)(param_1[0x30] + 2) = *(byte *)(param_1[0x30] + 2) | 2;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

