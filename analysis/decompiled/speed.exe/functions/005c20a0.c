/* speed.exe 005c20a0 FUN_005c20a0; analysis pseudocode, not buildable source.
 * calls 005aea10 FUN_005aea10
 * calls 005b7780 FUN_005b7780
 * calls 005c1460 FUN_005c1460
 * calls 005b9640 FUN_005b9640
 */

void __thiscall FUN_005c20a0(int param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte local_a1;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  byte local_88 [4];
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  byte local_74 [20];
  byte local_60 [20];
  uint local_4c [4];
  uint local_3c;
  
  if (*(uint *)(param_2 + 0x20) == 0) {
    return;
  }
  bVar5 = false;
  bVar6 = 0;
  if (*(int *)(param_1 + 0xd0) == 0) {
    return;
  }
  uVar8 = 0;
  do {
    if ((*(uint *)(param_2 + 0x20) & 1 << ((byte)uVar8 & 0x1f)) != 0) {
      piVar9 = (int *)(uVar8 * 0x88 + *(int *)(param_1 + 4));
      bVar5 = (bool)(bVar5 | (piVar9[1] != 0 || *piVar9 != 0));
    }
    bVar6 = bVar6 + 1;
    uVar8 = (uint)bVar6;
  } while (uVar8 < *(uint *)(param_1 + 0xd0));
  if (!bVar5) {
    return;
  }
  puVar13 = local_4c;
  for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_84 = 0;
  local_74[4] = 0;
  local_74[5] = 0;
  local_74[6] = 0;
  local_74[7] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_80 = 0;
  local_74[8] = 0;
  local_74[9] = 0;
  local_74[10] = 0;
  local_74[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_7c = 0;
  local_74[0xc] = 0;
  local_74[0xd] = 0;
  local_74[0xe] = 0;
  local_74[0xf] = 0;
  local_60[0x10] = 0;
  local_60[0x11] = 0;
  local_78 = 0;
  local_74[0x10] = 0;
  local_74[0x11] = 0;
  local_60[0x12] = 0;
  local_76 = 0;
  local_74[0x12] = 0;
  local_a0 = 4;
  do {
    if (*(char *)(param_2 + 0x28) == '\0') break;
    uVar11 = 1 << ((byte)local_a0 & 0x1f);
    uVar8 = *(uint *)(param_2 + 0x20);
    uVar14 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_a1 = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        bVar6 = (byte)uVar14;
        if ((uVar8 & 1 << (bVar6 & 0x1f)) != 0) {
          puVar13 = (uint *)(uVar14 * 0x88 + *(int *)(param_1 + 4));
          if (((puVar13[1] & uVar11) == uVar11) && ((*puVar13 & uVar11) != uVar11)) {
            local_94 = local_94 | uVar11;
            local_88[local_a0] = local_88[local_a0] | '\x01' << (bVar6 & 0x1f);
          }
          if (((puVar13[1] & uVar11) != uVar11) && ((*puVar13 & uVar11) == uVar11)) {
            local_98 = local_98 | uVar11;
            local_74[local_a0] = local_74[local_a0] | '\x01' << (bVar6 & 0x1f);
          }
          if (((puVar13[1] & uVar11) == uVar11) && ((*puVar13 & uVar11) == uVar11)) {
            local_9c = local_9c | uVar11;
            uVar14 = FUN_005aea10(uVar11);
            if (uVar14 < local_4c[local_a0]) {
              uVar14 = local_4c[local_a0];
            }
            else {
              uVar14 = FUN_005aea10(uVar11);
            }
            local_4c[local_a0] = uVar14;
            local_60[local_a0] = local_60[local_a0] | '\x01' << (bVar6 & 0x1f);
          }
        }
        local_a1 = local_a1 + 1;
        uVar14 = (uint)local_a1;
      } while (uVar14 < *(uint *)(param_1 + 0xd0));
    }
    if (((local_a0 == 4) && (*(char *)(param_2 + 0x17) != '\0')) &&
       (local_a1 = 0, *(int *)(param_1 + 0xd0) != 0)) {
      uVar14 = 0;
      do {
        bVar6 = (byte)uVar14;
        if ((1 << (bVar6 & 0x1f) & uVar8) != 0) {
          pbVar1 = (byte *)(uVar14 * 0x88 + *(int *)(param_1 + 4));
          if ((pbVar1[4] & 0x40) == 0) {
LAB_005c230e:
            if ((*pbVar1 & 0x40) != 0) {
              local_98 = local_98 | 0x10;
              local_74[4] = local_74[4] | '\x01' << (bVar6 & 0x1f);
            }
            if ((pbVar1[4] & 0x40) == 0) goto LAB_005c2362;
          }
          else {
            if ((*pbVar1 & 0x40) == 0) {
              local_94 = local_94 | 0x10;
              local_84 = CONCAT31(local_84._1_3_,(byte)local_84 | '\x01' << (bVar6 & 0x1f));
            }
            if ((pbVar1[4] & 0x40) == 0) goto LAB_005c230e;
          }
          if ((*pbVar1 & 0x40) != 0) {
            local_9c = local_9c | 0x10;
            uVar14 = FUN_005aea10(0x40);
            if (local_3c <= uVar14) {
              local_3c = FUN_005aea10(0x40);
            }
            local_60[4] = local_60[4] | '\x01' << (bVar6 & 0x1f);
          }
        }
LAB_005c2362:
        local_a1 = local_a1 + 1;
        uVar14 = (uint)local_a1;
      } while (uVar14 < *(uint *)(param_1 + 0xd0));
    }
    if ((local_9c != 0 || local_98 != 0) || local_94 != 0) {
      iVar10 = *(int *)(param_2 + 0x8c);
      switch(local_a0) {
      case 4:
        if ((local_94 & 0x10) != 0) {
          *(int *)(param_1 + 0x80 + local_a0 * 4) = iVar10;
          if (iVar10 != 0) {
            for (iVar12 = *(int *)(iVar10 + 0x3c); iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
              if (*(int *)(iVar12 + 0xc) == 0xc407210) {
                uVar8 = local_84 & 0xff;
                FUN_005b7780(0xc407210,0,param_2,*(undefined4 *)(param_2 + 0x8c),uVar8);
                iVar12 = 0xc407210;
                iVar7 = *(int *)(param_2 + 0x8c);
                goto LAB_005c25f3;
              }
            }
          }
          iVar12 = *(int *)(param_2 + 0x5c);
          if (iVar12 != 0) {
LAB_005c2405:
            if (*(int *)(iVar12 + 0xc) != 0x406415e3) goto code_r0x005c240a;
            uVar8 = local_84 & 0xff;
            FUN_005b7780(0x406415e3,0,param_2,0xfffffffd,uVar8);
            iVar12 = 0x406415e3;
            iVar7 = 0;
LAB_005c25f3:
            FUN_005b7780(iVar12,iVar7,param_2,0xfffffffb,uVar8);
            break;
          }
        }
        break;
      case 7:
      case 8:
        if ((local_9c & uVar11) != 0) {
          bVar6 = local_88[local_a0];
          iVar12 = *(int *)(local_a0 * 4 + 0x8f5718);
          if (iVar10 != 0) {
            for (iVar7 = *(int *)(iVar10 + 0x3c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
              if (*(int *)(iVar7 + 0xc) == iVar12) {
                FUN_005b7780(iVar12,0,param_2,iVar10,bVar6);
                iVar7 = iVar10;
                goto LAB_005c2532;
              }
            }
          }
          iVar7 = *(int *)(param_2 + 0x5c);
          if (iVar7 != 0) {
LAB_005c24d0:
            if (*(int *)(iVar7 + 0xc) != iVar12) goto code_r0x005c24d5;
            FUN_005b7780(iVar12,0,param_2,0xfffffffd,bVar6);
            iVar7 = 0;
LAB_005c2532:
            FUN_005b7780(iVar12,iVar7,param_2,0xfffffffb,bVar6);
          }
        }
      case 5:
      case 6:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
switchD_005c23b5_caseD_5:
        if ((local_94 & uVar11) != 0) {
          uVar8 = (uint)local_88[local_a0];
          *(int *)(param_1 + 0x80 + local_a0 * 4) = iVar10;
          iVar12 = *(int *)(local_a0 * 4 + 0x8f56e8);
          if (iVar10 != 0) {
            for (iVar7 = *(int *)(iVar10 + 0x3c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
              if (*(int *)(iVar7 + 0xc) == iVar12) {
                FUN_005b7780(iVar12,0,param_2,iVar10,uVar8);
                iVar7 = iVar10;
                goto LAB_005c25f3;
              }
            }
          }
          for (iVar7 = *(int *)(param_2 + 0x5c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            if (*(int *)(iVar7 + 0xc) == iVar12) {
              FUN_005b7780(iVar12,0,param_2,0xfffffffd,uVar8);
              iVar7 = 0;
              goto LAB_005c25f3;
            }
          }
        }
      }
switchD_005c23b5_default:
      if ((local_98 & uVar11) != 0) {
        bVar6 = local_74[local_a0];
        iVar12 = *(int *)(local_a0 * 4 + 0x8f5740);
        if ((*(int *)(param_1 + 0x80 + local_a0 * 4) == iVar10) && (iVar10 != 0)) {
          *(undefined4 *)(param_1 + 0x80 + local_a0 * 4) = 0;
          if (local_a0 == 4) {
            iVar12 = -0x6c959581;
          }
          for (iVar7 = *(int *)(iVar10 + 0x3c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            if (*(int *)(iVar7 + 0xc) == iVar12) {
              FUN_005b7780(iVar12,0,param_2,iVar10,bVar6);
              FUN_005b7780(iVar12,iVar10,param_2,0xfffffffb,bVar6);
              break;
            }
          }
        }
        for (iVar10 = *(int *)(param_2 + 0x5c); iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
          if (*(int *)(iVar10 + 0xc) == iVar12) {
            FUN_005b7780(iVar12,0,param_2,0xfffffffd,bVar6);
            FUN_005b7780(iVar12,0,param_2,0xfffffffb,bVar6);
            break;
          }
        }
      }
      if (*(int *)(param_1 + 0x4114) != 0) {
        FUN_005c1460();
      }
    }
    local_a0 = local_a0 + 1;
  } while (local_a0 < 0x13);
  uVar8 = *(uint *)(param_2 + 0x20);
  cVar2 = *(char *)(param_2 + 0x28);
  local_94 = 0;
  local_a0 = 0;
  do {
    if (cVar2 == '\0') break;
    uVar11 = 1 << ((byte)local_a0 & 0x1f);
    local_a1 = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      uVar14 = 0;
      do {
        bVar6 = (byte)uVar14;
        if ((uVar8 & 1 << (bVar6 & 0x1f)) != 0) {
          puVar13 = (uint *)(uVar14 * 0x88 + *(int *)(param_1 + 4));
          if (((puVar13[1] & uVar11) == uVar11) && ((*puVar13 & uVar11) != uVar11)) {
            local_94 = local_94 | uVar11;
            local_88[local_a0] = local_88[local_a0] | '\x01' << (bVar6 & 0x1f);
          }
          if (((puVar13[1] & uVar11) == uVar11) && ((uVar11 & *puVar13) == uVar11)) {
            uVar14 = FUN_005aea10(uVar11);
            if (uVar14 < local_4c[local_a0]) {
              uVar14 = local_4c[local_a0];
            }
            else {
              uVar14 = FUN_005aea10(uVar11);
            }
            local_4c[local_a0] = uVar14;
            local_60[local_a0] = local_60[local_a0] | '\x01' << (bVar6 & 0x1f);
          }
        }
        local_a1 = local_a1 + 1;
        uVar14 = (uint)local_a1;
      } while (uVar14 < *(uint *)(param_1 + 0xd0));
    }
    local_a0 = local_a0 + 1;
  } while (local_a0 < 4);
  uVar8 = 0;
  while( true ) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      return;
    }
    iVar10 = *(int *)(param_2 + 0x8c);
    bVar6 = (&DAT_008f56c8)[uVar8 * 4];
    if ((&DAT_008f56c9)[uVar8 * 4] == 0xff) {
      local_98 = local_4c[bVar6];
      bVar4 = local_88[bVar6];
      bVar3 = local_60[bVar6];
      uVar11 = local_94 >> (bVar6 & 0x1f);
    }
    else {
      local_98 = local_4c[bVar6];
      if (local_4c[(byte)(&DAT_008f56c9)[uVar8 * 4]] <= local_4c[bVar6]) {
        local_98 = local_4c[(byte)(&DAT_008f56c9)[uVar8 * 4]];
      }
      bVar6 = (&DAT_008f56c9)[uVar8 * 4];
      bVar3 = (&DAT_008f56c8)[uVar8 * 4];
      uVar11 = local_94 >> (bVar6 & 0x1f) & local_94 >> (bVar3 & 0x1f);
      bVar4 = local_88[bVar6] & local_88[bVar3];
      bVar3 = local_60[bVar6] & local_60[bVar3];
    }
    bVar4 = bVar4 | bVar3;
    uVar15 = 1 << ((byte)uVar8 & 0x1f);
    uVar14 = (-(uint)((*(uint *)(param_1 + 0x28) & uVar15) != 0) & 0xffffff38) + 0x140;
    if (uVar14 <= local_98) break;
    if ((uVar11 & 1) == 0) {
      if (local_98 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & ~uVar15;
      }
    }
    else if (local_98 == 0) goto LAB_005c28fb;
    if (*(int *)(param_1 + 0x4114) != 0) {
      FUN_005c1460();
    }
    uVar8 = uVar8 + 1;
    if (7 < uVar8) {
      return;
    }
  }
  if (local_98 != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1 << ((byte)uVar8 & 0x1f);
  }
LAB_005c28fb:
  *(uint *)(param_1 + 0x34 + (uint)(byte)(&DAT_008f56c8)[uVar8 * 4] * 4) = uVar14;
  if ((&DAT_008f56c9)[uVar8 * 4] != 0xff) {
    *(uint *)(param_1 + 0x34 + (uint)(byte)(&DAT_008f56c9)[uVar8 * 4] * 4) = uVar14;
  }
  if ((&DAT_008f56c9)[uVar8 * 4] == -1) {
    bVar6 = (&DAT_008f56c8)[uVar8 * 4];
    local_4c[bVar6] = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1 << (bVar6 & 0x1f);
  }
  else {
    bVar6 = (&DAT_008f56c8)[uVar8 * 4];
    bVar3 = (&DAT_008f56c9)[uVar8 * 4];
    local_4c[bVar6] = 0;
    local_4c[bVar3] = 0;
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) | 1 << (bVar3 & 0x1f) | 1 << (bVar6 & 0x1f);
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)((uint)*(ushort *)(uVar8 * 4 + 0x8f56ca) * 4 + 0x8f5670);
    iVar12 = *(int *)(param_2 + 0x5c);
    if (iVar12 == 0) {
      return;
    }
    do {
      if (*(int *)(iVar12 + 0xc) == iVar10) {
        FUN_005b7780(iVar10,0,param_2,0xfffffffd,bVar4);
        FUN_005b7780(iVar10,0,param_2,0xfffffffb,bVar4);
        return;
      }
      iVar12 = *(int *)(iVar12 + 4);
    } while (iVar12 != 0);
    return;
  }
  uVar11 = (uint)*(ushort *)(uVar8 * 4 + 0x8f56ca);
  iVar12 = *(int *)(uVar11 * 4 + 0x8f5670);
  iVar7 = *(int *)(iVar10 + 0x3c);
  local_90 = 0;
  for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
    if (*(int *)(iVar7 + 0xc) == iVar12) {
      if (iVar7 != 0) {
        FUN_005b7780(iVar12,0,param_2,iVar10,bVar4);
        if ((*(uint *)(iVar10 + 0x1c) & 0x80000) != 0) goto LAB_005c2a05;
        uVar11 = 0;
        if (*(uint *)(iVar7 + 0x10) == 0) goto LAB_005c2ae1;
        piVar9 = *(int **)(iVar7 + 0x14);
        goto LAB_005c2ac6;
      }
      break;
    }
  }
  if ((*(uint *)(iVar10 + 0x1c) & 0x80000) == 0) {
    local_90 = FUN_005b9640(iVar10,uVar11,*(undefined4 *)(param_1 + 0x108),
                            *(undefined4 *)(param_1 + 0xcc));
  }
  FUN_005b7780(iVar12,0,param_2,0xfffffffd,bVar4);
  goto LAB_005c2a05;
code_r0x005c24d5:
  iVar7 = *(int *)(iVar7 + 4);
  if (iVar7 == 0) goto switchD_005c23b5_caseD_5;
  goto LAB_005c24d0;
code_r0x005c240a:
  iVar12 = *(int *)(iVar12 + 4);
  if (iVar12 == 0) goto switchD_005c23b5_default;
  goto LAB_005c2405;
  while( true ) {
    uVar11 = uVar11 + 1;
    piVar9 = piVar9 + 3;
    if (*(uint *)(iVar7 + 0x10) <= uVar11) break;
LAB_005c2ac6:
    if (*piVar9 == 0x104) {
      if (uVar11 != 0xffffffff) goto LAB_005c2a05;
      break;
    }
  }
LAB_005c2ae1:
  local_90 = FUN_005b9640(iVar10,*(undefined2 *)(uVar8 * 4 + 0x8f56ca),
                          *(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0xcc));
LAB_005c2a05:
  FUN_005b7780(iVar12,iVar10,param_2,0xfffffffb,bVar4);
  if (local_90 == 0) {
    return;
  }
  uVar8 = 4;
  do {
    if (*(int *)(param_1 + 0x80 + uVar8 * 4) != 0) {
      *(undefined4 *)(param_1 + 0x80 + uVar8 * 4) = 0;
      iVar12 = *(int *)(uVar8 * 4 + 0x8f5740);
      if (uVar8 == 4) {
        iVar12 = -0x6c959581;
      }
      for (iVar7 = *(int *)(iVar10 + 0x3c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
        if (*(int *)(iVar7 + 0xc) == iVar12) {
          FUN_005b7780(iVar12,0,param_2,iVar10,local_74[uVar8]);
          FUN_005b7780(iVar12,iVar10,param_2,0xfffffffb,local_74[uVar8]);
          break;
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (0x12 < uVar8) {
      if (*(int *)(param_2 + 0x8c) != 0) {
        FUN_005b7780(0x55d1e635,0,param_2,*(int *)(param_2 + 0x8c),0);
        FUN_005b7780(0x55d1e635,*(undefined4 *)(param_2 + 0x8c),param_2,0xfffffffb,0);
      }
      FUN_005b7780(0xabc08912,0,param_2,local_90,0);
      FUN_005b7780(0xabc08912,local_90,param_2,0xfffffffb,0);
      *(int *)(param_2 + 0x8c) = local_90;
      return;
    }
  } while( true );
}

