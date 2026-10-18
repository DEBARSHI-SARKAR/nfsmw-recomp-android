/* speed.exe 004f9020 FUN_004f9020; analysis pseudocode, not buildable source.
 * calls 004b89a0 FUN_004b89a0
 * calls 004f7720 FUN_004f7720
 * calls 004eac70 FUN_004eac70
 * calls 004f4540 FUN_004f4540
 * calls 004ea810 FUN_004ea810
 * calls 004f2240 FUN_004f2240
 * calls 00452380 FUN_00452380
 * calls 004aecf0 FUN_004aecf0
 * calls 0045a430 FUN_0045a430
 * calls 004ebd10 FUN_004ebd10
 * calls 00455fd0 FUN_00455fd0
 * calls 004e4f20 FUN_004e4f20
 * calls 00453320 FUN_00453320
 * calls 00452430 FUN_00452430
 * calls 006269b0 FUN_006269b0
 * calls 0041b250 FUN_0041b250
 * calls 0041bbb0 FUN_0041bbb0
 */

void FUN_004f9020(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  void **ppvVar4;
  uint3 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_e0;
  undefined **local_dc;
  int *local_d8;
  uint local_d4;
  uint local_d0;
  int local_a4;
  int *piStack_98;
  undefined **local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int iStack_5c;
  undefined **local_50;
  int *local_4c;
  uint local_48;
  uint local_44;
  int iStack_20;
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_0086dcb8;
  local_14 = ExceptionList;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_d0 = 0;
  local_dc = &PTR_FUN_00899230;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_50 = &PTR_FUN_00899230;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_94 = &PTR_FUN_00899230;
  DAT_009142ec = 0;
  bVar13 = ~(byte)(*(uint *)(DAT_0091cf90 + 300) >> 2) & 1;
  local_c._1_3_ = 0;
  uVar5 = local_c._1_3_;
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  ExceptionList = &local_14;
  if (DAT_008efa3c != -1) goto LAB_004f9223;
  piVar9 = DAT_00913e74;
  ExceptionList = &local_14;
  ppvVar4 = &local_14;
  if (DAT_00913e74 != DAT_00913e74 + DAT_00913e7c) {
    do {
      iVar6 = *(int *)(*(int *)(*piVar9 + 0x14) + 0x228);
      if (((iVar6 == 1) || (iVar6 == 2)) && (*(char *)(*piVar9 + 0x11) == '\0')) {
        iVar6 = FUN_00452430();
        piVar10 = DAT_009147a8 + DAT_009147b0;
        piVar11 = DAT_009147a8;
        if (DAT_009147a8 != piVar10) {
          do {
            if (*piVar11 == iVar6) break;
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar10);
          if (piVar11 != piVar10) goto LAB_004f91a0;
        }
        iVar6 = FUN_00452430();
        piVar10 = local_d8 + local_d0;
        piVar11 = local_d8;
        if (local_d8 != piVar10) {
          do {
            if (*piVar11 == iVar6) break;
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar10);
          if (piVar11 != piVar10) goto LAB_004f91a0;
        }
        iVar6 = FUN_00452430();
        if (local_d4 <= local_d0) {
          uVar7 = (*(code *)local_dc[3])(local_d0 + 1);
          FUN_0041b250(uVar7);
        }
        if (local_d8 + local_d0 != (int *)0x0) {
          local_d8[local_d0] = iVar6;
        }
        local_d0 = local_d0 + 1;
      }
LAB_004f91a0:
      piVar9 = piVar9 + 1;
    } while (piVar9 != DAT_00913e74 + DAT_00913e7c);
    ppvVar4 = ExceptionList;
    if (local_d0 != 0) {
      iVar8 = local_d0 + DAT_009147b0;
      uVar5 = local_c._1_3_;
      piVar9 = DAT_00914664;
      iVar6 = DAT_0091466c;
      if (bVar13 == 0) {
        if (4 < iVar8) {
LAB_004f9223:
          local_c._1_3_ = uVar5;
          FUN_004f7720(local_d8,local_d8 + local_d0,(int)(local_d8 + local_d0) - (int)local_d8 >> 2,
                       FUN_004e6480);
          piVar9 = local_d8;
          if (local_d8 != local_d8 + local_d0) {
            do {
              uVar16 = 0;
              uVar15 = 0;
              uVar7 = FUN_00455fd0(0x50eab0e6,*piVar9,0,0);
              FUN_00452380(uVar7,uVar15,uVar16);
              local_c._0_1_ = 3;
              if (local_a4 == 0) {
                local_a4 = FUN_006269b0(0xa8);
              }
              local_c = CONCAT31(local_c._1_3_,4);
              if (*(char *)(local_a4 + 0xa2) != '\0') {
                iVar6 = FUN_00452430();
                if (local_48 <= local_44) {
                  uVar7 = (*(code *)local_50[3])(local_44 + 1);
                  FUN_0041b250(uVar7);
                }
                if (local_4c + local_44 != (int *)0x0) {
                  local_4c[local_44] = iVar6;
                }
                local_44 = local_44 + 1;
              }
              if (*(int *)(local_a4 + 0x40) == 2) {
                uVar7 = FUN_00452430();
                if (local_8c <= local_88) {
                  uVar15 = (*(code *)local_94[3])(local_88 + 1);
                  FUN_0041b250(uVar15);
                }
                puVar1 = (undefined4 *)(local_90 + local_88 * 4);
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = uVar7;
                }
                local_88 = local_88 + 1;
              }
              local_c._0_1_ = 2;
              FUN_0045a430();
              piVar9 = piVar9 + 1;
            } while (piVar9 != local_d8 + local_d0);
          }
          if ((bVar13 != 0) && (DAT_00914620 == 0)) {
            if (local_88 == 0) {
              iVar6 = FUN_004aecf0(4);
              iVar6 = *(int *)(&DAT_00897d7c + iVar6 * 4);
              if (local_8c <= local_88) {
                uVar7 = (*(code *)local_94[3])(local_88 + 1);
                FUN_0041b250(uVar7);
              }
              piVar9 = (int *)(local_90 + local_88 * 4);
              if (piVar9 != (int *)0x0) {
                *piVar9 = iVar6;
              }
              local_88 = local_88 + 1;
              if (DAT_009147ac <= DAT_009147b0) {
                uVar7 = (**(code **)(DAT_009147a4 + 0xc))(DAT_009147b0 + 1);
                FUN_0041b250(uVar7);
              }
              if (DAT_009147a8 + DAT_009147b0 != (int *)0x0) {
                DAT_009147a8[DAT_009147b0] = iVar6;
              }
              DAT_009147b0 = DAT_009147b0 + 1;
              if (DAT_0091461c <= DAT_00914620) {
                uVar7 = (**(code **)(DAT_00914614 + 0xc))(DAT_00914620 + 1);
                FUN_0041b250(uVar7);
              }
              piVar9 = (int *)(DAT_00914618 + DAT_00914620 * 4);
              if (piVar9 != (int *)0x0) {
                *piVar9 = iVar6;
              }
              DAT_00914620 = DAT_00914620 + 1;
              FUN_004ebd10(iVar6,iVar6);
            }
            else {
              DAT_00914b04 = DAT_00914b04 % local_88;
              piVar9 = (int *)(local_90 + DAT_00914b04 * 4);
              if (DAT_009147ac <= DAT_009147b0) {
                uVar7 = (**(code **)(DAT_009147a4 + 0xc))(DAT_009147b0 + 1);
                FUN_0041b250(uVar7);
              }
              uVar12 = DAT_00914b04;
              if (DAT_009147a8 + DAT_009147b0 != (int *)0x0) {
                DAT_009147a8[DAT_009147b0] = *piVar9;
              }
              DAT_009147b0 = DAT_009147b0 + 1;
              puVar1 = (undefined4 *)(local_90 + uVar12 * 4);
              if (DAT_0091461c <= DAT_00914620) {
                uVar7 = (**(code **)(DAT_00914614 + 0xc))(DAT_00914620 + 1);
                FUN_0041b250(uVar7);
                uVar12 = DAT_00914b04;
              }
              puVar2 = (undefined4 *)(DAT_00914618 + DAT_00914620 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = *puVar1;
              }
              DAT_00914620 = DAT_00914620 + 1;
              uVar7 = *(undefined4 *)(local_90 + uVar12 * 4);
              FUN_004ebd10(uVar7,uVar7);
              uVar12 = DAT_00914b04;
              piVar9 = local_d8;
              if (local_d8 != local_d8 + local_d0) {
                do {
                  if (*piVar9 == *(int *)(local_90 + DAT_00914b04 * 4)) break;
                  piVar9 = piVar9 + 1;
                } while (piVar9 != local_d8 + local_d0);
              }
              FUN_004eac70(piVar9,piVar9 + 1);
              DAT_00914b04 = uVar12 + 1;
            }
            DAT_00914b04 = DAT_00914b04 % local_88;
            while (local_44 != 0) {
              FUN_004ebd10(*local_4c,*DAT_009147a8);
              piVar9 = local_d8 + local_d0;
              if (local_d8 != piVar9) {
                piVar10 = local_d8;
                do {
                  if (*piVar10 == *local_4c) break;
                  piVar10 = piVar10 + 1;
                } while (piVar10 != piVar9);
                if (piVar10 != piVar9) {
                  FUN_004eac70(piVar10,piVar10 + 1);
                }
              }
              if (local_4c != (int *)0x0) {
                FUN_004eac70(local_4c,local_4c + 1);
              }
              DAT_00914b04 = DAT_00914b04 + 1;
              piVar9 = DAT_00914664;
              iVar6 = DAT_0091466c;
              if (DAT_009147b0 + local_d0 < 5) goto joined_r0x004f9a4f;
              DAT_00914b04 = DAT_00914b04 % local_88;
            }
          }
LAB_004f9682:
          iVar6 = local_d0 - 1;
          while (iVar8 = iVar6, -1 < iVar8) {
            iVar6 = iVar8 + -1;
            iVar14 = iVar6;
            if (0 < iVar8) {
              do {
                uVar16 = 0;
                uVar15 = 0;
                uVar7 = FUN_00455fd0(0x50eab0e6,local_d8[iVar14],0,0);
                FUN_00452380(uVar7,uVar15,uVar16);
                local_c._0_1_ = 5;
                if (local_a4 == 0) {
                  local_a4 = FUN_006269b0(0xa8);
                }
                uVar16 = 0;
                uVar15 = 0;
                local_c._0_1_ = 6;
                uVar7 = FUN_00455fd0(0x50eab0e6,local_d8[iVar8],0,0);
                FUN_00452380(uVar7,uVar15,uVar16);
                local_c._0_1_ = 7;
                if (iStack_5c == 0) {
                  iStack_5c = FUN_006269b0(0xa8);
                }
                local_c = CONCAT31(local_c._1_3_,8);
                if (*(int *)(local_a4 + 0x40) == *(int *)(iStack_5c + 0x40)) {
                  FUN_004ebd10(local_d8[iVar8],local_d8[iVar14]);
                  FUN_004ebd10(local_d8[iVar14],local_d8[iVar14]);
                  piVar9 = local_d8 + iVar14;
                  if (DAT_009147ac <= DAT_009147b0) {
                    uVar7 = (**(code **)(DAT_009147a4 + 0xc))(DAT_009147b0 + 1);
                    FUN_0041b250(uVar7);
                  }
                  if (DAT_009147a8 + DAT_009147b0 != (int *)0x0) {
                    DAT_009147a8[DAT_009147b0] = *piVar9;
                  }
                  DAT_009147b0 = DAT_009147b0 + 1;
                  piVar9 = local_d8 + local_d0;
                  piVar10 = local_d8;
                  piVar11 = local_d8;
                  if (local_d8 == piVar9) goto LAB_004f982d;
                  goto LAB_004f9810;
                }
                local_c._0_1_ = 6;
                FUN_0045a430();
                local_c._0_1_ = 2;
                FUN_0045a430();
                iVar14 = iVar14 + -1;
              } while (-1 < iVar14);
            }
          }
          goto LAB_004f9890;
        }
      }
      else if ((3 < iVar8) && ((4 < iVar8 || (local_88 == 0)))) goto LAB_004f9223;
      goto joined_r0x004f9a4f;
    }
  }
  ExceptionList = ppvVar4;
  local_c._0_1_ = 1;
  FUN_004f4540();
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004f4540();
  goto LAB_004f9bab;
  while (piVar10 = piVar10 + 1, piVar10 != piVar9) {
LAB_004f9810:
    if (*piVar10 == local_d8[iVar8]) break;
  }
  if (local_d8 != piVar9) {
    do {
      if (*piVar11 == local_d8[iVar14]) break;
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar9);
  }
LAB_004f982d:
  FUN_004eac70(piVar10,piVar10 + 1);
  FUN_004eac70(piVar11,piVar11 + 1);
  local_c._0_1_ = 6;
  if (DAT_009147b0 + local_d0 < 5) goto LAB_004f9a33;
  FUN_0045a430();
  local_c._0_1_ = 2;
  FUN_0045a430();
  goto LAB_004f9682;
LAB_004f9a33:
  FUN_0045a430();
LAB_004f9a38:
  local_c._0_1_ = 2;
  FUN_0045a430();
  piVar9 = DAT_00914664;
  iVar6 = DAT_0091466c;
  goto joined_r0x004f9a4f;
LAB_004f9890:
  iVar8 = local_d0 - 1;
  piVar9 = DAT_00914664;
  iVar6 = DAT_0091466c;
  if (-1 < iVar8) {
    uVar16 = 0;
    uVar15 = 0;
    uVar7 = FUN_00455fd0(0x50eab0e6,local_d8[iVar8],0,0);
    FUN_00452380(uVar7,uVar15,uVar16);
    local_c._0_1_ = 9;
    if (local_a4 == 0) {
      local_a4 = FUN_006269b0(0xa8);
    }
    iVar6 = 0;
    local_c._0_1_ = 10;
    if (0 < (int)DAT_009147b0) {
      do {
        FUN_004e4f20(DAT_009147a8[iVar6],0,0);
        local_c._0_1_ = 0xb;
        if (*(int *)(local_a4 + 0x40) == *(int *)(iStack_5c + 0x40)) {
          FUN_004ebd10(local_d8[iVar8],DAT_009147a8[iVar6]);
          iVar6 = FUN_00453320(local_d8,local_d8 + local_d0,local_d8 + iVar8);
          FUN_004eac70(iVar6,iVar6 + 4);
          local_c._0_1_ = 10;
          if (DAT_009147b0 + local_d0 < 5) goto LAB_004f9a33;
          FUN_0045a430();
          local_c._0_1_ = 2;
          FUN_0045a430();
          goto LAB_004f9890;
        }
        local_c._0_1_ = 10;
        FUN_0045a430();
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)DAT_009147b0);
    }
    iVar6 = local_d8[iVar8];
    iVar14 = FUN_004aecf0(DAT_009147b0);
    FUN_004ebd10(iVar6,DAT_009147a8[iVar14]);
    iVar6 = FUN_00453320(local_d8,local_d8 + local_d0,local_d8 + iVar8);
    FUN_004eac70(iVar6,iVar6 + 4);
    if (DAT_009147b0 + local_d0 < 5) goto LAB_004f9a38;
    local_c._0_1_ = 2;
    FUN_0045a430();
    goto LAB_004f9890;
  }
joined_r0x004f9a4f:
  while (DAT_00914664 = piVar9, DAT_0091466c = iVar6, local_d0 != 0) {
    iVar6 = *local_d8;
    local_e0 = iVar6;
    FUN_0041bbb0(&local_e0);
    FUN_004ebd10(iVar6,iVar6);
    FUN_004eac70(local_d8,local_d8 + 1);
    piVar9 = DAT_00914664;
    iVar6 = DAT_0091466c;
  }
  local_d0 = 0;
  piStack_98 = DAT_00913e74;
  if (DAT_00913e74 != DAT_00913e74 + DAT_00913e7c) {
    do {
      local_e0 = *(int *)(*piStack_98 + 0x14);
      if ((((*(int *)(local_e0 + 0x228) == 1) || (*(int *)(local_e0 + 0x228) == 2)) &&
          (*(char *)(*piStack_98 + 0x11) == '\0')) &&
         (bVar3 = false, piVar10 = piVar9, piVar9 != piVar9 + iVar6 * 2)) {
        do {
          if (bVar3) break;
          iVar6 = *piVar10;
          iVar8 = piVar10[1];
          iVar14 = FUN_00452430();
          if (iVar14 == iVar6) {
            bVar3 = true;
            FUN_004b89a0(iVar8);
            iStack_1c = local_e0;
            iStack_20 = iVar8;
            FUN_004ea810(&iStack_20);
          }
          piVar10 = piVar10 + 2;
          piVar9 = DAT_00914664;
          iVar6 = DAT_0091466c;
        } while (piVar10 != DAT_00914664 + DAT_0091466c * 2);
      }
      piStack_98 = piStack_98 + 1;
    } while (piStack_98 != DAT_00913e74 + DAT_00913e7c);
  }
  local_c._0_1_ = 1;
  FUN_004f4540();
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004f4540();
LAB_004f9bab:
  local_c = 0xffffffff;
  FUN_004f4540();
  ExceptionList = local_14;
  return;
}

