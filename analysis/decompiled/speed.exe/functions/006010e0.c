/* speed.exe 006010e0 FUN_006010e0; analysis pseudocode, not buildable source.
 * calls 005da7a0 FUN_005da7a0
 * calls 00454810 FUN_00454810
 * calls 005fab40 FUN_005fab40
 * calls 006269b0 FUN_006269b0
 * calls 00600a20 FUN_00600a20
 */

void __fastcall FUN_006010e0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  short local_4;
  
  uVar10 = 0;
  local_4 = 0;
  iVar2 = FUN_005da7a0();
  sVar9 = 0;
  if (iVar2 != 0) {
    do {
      local_4 = sVar9;
      puVar3 = (undefined4 *)FUN_00454810(0xa7ef40ef,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_006269b0(4);
      }
      iVar2 = FUN_00600a20(*puVar3);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_005fab40();
      }
      piVar7 = (int *)DAT_0091e004[0xf];
      uVar8 = 0;
      if (*DAT_0091e004 != 0) {
        do {
          if (*piVar7 == 0) break;
          if (*piVar7 == iVar2) goto LAB_00601155;
          piVar7 = piVar7 + 4;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *DAT_0091e004);
      }
      *piVar7 = iVar2;
LAB_00601155:
      if (((uint)piVar7[1] >> 1 & 1) != 0) {
        local_4 = local_4 + 1;
      }
      uVar10 = uVar10 + 1;
      uVar8 = FUN_005da7a0();
      sVar9 = local_4;
    } while (uVar10 < uVar8);
  }
  sVar9 = 0;
  puVar4 = (uint *)FUN_00454810(0x6ce23062,0);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)FUN_006269b0(4);
  }
  uVar10 = *(int *)(DAT_0091e00c + 0xa8) - 0x14;
  while (uVar8 = uVar10 + 0x14,
        uVar8 < (uint)(*(int *)(DAT_0091e00c + 0xa8) + *(int *)(DAT_0091e00c + 0xa4) * 0x14)) {
    if ((*puVar4 == 0) ||
       (puVar1 = (ushort *)(uVar10 + 0x1e), uVar10 = uVar8, (uint)*puVar1 == *puVar4))
    goto joined_r0x006011cb;
  }
  uVar8 = 0;
joined_r0x006011cb:
  while (uVar8 != 0) {
    if (*(char *)(uVar8 + 8) == '\x04') {
      sVar9 = sVar9 + 1;
    }
    puVar4 = (uint *)FUN_00454810(0x6ce23062,0);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)FUN_006269b0(4);
    }
    uVar10 = uVar8;
    do {
      uVar8 = uVar10 + 0x14;
      if ((uint)(*(int *)(DAT_0091e00c + 0xa8) + *(int *)(DAT_0091e00c + 0xa4) * 0x14) <= uVar8)
      goto LAB_00601229;
    } while ((*puVar4 != 0) &&
            (puVar1 = (ushort *)(uVar10 + 0x1e), uVar10 = uVar8, (uint)*puVar1 != *puVar4));
  }
LAB_00601229:
  puVar4 = (uint *)FUN_00454810(0x6ce23062,0);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)FUN_006269b0(4);
  }
  pbVar6 = (byte *)(*(int *)(DAT_0091e00c + 0xb0) + -0x14);
  while (pbVar5 = pbVar6 + 0x14,
        pbVar5 < (byte *)(*(int *)(DAT_0091e00c + 0xb0) + *(int *)(DAT_0091e00c + 0xac) * 0x14)) {
    if ((*puVar4 == 0) ||
       (puVar1 = (ushort *)(pbVar6 + 0x16), pbVar6 = pbVar5, (uint)*puVar1 == *puVar4))
    goto LAB_00601279;
  }
  pbVar5 = (byte *)0x0;
LAB_00601279:
  if (pbVar5 == (byte *)0x0) {
    *(short *)(param_1 + 0x18) = sVar9;
    *(short *)(param_1 + 0x1a) = local_4;
    return;
  }
  do {
    if ((*pbVar5 >> 2 & 1) != 0) {
      sVar9 = sVar9 + 1;
    }
    puVar4 = (uint *)FUN_00454810(0x6ce23062,0);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)FUN_006269b0(4);
    }
    pbVar6 = pbVar5;
    do {
      pbVar5 = pbVar6 + 0x14;
      if ((byte *)(*(int *)(DAT_0091e00c + 0xb0) + *(int *)(DAT_0091e00c + 0xac) * 0x14) <= pbVar5)
      {
        *(short *)(param_1 + 0x18) = sVar9;
        *(short *)(param_1 + 0x1a) = local_4;
        return;
      }
    } while ((*puVar4 != 0) &&
            (puVar1 = (ushort *)(pbVar6 + 0x16), pbVar6 = pbVar5, (uint)*puVar1 != *puVar4));
  } while (pbVar5 != (byte *)0x0);
  *(short *)(param_1 + 0x18) = sVar9;
  *(short *)(param_1 + 0x1a) = local_4;
  return;
}

