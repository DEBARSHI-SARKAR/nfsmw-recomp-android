/* speed.exe 004e9420 FUN_004e9420; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 */

void __fastcall FUN_004e9420(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  iVar12 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    puVar5 = *(uint **)(param_1 + 0x130);
    do {
      uVar2 = *puVar5 & 0xe0000000;
      bVar1 = true;
      if ((uVar2 == 0x60000000 || uVar2 == 0x40000000) || uVar2 == 0x80000000) {
        puVar3 = *(uint **)(param_1 + 0x130);
        iVar10 = iVar12;
        if (0 < iVar12) {
          do {
            if ((*puVar3 & 0xe0fffff0) == (*puVar5 & 0xe0fffff0)) {
              bVar1 = false;
            }
            iVar10 = iVar10 + -1;
            puVar3 = puVar3 + 4;
          } while (iVar10 != 0);
        }
      }
      else {
        bVar1 = false;
      }
      puVar5 = puVar5 + 4;
      if (bVar1) {
        local_14 = local_14 + 1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x7c));
  }
  iVar12 = *(int *)(param_1 + 0x80);
  iVar10 = 0;
  local_18 = 0;
  if (0 < iVar12) {
    do {
      uVar2 = (*(uint **)(param_1 + 300))[iVar10];
      uVar4 = uVar2 & 0xe0000000;
      bVar1 = true;
      if (((uVar4 == 0x40000000) || (uVar4 == 0x60000000)) || (uVar4 == 0x80000000)) {
        puVar5 = *(uint **)(param_1 + 300);
        iVar15 = iVar10;
        if (0 < iVar10) {
          do {
            if ((uVar2 & 0xe0fffff0) == (*puVar5 & 0xe0fffff0)) {
              bVar1 = false;
            }
            iVar15 = iVar15 + -1;
            puVar5 = puVar5 + 1;
          } while (iVar15 != 0);
          if (!bVar1) goto LAB_004e953c;
        }
        local_18 = local_18 + 1;
      }
LAB_004e953c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x80));
  }
  iVar10 = *(int *)(param_1 + 0x180);
  iVar15 = 0;
  local_1c = 0;
  if (0 < iVar10) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14c) + 4);
    puVar11 = puVar6;
    do {
      bVar1 = true;
      puVar8 = puVar6;
      iVar13 = iVar15;
      if (iVar15 < 1) {
LAB_004e95b0:
        bVar1 = true;
        if (0 < iVar12) {
          puVar5 = *(uint **)(param_1 + 300);
          iVar13 = *(int *)(param_1 + 0x80);
          do {
            if ((*puVar5 & 0xe0fffff0) == (*(uint *)*puVar11 & 0xe0fffff0)) {
              bVar1 = false;
            }
            puVar5 = puVar5 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (bVar1) {
          local_1c = local_1c + 1;
        }
      }
      else {
        do {
          if ((*(uint *)*puVar11 & 0xe0fffff0) == (*(uint *)*puVar8 & 0xe0fffff0)) {
            bVar1 = false;
          }
          iVar13 = iVar13 + -1;
          puVar8 = puVar8 + 2;
        } while (iVar13 != 0);
        if (bVar1) goto LAB_004e95b0;
      }
      iVar15 = iVar15 + 1;
      puVar11 = puVar11 + 2;
    } while (iVar15 < iVar10);
  }
  local_20 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x38) + 4)) {
    local_24 = *(int **)(param_1 + 0x5c);
    local_c = *(int *)(*(int *)(param_1 + 0x38) + 4);
    do {
      iVar15 = *local_24;
      if (iVar15 != 0) {
        uVar2 = 0;
        if (0 < *(int *)(iVar15 + 0x50)) {
          iVar13 = *(int *)(iVar15 + 0x5c);
          do {
            if ((iVar13 == 0) || (*(int *)(iVar13 + 0x50) <= (int)(uVar2 & 0xff))) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)(*(int *)(iVar13 + 0x18) + (uVar2 & 0xff) * 8);
            }
            uVar14 = *(uint *)(*(int *)*puVar6 + 8) & 0xe0fffff0;
            uVar4 = 0;
            bVar1 = true;
            if ((int)uVar2 < 1) {
LAB_004e96aa:
              bVar1 = true;
              if (0 < iVar12) {
                puVar5 = *(uint **)(param_1 + 300);
                iVar9 = *(int *)(param_1 + 0x80);
                do {
                  if ((*puVar5 & 0xe0fffff0) == uVar14) {
                    bVar1 = false;
                  }
                  puVar5 = puVar5 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              if (bVar1) {
                bVar1 = true;
                if (0 < iVar10) {
                  iVar9 = *(int *)(param_1 + 0x180);
                  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14c) + 4);
                  do {
                    if (*(uint *)*puVar6 == uVar14) {
                      bVar1 = false;
                    }
                    puVar6 = puVar6 + 2;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
                if (bVar1) {
                  local_20 = local_20 + *(int *)(*(int *)(iVar15 + 0x5c) + 0x3c);
                }
              }
            }
            else {
              do {
                if ((iVar13 == 0) || (*(int *)(iVar13 + 0x50) <= (int)(uVar4 & 0xff))) {
                  puVar6 = (undefined4 *)0x0;
                }
                else {
                  puVar6 = (undefined4 *)(*(int *)(iVar13 + 0x18) + (uVar4 & 0xff) * 8);
                }
                if ((*(uint *)(*(int *)*puVar6 + 8) & 0xe0fffff0) == uVar14) {
                  bVar1 = false;
                }
                uVar4 = uVar4 + 1;
              } while ((int)uVar4 < (int)uVar2);
              if (bVar1) goto LAB_004e96aa;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < *(int *)(iVar15 + 0x50));
        }
      }
      local_24 = local_24 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  uVar7 = FUN_004ac040((local_20 + local_1c + local_18 + local_14) * 0x40,
                       "DMIX SFXOBJ, SFXCTL Input Block",0);
  *(undefined4 *)(param_1 + 0x128) = uVar7;
  return;
}

