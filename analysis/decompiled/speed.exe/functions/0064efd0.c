/* speed.exe 0064efd0 FUN_0064efd0; analysis pseudocode, not buildable source.
 * calls 0064ea60 FUN_0064ea60
 * calls 0064ebf0 FUN_0064ebf0
 */

void FUN_0064efd0(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  int unaff_ESI;
  uint uVar15;
  uint uVar16;
  uint local_42c;
  byte *local_428;
  uint local_424;
  uint local_420;
  int local_41c;
  uint local_418;
  uint local_414;
  uint local_40c;
  uint auStack_400 [256];
  
  puVar5 = (undefined4 *)(unaff_ESI + 0x100);
  for (iVar7 = 0x300; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar7 = 0;
  local_414 = 0;
  pbVar10 = *(byte **)(unaff_ESI + 0x2db0);
  uVar14 = 0x100;
  if (*(byte **)(unaff_ESI + 0x2db0) < *(byte **)(unaff_ESI + 0x2db4)) {
    do {
      uVar2 = (uint)*pbVar10;
      pbVar8 = pbVar10 + 1;
      iVar7 = iVar7 + uVar2;
      if (uVar2 == uVar14) {
        uVar15 = 0;
        pbVar13 = *(byte **)(unaff_ESI + 0x2db4);
        if (pbVar10 + 0x7531 <= *(byte **)(unaff_ESI + 0x2db4)) {
          pbVar13 = pbVar10 + 0x7531;
        }
        do {
          if (pbVar13 <= pbVar8) break;
          uVar2 = (uint)*pbVar8;
          uVar15 = uVar15 + 1;
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + uVar2;
        } while (uVar2 == uVar14);
        if (uVar15 < 0xff) {
          piVar11 = (int *)(unaff_ESI + 0x900 + uVar15 * 4);
          *piVar11 = *piVar11 + 1;
        }
        else {
          *(int *)(unaff_ESI + 0x900) = *(int *)(unaff_ESI + 0x900) + 1;
        }
      }
      piVar11 = (int *)(unaff_ESI + 0x100 + uVar2 * 4);
      *piVar11 = *piVar11 + 1;
      piVar11 = (int *)(unaff_ESI + 0x500 + (uVar2 - uVar14 & 0xff) * 4);
      *piVar11 = *piVar11 + 1;
      pbVar10 = pbVar8;
      uVar14 = uVar2;
    } while (pbVar8 < *(byte **)(unaff_ESI + 0x2db4));
  }
  *(int *)(unaff_ESI + 0x2dbc) = iVar7;
  if (*(int *)(unaff_ESI + 0x900) == 0) {
    *(undefined4 *)(unaff_ESI + 0x900) = 1;
  }
  uVar2 = 0;
  *(undefined4 *)(unaff_ESI + 0x2dd4) = 0;
  *(undefined4 *)(unaff_ESI + 0x2dd8) = 0;
  uVar14 = 0;
  do {
    uVar15 = *(uint *)(unaff_ESI + 0x100 + uVar2 * 4);
    iVar7 = unaff_ESI + 0x100 + uVar2 * 4;
    local_42c = 0;
    uVar3 = uVar2;
    if (uVar15 < *(uint *)(unaff_ESI + 0x100 + uVar14 * 4)) {
      uVar14 = uVar2;
    }
    for (; (uVar15 == 0 && (uVar3 < 0x100)); uVar3 = uVar3 + 1) {
      uVar15 = *(uint *)(iVar7 + 4);
      iVar7 = iVar7 + 4;
      local_42c = local_42c + 1;
    }
    if (*(uint *)(unaff_ESI + 0x2dd8) <= local_42c) {
      *(uint *)(unaff_ESI + 0x2dd0) = uVar2;
      *(uint *)(unaff_ESI + 0x2dd8) = local_42c;
      if (*(uint *)(unaff_ESI + 0x2dd4) <= local_42c) {
        *(undefined4 *)(unaff_ESI + 0x2dd0) = *(undefined4 *)(unaff_ESI + 0x2dcc);
        *(uint *)(unaff_ESI + 0x2dd8) = *(uint *)(unaff_ESI + 0x2dd4);
        *(uint *)(unaff_ESI + 0x2dcc) = uVar2;
        *(uint *)(unaff_ESI + 0x2dd4) = local_42c;
      }
    }
    uVar2 = uVar3 + 1;
  } while (uVar2 < 0x100);
  if (((param_1 & 0x20) != 0) && (*(int *)(unaff_ESI + 0x2dd4) == 0)) {
    *(undefined4 *)(unaff_ESI + 0x2dd4) = 1;
    *(uint *)(unaff_ESI + 0x2dcc) = uVar14;
  }
  uVar2 = ~param_1;
  if ((uVar2 & 2) != 0) {
    if (1 < *(uint *)(unaff_ESI + 0x2dd4)) {
      *(undefined4 *)(unaff_ESI + 0x2dd4) = 1;
    }
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(unaff_ESI + 0x2dd4) = 0;
    }
  }
  if ((uVar2 & 4) == 0) {
    if (10 < *(uint *)(unaff_ESI + 0x2dd8)) {
      uVar1 = *(undefined4 *)(unaff_ESI + 0x2dcc);
      local_42c = *(uint *)(unaff_ESI + 0x2dd4);
      *(undefined4 *)(unaff_ESI + 0x2dcc) = *(undefined4 *)(unaff_ESI + 0x2dd0);
      *(undefined4 *)(unaff_ESI + 0x2dd4) = *(undefined4 *)(unaff_ESI + 0x2dd8);
      *(undefined4 *)(unaff_ESI + 0x2dd0) = uVar1;
      *(uint *)(unaff_ESI + 0x2dd8) = local_42c;
    }
    uVar15 = *(uint *)(unaff_ESI + 0x2dd8);
    if ((uint)(*(int *)(unaff_ESI + 0x2dd4) << 2) < uVar15) {
      iVar7 = uVar15 - (uVar15 >> 2);
      *(uint *)(unaff_ESI + 0x2dd4) = uVar15 >> 2;
      *(int *)(unaff_ESI + 0x2dd8) = iVar7;
      *(int *)(unaff_ESI + 0x2dcc) = *(int *)(unaff_ESI + 0x2dd0) + iVar7;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x2dd8) = 0;
  }
  iVar7 = *(int *)(unaff_ESI + 0x2dd8);
  if (iVar7 != 0) {
    iVar9 = iVar7 + -(iVar7 / 2);
    *(int *)(unaff_ESI + 0x2ddc) = -(iVar7 / 2);
    local_414 = *(uint *)(unaff_ESI + 0x2de8) / 0x19;
    uVar15 = 1;
    *(int *)(unaff_ESI + 0x2de0) = iVar9;
    if (iVar9 != 0) {
      iVar7 = 0x40;
      puVar6 = (uint *)(unaff_ESI + 0x504);
      do {
        if (local_414 < *puVar6) {
          *(uint *)(unaff_ESI + (*(int *)(unaff_ESI + 0x2dd0) + iVar7) * 4) = *puVar6;
        }
        uVar15 = uVar15 + 1;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + 2;
      } while (uVar15 <= *(uint *)(unaff_ESI + 0x2de0));
    }
    uVar15 = 1;
    if (*(int *)(unaff_ESI + 0x2ddc) != 0) {
      puVar6 = (uint *)(unaff_ESI + 0x8fc);
      do {
        if (local_414 < *puVar6) {
          *(uint *)(unaff_ESI + 0xfc + (*(int *)(unaff_ESI + 0x2dd0) + uVar15 * 2) * 4) = *puVar6;
        }
        uVar15 = uVar15 + 1;
        puVar6 = puVar6 + -1;
      } while (uVar15 <= (uint)-*(int *)(unaff_ESI + 0x2ddc));
    }
    uVar15 = 0;
    uVar3 = 0;
    local_42c = 0;
    if (*(uint *)(unaff_ESI + 0x2dd8) != 0) {
      piVar11 = (int *)(unaff_ESI + 0x100 + *(int *)(unaff_ESI + 0x2dd0) * 4);
      do {
        if (*piVar11 != 0) {
          uVar15 = uVar3;
        }
        uVar3 = uVar3 + 1;
        piVar11 = piVar11 + 1;
        local_42c = uVar15;
      } while (uVar3 < *(uint *)(unaff_ESI + 0x2dd8));
    }
    iVar7 = (*(int *)(unaff_ESI + 0x2dd8) - local_42c) + -1;
    iVar9 = *(int *)(unaff_ESI + 0x2dd8) - iVar7;
    *(int *)(unaff_ESI + 0x2dd8) = iVar9;
    if (*(int *)(unaff_ESI + 0x2dcc) == *(int *)(unaff_ESI + 0x2dd0) + iVar9 + iVar7) {
      *(int *)(unaff_ESI + 0x2dcc) = *(int *)(unaff_ESI + 0x2dcc) - iVar7;
      *(int *)(unaff_ESI + 0x2dd4) = *(int *)(unaff_ESI + 0x2dd4) + iVar7;
    }
    *(int *)(unaff_ESI + 0x2ddc) = -(iVar9 / 2);
    *(int *)(unaff_ESI + 0x2de0) = iVar9 + -(iVar9 / 2);
  }
  if ((*(int *)(unaff_ESI + 0x2dd4) != 0) && (uVar15 = 0, *(int *)(unaff_ESI + 0x2dd4) != 0)) {
    puVar5 = (undefined4 *)(unaff_ESI + 0x900);
    do {
      *(undefined4 *)(unaff_ESI + 0x100 + (*(int *)(unaff_ESI + 0x2dcc) + uVar15) * 4) = *puVar5;
      uVar15 = uVar15 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar15 < *(uint *)(unaff_ESI + 0x2dd4));
  }
  FUN_0064ea60();
  if (1 < *(uint *)(unaff_ESI + 0x2dd4)) {
    uVar15 = 1;
    do {
      iVar7 = *(int *)(unaff_ESI + 0x2dcc) + uVar15;
      if (*(int *)(unaff_ESI + 0x100 + iVar7 * 4) != 0) {
        uVar4 = FUN_0064ebf0();
        uVar3 = *(uint *)(unaff_ESI + 0x2564 + iVar7 * 4);
        if ((uVar4 <= uVar3) ||
           ((uVar4 - uVar3) * *(int *)(unaff_ESI + 0x100 + iVar7 * 4) < uVar15 >> 1)) {
          *(undefined4 *)(unaff_ESI + 0x100 + iVar7 * 4) = 0;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(unaff_ESI + 0x2dd4));
  }
  puVar5 = (undefined4 *)(unaff_ESI + 0x100);
  uVar15 = 0;
  do {
    *(undefined4 *)((int)auStack_400 + uVar15) = *puVar5;
    *puVar5 = 0;
    puVar5[0x100] = 0;
    puVar5[0x200] = 0;
    uVar15 = uVar15 + 4;
    puVar5 = puVar5 + 1;
  } while (uVar15 < 0x400);
  local_428 = *(byte **)(unaff_ESI + 0x2db0);
  local_420 = 0x100;
  if (local_428 < *(byte **)(unaff_ESI + 0x2db4)) {
    do {
      local_418 = (uint)*local_428;
      pbVar10 = local_428 + 1;
      if (local_418 == local_420) {
        local_42c = 0;
        pbVar8 = local_428 + 0x7531;
        if (*(byte **)(unaff_ESI + 0x2db4) < local_428 + 0x7531) {
          pbVar8 = *(byte **)(unaff_ESI + 0x2db4);
        }
        do {
          if (pbVar8 <= pbVar10) break;
          local_418 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          local_42c = local_42c + 1;
        } while (local_418 == local_420);
        uVar3 = *(int *)(unaff_ESI + 0x2564 + local_420 * 4) * local_42c;
        uVar15 = *(uint *)(unaff_ESI + 0x2dd4);
        uVar4 = 32000;
        local_424 = 32000;
        if (uVar15 != 0) {
          iVar7 = *(int *)(unaff_ESI + 0x2dcc);
          if ((auStack_400[iVar7] != 0) && (local_424 = 0x14, local_42c < 0xfc)) {
            local_424 = *(int *)(unaff_ESI + 0x2564 + iVar7 * 4) + 3 +
                        *(int *)(unaff_ESI + 0xd44 + local_42c * 4) * 2;
          }
          if (1 < uVar15) {
            uVar15 = uVar15 - 1;
            uVar4 = 0;
            local_40c = 0;
            uVar16 = local_42c;
            if (uVar15 != 0) {
              puVar6 = auStack_400 + iVar7 + uVar15;
              piVar11 = (int *)(unaff_ESI + 0x2564 + (iVar7 + uVar15) * 4);
              do {
                if (*puVar6 != 0) {
                  uVar4 = local_40c + *piVar11 * (uVar16 / uVar15);
                  uVar16 = uVar16 - (uVar16 / uVar15) * uVar15;
                  local_40c = uVar4;
                }
                uVar15 = uVar15 - 1;
                puVar6 = puVar6 + -1;
                piVar11 = piVar11 + -1;
              } while (uVar15 != 0);
            }
            uVar14 = 0;
            if (uVar16 != 0) {
              uVar4 = 32000;
            }
          }
        }
        if ((local_424 < uVar3) || (uVar4 < uVar3)) {
          if (local_424 < uVar4) {
            *(int *)(unaff_ESI + 0x100 + *(int *)(unaff_ESI + 0x2dcc) * 4) =
                 *(int *)(unaff_ESI + 0x100 + *(int *)(unaff_ESI + 0x2dcc) * 4) + 1;
          }
          else {
            uVar15 = *(uint *)(unaff_ESI + 0x2dd4);
            uVar3 = local_42c;
            while( true ) {
              uVar15 = uVar15 - 1;
              uVar14 = 0;
              if (uVar15 == 0) break;
              iVar7 = *(int *)(unaff_ESI + 0x2dcc) + uVar15;
              if (auStack_400[iVar7] != 0) {
                uVar14 = uVar3 / uVar15;
                uVar3 = uVar3 - uVar14 * uVar15;
                piVar11 = (int *)(unaff_ESI + 0x100 + iVar7 * 4);
                *piVar11 = *piVar11 + uVar14;
              }
            }
          }
        }
        else {
          *(uint *)(unaff_ESI + 0x100 + local_420 * 4) =
               *(int *)(unaff_ESI + 0x100 + local_420 * 4) + local_42c;
        }
      }
      local_428 = pbVar10;
      uVar15 = local_418;
      if (*(int *)(unaff_ESI + 0x2dd8) == 0) {
LAB_0064f665:
        piVar11 = (int *)(unaff_ESI + 0x100 + uVar15 * 4);
        *piVar11 = *piVar11 + 1;
      }
      else {
        iVar7 = local_418 - local_420;
        uVar14 = 0;
        if ((iVar7 <= *(int *)(unaff_ESI + 0x2de0)) && (*(int *)(unaff_ESI + 0x2ddc) <= iVar7)) {
          uVar15 = *(int *)(unaff_ESI + 0x2dd0) + -2 + iVar7 * 2;
          if (local_418 < local_420) {
            uVar15 = *(int *)(unaff_ESI + 0x2dd0) + -1 + (local_420 - local_418) * 2;
          }
          if (local_414 < auStack_400[uVar15]) {
            uVar14 = (uint)(auStack_400[local_418] < 4);
            uVar3 = *(uint *)(unaff_ESI + 0x2564 + uVar15 * 4);
            uVar4 = *(uint *)(unaff_ESI + 0x2564 + local_418 * 4);
            if (uVar3 < uVar4) {
              uVar14 = uVar14 + 1;
            }
            if ((uVar3 == uVar4) &&
               (*(uint *)(unaff_ESI + 0x100 + local_418 * 4) <
                *(uint *)(unaff_ESI + 0x100 + uVar15 * 4))) {
              uVar14 = uVar14 + 1;
            }
            if (uVar14 != 0) goto LAB_0064f665;
          }
        }
        piVar11 = (int *)(unaff_ESI + 0x100 + local_418 * 4);
        *piVar11 = *piVar11 + 1;
      }
      local_420 = local_418;
    } while (local_428 < *(byte **)(unaff_ESI + 0x2db4));
  }
  if ((param_1 & 0x20) != 0) {
    *(int *)(unaff_ESI + 0x100 + *(int *)(unaff_ESI + 0x2dcc) * 4) =
         *(int *)(unaff_ESI + 0x100 + *(int *)(unaff_ESI + 0x2dcc) * 4) + 1;
  }
  FUN_0064ea60();
  *(undefined4 *)(unaff_ESI + 0x2dc8) = 0;
  if (param_2 < 99) {
    while( true ) {
      uVar15 = 0;
      puVar6 = (uint *)(unaff_ESI + 0x2564);
      uVar3 = 2;
      do {
        uVar4 = local_42c;
        if ((puVar6[-0x919] != 0) && (uVar15 <= *puVar6)) {
          uVar4 = uVar3 - 2;
          uVar15 = *puVar6;
          uVar14 = local_42c;
        }
        uVar16 = uVar4;
        if ((puVar6[-0x918] != 0) && (uVar15 <= puVar6[1])) {
          uVar16 = uVar3 - 1;
          uVar15 = puVar6[1];
          uVar14 = uVar4;
        }
        if ((puVar6[-0x917] != 0) && (uVar15 <= puVar6[2])) {
          uVar15 = puVar6[2];
          uVar14 = uVar16;
          uVar16 = uVar3;
        }
        local_42c = uVar16;
        if ((puVar6[-0x916] != 0) && (uVar15 <= puVar6[3])) {
          local_42c = uVar3 + 1;
          uVar15 = puVar6[3];
          uVar14 = uVar16;
        }
        uVar4 = uVar3 + 2;
        puVar6 = puVar6 + 4;
        uVar3 = uVar3 + 4;
      } while (uVar4 < 0x100);
      if (uVar15 <= param_2) break;
      uVar15 = 0;
      puVar6 = (uint *)(unaff_ESI + 0x2564);
      do {
        if ((puVar6[-0x919] != 0) && (*puVar6 < param_2)) break;
        if ((puVar6[-0x918] != 0) && (puVar6[1] < param_2)) {
          uVar15 = uVar15 + 1;
          break;
        }
        if ((puVar6[-0x917] != 0) && (puVar6[2] < param_2)) {
          uVar15 = uVar15 + 2;
          break;
        }
        if ((puVar6[-0x916] != 0) && (puVar6[3] < param_2)) {
          uVar15 = uVar15 + 3;
          break;
        }
        uVar15 = uVar15 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar15 < 0x100);
      if (uVar15 < 0x100) {
        local_41c = uVar15 * 4;
        puVar6 = (uint *)(unaff_ESI + 0x2564 + uVar15 * 4);
        uVar3 = uVar15;
        do {
          if (((puVar6[-0x919] != 0) && (*puVar6 < param_2)) &&
             (*(uint *)(unaff_ESI + 0x2564 + local_41c) < *puVar6)) {
            local_41c = (-0x2564 - unaff_ESI) + (int)puVar6;
            uVar15 = uVar3;
          }
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar3 < 0x100);
      }
      iVar7 = *(int *)(unaff_ESI + 0x2564 + uVar15 * 4) + 1;
      *(int *)(unaff_ESI + 0x2564 + uVar15 * 4) = iVar7;
      *(int *)(unaff_ESI + 0x2564 + local_42c * 4) = iVar7;
      piVar11 = (int *)(unaff_ESI + 0x2564 + uVar14 * 4);
      *piVar11 = *piVar11 + -1;
      *(uint *)(unaff_ESI + 0x2dc8) = param_2;
    }
  }
  if ((uVar2 & 8) != 0) {
    puVar5 = (undefined4 *)(unaff_ESI + 0x2564);
    for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = 8;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)(unaff_ESI + 0xd00) = 0;
  *(undefined4 *)(unaff_ESI + 0xd04) = 0;
  *(undefined4 *)(unaff_ESI + 0xd08) = 0;
  *(undefined4 *)(unaff_ESI + 0xd0c) = 0;
  *(undefined4 *)(unaff_ESI + 0xd10) = 0;
  *(undefined4 *)(unaff_ESI + 0xd14) = 0;
  *(undefined4 *)(unaff_ESI + 0xd18) = 0;
  *(undefined4 *)(unaff_ESI + 0xd1c) = 0;
  *(undefined4 *)(unaff_ESI + 0xd20) = 0;
  *(undefined4 *)(unaff_ESI + 0xd24) = 0;
  *(undefined4 *)(unaff_ESI + 0xd28) = 0;
  *(undefined4 *)(unaff_ESI + 0xd2c) = 0;
  *(undefined4 *)(unaff_ESI + 0xd30) = 0;
  *(undefined4 *)(unaff_ESI + 0xd34) = 0;
  *(undefined4 *)(unaff_ESI + 0xd38) = 0;
  *(undefined4 *)(unaff_ESI + 0xd3c) = 0;
  *(undefined4 *)(unaff_ESI + 0xd40) = 0;
  puVar6 = (uint *)(unaff_ESI + 0x2568);
  iVar7 = 0x40;
  do {
    uVar14 = puVar6[-1];
    if (uVar14 < 0x11) {
      *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) = *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) + 1;
    }
    uVar14 = *puVar6;
    if (uVar14 < 0x11) {
      *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) = *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) + 1;
    }
    uVar14 = puVar6[1];
    if (uVar14 < 0x11) {
      *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) = *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) + 1;
    }
    uVar14 = puVar6[2];
    if (uVar14 < 0x11) {
      *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) = *(int *)(unaff_ESI + 0xd00 + uVar14 * 4) + 1;
    }
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  uVar14 = 0;
  uVar2 = 1;
  piVar11 = (int *)(unaff_ESI + 0xd04);
  do {
    if (*piVar11 != 0) {
      uVar15 = 0;
      puVar12 = (uint *)(unaff_ESI + 0x2dec + iVar7 * 4);
      puVar6 = (uint *)(unaff_ESI + 0x2564);
      do {
        if (*puVar6 == uVar2) {
          *puVar12 = uVar15;
          iVar7 = iVar7 + 1;
          puVar12 = puVar12 + 1;
        }
        uVar15 = uVar15 + 1;
        puVar6 = puVar6 + 1;
        uVar14 = uVar2;
      } while (uVar15 < 0x100);
    }
    uVar2 = uVar2 + 1;
    piVar11 = piVar11 + 1;
  } while (uVar2 < 0x11);
  *(uint *)(unaff_ESI + 0x2dc0) = uVar14;
  iVar7 = 0;
  uVar2 = 0;
  uVar14 = 0;
  if (*(int *)(unaff_ESI + 0x2dc4) != 0) {
    piVar11 = (int *)(unaff_ESI + 0x2dec);
    do {
      uVar15 = *(uint *)(unaff_ESI + 0x2564 + *piVar11 * 4);
      if (uVar2 < uVar15) {
        iVar9 = uVar15 - uVar2;
        uVar2 = uVar2 + iVar9;
        do {
          iVar7 = iVar7 << 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(int *)(unaff_ESI + 0x2964 + *piVar11 * 4) = iVar7;
      iVar7 = iVar7 + 1;
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar14 < *(uint *)(unaff_ESI + 0x2dc4));
  }
  return;
}

