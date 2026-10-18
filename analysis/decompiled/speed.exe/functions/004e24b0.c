/* speed.exe 004e24b0 FUN_004e24b0; analysis pseudocode, not buildable source.
 * calls 004e2230 FUN_004e2230
 * calls 004e2460 FUN_004e2460
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004ac040 FUN_004ac040
 */

void __fastcall FUN_004e24b0(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint local_1c;
  uint local_14;
  int local_10;
  uint local_c;
  
  iVar6 = param_1[0x15];
  piVar9 = (int *)(*(int *)(iVar6 + 8) + iVar6);
  FUN_004e2230();
  FUN_004e2460();
  param_1[0x19] = 0;
  local_1c = 0;
  piVar15 = param_1;
  if (0 < *(int *)(iVar6 + 4)) {
    do {
      piVar15 = piVar15 + 1;
      if (*piVar9 != -1) {
        iVar10 = *piVar9 + iVar6;
        param_1[0x19] = param_1[0x19] + *piVar15;
        if (*(int *)(iVar10 + 4) != -1) {
          iVar4 = FUN_004ac040(*(int *)(*(int *)(iVar10 + 4) + iVar10) << 2,"Temp MIXMAP ALLOC",0);
          piVar13 = (int *)(*(int *)(iVar10 + 4) + iVar10);
          param_1[0x5f] = param_1[0x5f] + *piVar15 * *(int *)(*(int *)(iVar10 + 4) + iVar10);
          param_1[0x1c] = param_1[0x1c] + *piVar13;
          param_1[0x5e] = param_1[0x5e] + piVar13[1] * *piVar15;
          piVar16 = piVar13 + 4;
          local_14 = 0;
          if (0 < *piVar13) {
            do {
              uVar5 = local_14;
              iVar8 = *piVar16;
              bVar2 = *(byte *)((int)piVar16 + 6);
              bVar3 = true;
              uVar11 = bVar2 & 0xf;
              *(int *)(iVar4 + local_14 * 4) = iVar8;
              iVar7 = 0;
              if ((int)local_14 < 1) {
LAB_004e25cc:
                param_1[(iVar8 >> 0x18 & 0xfU) * 2 + 0x22] =
                     param_1[(iVar8 >> 0x18 & 0xfU) * 2 + 0x22] + *piVar15;
              }
              else {
                do {
                  if (*(int *)(iVar4 + iVar7 * 4) == *piVar16) {
                    bVar3 = false;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_14);
                if (bVar3) goto LAB_004e25cc;
              }
              iVar8 = 0;
              piVar12 = piVar16 + 2;
              local_14 = uVar11;
              if ((bVar2 & 0xf) != 0) {
                do {
                  if (*(byte *)((int)piVar12 + 2) == local_1c) {
                    iVar8 = iVar8 + 1;
                  }
                  else {
                    iVar8 = iVar8 + param_1[*(byte *)((int)piVar12 + 2) + 1];
                  }
                  piVar12 = piVar12 + 1;
                  local_14 = local_14 - 1;
                } while (local_14 != 0);
              }
              param_1[0x20] = param_1[0x20] + *piVar15 * iVar8;
              piVar16 = piVar16 + uVar11 + 2;
              local_14 = uVar5 + 1;
            } while ((int)local_14 < *piVar13);
          }
          FUN_004ac0e0(iVar4);
        }
        iVar4 = *(int *)(iVar10 + 8);
        if (iVar4 != -1) {
          iVar8 = *piVar15;
          uVar5 = *(uint *)(iVar4 + iVar10) & 0xff;
          param_1[0x38] = param_1[0x38] + uVar5;
          param_1[0x60] = param_1[0x60] + iVar8 * uVar5;
          iVar8 = iVar4 + 0x10 + iVar10;
          iVar4 = *(int *)(iVar4 + iVar10);
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              uVar5 = *(byte *)(iVar8 + 3) & 0xf;
              iVar7 = iVar7 + uVar5;
              iVar4 = iVar4 + -1;
              iVar8 = iVar8 + uVar5 * 0x18;
            } while (iVar4 != 0);
          }
          param_1[100] = param_1[100] + iVar7;
        }
        iVar4 = *(int *)(iVar10 + 0x18);
        if (iVar4 != -1) {
          param_1[99] = param_1[99] + *(int *)(iVar4 + iVar10) * *piVar15;
          param_1[0x39] = param_1[0x39] + *(int *)(iVar4 + iVar10);
          iVar8 = iVar4 + 0x10 + iVar10;
          local_10 = *(int *)(iVar4 + iVar10);
          iVar4 = 0;
          if (0 < local_10) {
            do {
              iVar7 = iVar8 + 0x18;
              uVar5 = *(byte *)(iVar8 + 6) & 0xf;
              local_c = uVar5;
              if ((*(byte *)(iVar8 + 6) & 0xf) != 0) {
                do {
                  if (*(byte *)(iVar7 + 2) == local_1c) {
                    iVar4 = iVar4 + 1;
                  }
                  else {
                    iVar4 = iVar4 + param_1[*(byte *)(iVar7 + 2) + 1];
                  }
                  iVar7 = iVar7 + 4;
                  local_c = local_c - 1;
                } while (local_c != 0);
              }
              iVar8 = iVar8 + 0x18 + uVar5 * 4;
              local_10 = local_10 + -1;
            } while (local_10 != 0);
          }
          param_1[0x20] = param_1[0x20] + *piVar15 * iVar4;
        }
        iVar4 = *(int *)(iVar10 + 0xc);
        if (iVar4 != -1) {
          param_1[0x36] = param_1[0x36] + *(int *)(iVar4 + iVar10);
          param_1[0x61] = param_1[0x61] + *(int *)(iVar4 + iVar10) * *piVar15;
          iVar7 = 0;
          iVar8 = iVar4 + 0x10 + iVar10;
          if (0 < *(int *)(iVar4 + iVar10)) {
            do {
              pbVar1 = (byte *)(iVar8 + 2);
              iVar8 = iVar8 + 8;
              iVar14 = 0;
              for (uVar5 = (uint)*pbVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
                if (*(byte *)(iVar8 + 2) == local_1c) {
                  iVar14 = iVar14 + 1;
                }
                else {
                  iVar14 = iVar14 + param_1[*(byte *)(iVar8 + 2) + 1];
                }
                iVar8 = iVar8 + 4;
              }
              param_1[0x67] = param_1[0x67] + *piVar15 * iVar14;
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(iVar4 + iVar10));
          }
        }
        iVar4 = *(int *)(iVar10 + 0x10);
        if (iVar4 != -1) {
          param_1[0x69] = param_1[0x69] + (*piVar15 + 1) * *(int *)(iVar4 + 4 + iVar10);
          param_1[0x37] = param_1[0x37] + *(int *)(iVar4 + iVar10);
          param_1[0x62] = param_1[0x62] + *piVar15 * *(int *)(iVar4 + iVar10);
          iVar7 = 0;
          iVar8 = iVar4 + 0x10 + iVar10;
          if (0 < *(int *)(iVar4 + iVar10)) {
            do {
              pbVar1 = (byte *)(iVar8 + 2);
              iVar8 = iVar8 + 0xc;
              iVar14 = 0;
              for (uVar5 = (uint)*pbVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
                if (*(byte *)(iVar8 + 2) == local_1c) {
                  iVar14 = iVar14 + 1;
                }
                else {
                  iVar14 = iVar14 + param_1[*(byte *)(iVar8 + 2) + 1];
                }
                iVar8 = iVar8 + 4;
              }
              param_1[0x65] = param_1[0x65] + *piVar15 * iVar14;
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(iVar4 + iVar10));
          }
        }
      }
      piVar9 = piVar9 + 1;
      local_1c = local_1c + 1;
    } while ((int)local_1c < *(int *)(iVar6 + 4));
  }
  iVar6 = param_1[0x1f];
  param_1[0x1f] = iVar6 + param_1[0x22];
  iVar6 = iVar6 + param_1[0x22] + param_1[0x24];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x26];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x28];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x2a];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x2c];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x2e];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x30];
  param_1[0x1f] = iVar6;
  iVar6 = iVar6 + param_1[0x32];
  param_1[0x1f] = iVar6;
  param_1[0x1f] = param_1[0x34] + iVar6;
  return;
}

