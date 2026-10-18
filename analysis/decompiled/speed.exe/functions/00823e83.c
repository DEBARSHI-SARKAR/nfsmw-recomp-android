/* speed.exe 00823e83 FUN_00823e83; analysis pseudocode, not buildable source.
 * calls 00824ff0 FUN_00824ff0
 */

undefined4 FUN_00823e83(undefined4 *param_1,undefined2 *param_2)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  short *psVar8;
  bool bVar9;
  undefined4 auStack_4f8 [89];
  undefined4 auStack_394 [34];
  undefined4 uStack_30c;
  undefined4 *puStack_308;
  undefined4 local_2f8 [10];
  undefined4 local_2d0;
  undefined4 local_240 [18];
  int local_1f8;
  int local_1e4;
  int local_1dc;
  int local_1cc;
  int local_1c0;
  undefined4 local_194;
  undefined4 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_164;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_dc [7];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_68;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = param_2;
  local_dc[1] = 0;
  local_dc[2] = 0;
  local_dc[3] = 0;
  local_dc[4] = 0;
  local_dc[5] = 0;
  local_18 = *param_1;
  *(undefined4 *)(param_2 + 100) = local_18;
  puVar4 = local_240;
  for (iVar6 = 0x2b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_2f8;
  for (iVar6 = 0x2e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar7 = param_2 + 0x58;
  puVar4 = (undefined4 *)(param_2 + 0x4c);
  iVar6 = 6;
  do {
    *puVar4 = 0;
    *puVar7 = 0;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_a4 = 0xffffffff;
  local_17c = 0xffffffff;
  local_178 = 0xffffffff;
  local_c0 = 0;
  local_bc = 0x7f;
  local_b8 = 0;
  local_b4 = 0x7f;
  local_ac = 0;
  local_a8 = 0x3c;
  local_a0 = 1;
  local_9c = 0;
  local_94 = 0x40;
  local_90 = 0;
  local_8c = 0x7f;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  local_68 = 0;
  local_60 = &DAT_0090c6f4;
  local_5c = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_54 = 0x7f;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 1;
  local_194 = 0;
  local_18c = 1;
  local_184 = 0x5622;
  local_180 = 0;
  local_174 = 0;
  local_124 = 0;
  local_170 = 0;
  local_120 = 0;
  local_144 = 0;
  local_11c = 0;
  local_140 = 0;
  local_118 = 0;
  local_10c = 0;
  local_fc = 0;
  local_108 = 0;
  local_f8 = 0;
  local_114 = 10;
  local_164 = 0;
  param_2 = (undefined2 *)0x0;
  do {
    while( true ) {
      while( true ) {
        puStack_308 = &local_18;
        uStack_30c = 0x824111;
        iVar5 = FUN_00824ff0();
        iVar6 = local_14;
        if (iVar5 == 0) goto LAB_0082411f;
        if (0x2a < local_14) break;
        bVar9 = local_14 == 0x14;
        local_dc[local_14 + 6] = local_10;
        uVar3 = local_c;
        local_240[iVar6] = local_c;
        if (bVar9) {
          *(undefined4 *)(puVar2 + *(char *)((int)puVar2 + 0x17) * 2 + 0x1a) = uVar3;
          *(undefined4 *)(puVar2 + *(char *)((int)puVar2 + 0x17) * 2 + 0x22) = local_8;
          *(char *)((int)puVar2 + 0x17) = *(char *)((int)puVar2 + 0x17) + '\x01';
        }
      }
      if ((local_14 < 0x80) || (0xad < local_14)) break;
      bVar9 = local_14 == 0x98;
      auStack_394[local_14] = local_10;
      uVar3 = local_c;
      auStack_4f8[iVar6] = local_c;
      if (bVar9) {
        *(undefined4 *)(puVar2 + 0x4c) = uVar3;
        puVar2[0x58] = (undefined2)local_8;
      }
      else if (iVar6 == 0x99) {
        *(undefined4 *)(puVar2 + 0x4e) = uVar3;
        puVar2[0x59] = (undefined2)local_8;
      }
      else if (iVar6 == 0x9a) {
        *(undefined4 *)(puVar2 + 0x50) = uVar3;
        puVar2[0x5a] = (undefined2)local_8;
      }
      else if (iVar6 == 0x9b) {
        *(undefined4 *)(puVar2 + 0x52) = uVar3;
        puVar2[0x5b] = (undefined2)local_8;
      }
      else if (iVar6 == 0xa4) {
        *(undefined4 *)(puVar2 + 0x54) = uVar3;
        puVar2[0x5c] = (undefined2)local_8;
      }
      else if (iVar6 == 0xa5) {
        *(undefined4 *)(puVar2 + 0x56) = uVar3;
        puVar2[0x5d] = (undefined2)local_8;
      }
    }
  } while (local_14 != 0xfe);
  param_2 = (undefined2 *)0x1;
LAB_0082411f:
  *(undefined1 *)(puVar2 + 4) = (undefined1)local_c0;
  *(undefined1 *)((int)puVar2 + 9) = (undefined1)local_bc;
  *(undefined1 *)(puVar2 + 5) = (undefined1)local_b8;
  *(undefined1 *)((int)puVar2 + 0xb) = (undefined1)local_b4;
  *(undefined1 *)(puVar2 + 6) = (undefined1)local_ac;
  *(undefined1 *)((int)puVar2 + 0xd) = (undefined1)local_a8;
  *(undefined1 *)(puVar2 + 7) = (undefined1)local_a4;
  *(undefined1 *)((int)puVar2 + 0xf) = (undefined1)local_a0;
  *(undefined1 *)(puVar2 + 8) = (undefined1)local_9c;
  *(undefined1 *)((int)puVar2 + 0x11) = (undefined1)local_94;
  *(undefined1 *)(puVar2 + 9) = (undefined1)local_90;
  *(undefined1 *)(puVar2 + 10) = (undefined1)local_8c;
  *(undefined1 *)((int)puVar2 + 0x15) = (undefined1)local_88;
  puVar2[2] = (undefined2)local_84;
  puVar2[3] = (undefined2)local_80;
  *(int *)(puVar2 + 0x10) = local_1f8 + local_7c;
  *(undefined1 *)(puVar2 + 0xb) = (undefined1)local_78;
  *(int *)(puVar2 + 0x12) = local_1e4 + local_68;
  *(undefined **)(puVar2 + 0x14) = local_60 + local_1dc;
  *(undefined4 *)(puVar2 + 0x40) = local_5c;
  *(undefined4 *)(puVar2 + 0x42) = local_2c;
  *(undefined4 *)(puVar2 + 0x44) = local_28;
  *(undefined4 *)(puVar2 + 0x46) = local_24;
  *(undefined4 *)(puVar2 + 0x48) = local_20;
  *(undefined4 *)(puVar2 + 0x4a) = local_1c;
  *(undefined1 *)(puVar2 + 0xd) = (undefined1)local_54;
  *(int *)(puVar2 + 0x16) = local_1cc + local_50;
  *(undefined1 *)((int)puVar2 + 0x1b) = (undefined1)local_4c;
  *(undefined1 *)(puVar2 + 0xe) = (undefined1)local_48;
  *(int *)(puVar2 + 0x18) = local_1c0 + local_44;
  *(undefined1 *)((int)puVar2 + 0x1d) = (undefined1)local_40;
  puVar2[0x2a] = (undefined2)local_3c;
  *(undefined1 *)(puVar2 + 0xf) = (undefined1)local_38;
  *puVar2 = (undefined2)local_34;
  *(undefined1 *)((int)puVar2 + 0x1f) = (undefined1)local_30;
  *(undefined1 *)(puVar2 + 1) = (undefined1)local_194;
  *(undefined1 *)((int)puVar2 + 0x13) = (undefined1)local_114;
  puVar2[0x2b] = (undefined2)local_184;
  *(undefined4 *)(puVar2 + 0x2c) = local_180;
  *(undefined4 *)(puVar2 + 0x2e) = local_17c;
  *(undefined4 *)(puVar2 + 0x30) = local_178;
  puVar2[0xc] = (undefined2)local_164;
  *(undefined4 *)(puVar2 + 0x32) = local_2d0;
  *(undefined4 *)(puVar2 + 0x34) = local_174;
  local_dc[0] = local_124;
  *(undefined4 *)(puVar2 + 0x36) = local_170;
  local_dc[1] = local_120;
  *(undefined4 *)(puVar2 + 0x38) = local_144;
  local_dc[2] = local_11c;
  *(undefined4 *)(puVar2 + 0x3a) = local_140;
  local_dc[3] = local_118;
  *(undefined4 *)(puVar2 + 0x3c) = local_10c;
  local_dc[4] = local_fc;
  *(undefined4 *)(puVar2 + 0x3e) = local_108;
  local_dc[5] = local_f8;
  iVar6 = 0;
  *(char *)((int)puVar2 + 3) = (char)local_18c;
  if ('\0' < (char)local_18c) {
    psVar8 = puVar2 + 0x5e;
    do {
      if ((DAT_009c1fdc == 1) && (*(char *)((int)puVar2 + 3) == '\x02')) {
        local_dc[iVar6] = 0;
      }
      iVar5 = iVar6 + *(char *)((int)puVar2 + 3) * 6;
      psVar1 = (short *)(local_dc + iVar6);
      iVar6 = iVar6 + 1;
      *psVar8 = *(short *)((int)&DAT_009c21f4 + iVar5 * 2) + *psVar1;
      psVar8 = psVar8 + 1;
    } while (iVar6 < *(char *)((int)puVar2 + 3));
  }
  *param_1 = local_18;
  return param_2;
}

