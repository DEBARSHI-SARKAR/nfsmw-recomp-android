/* speed.exe 007ef88e FUN_007ef88e; analysis pseudocode, not buildable source.
 * calls 007eed52 FUN_007eed52
 * calls 007ef0f8 FUN_007ef0f8
 * calls 007f08e8 FUN_007f08e8
 * calls EXTERNAL:00000043 GetFileSize
 * calls 007f083a FUN_007f083a
 * calls 007eef91 FUN_007eef91
 * calls 007f0336 FUN_007f0336
 * calls 007ecc4a FUN_007ecc4a
 * calls 007c97c0 FUN_007c97c0
 * calls 007c6380 _atoi
 * calls 007f0895 FUN_007f0895
 * calls EXTERNAL:00000093 CreateFileA
 * calls 007eff01 FUN_007eff01
 * calls 007ec44f FUN_007ec44f
 * calls 007f0378 FUN_007f0378
 * calls 007f0fea FUN_007f0fea
 * calls EXTERNAL:00000006 CloseHandle
 * calls 007efe98 FUN_007efe98
 * calls 007ec1a7 FUN_007ec1a7
 */

void FUN_007ef88e(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  HANDLE pvVar8;
  DWORD DVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 *puVar15;
  uint *puVar16;
  char *pcVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char local_47c [256];
  byte local_37c [12];
  char local_370 [260];
  char local_26c [259];
  char cStack_169;
  CHAR local_168 [260];
  undefined4 local_64;
  char *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 *local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  DAT_009bb171 = 0;
  DAT_009bb170 = 0;
  local_8 = 0;
  DAT_009bb158 = 0;
  DAT_009bb172 = 1;
  DAT_009bb159 = 0;
  FUN_007ec1a7();
  FUN_007ecc4a(&DAT_009bb15c);
  FUN_007ec44f(&DAT_009bb164,FUN_007ef80a,0,0,0,0xfffffffd);
  DAT_009bb173 = 1;
  pcVar14 = DAT_00907708;
  do {
    cVar2 = *pcVar14;
    pcVar14[(int)(local_47c + -(int)DAT_00907708)] = cVar2;
    pcVar14 = pcVar14 + 1;
    pcVar3 = PTR_s_cache_dat_00907734;
  } while (cVar2 != '\0');
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)PTR_s_cache_dat_00907734;
  puVar18 = (undefined4 *)&stack0xfffffb83;
  do {
    pcVar14 = (char *)((int)puVar18 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  } while (*pcVar14 != '\0');
  puVar15 = (undefined4 *)PTR_s_cache_dat_00907734;
  for (uVar11 = uVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar18 = *(undefined1 *)puVar15;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  DAT_009bb174 = (int *)FUN_007f0378(local_47c,0,0);
  if ((DAT_009bb174 != (int *)0x0) &&
     ((((*DAT_009bb174 != 0x128 || (DAT_009bb174[1] < 1)) || (1 < DAT_009bb174[1])) ||
      (iVar5 = FUN_007f0fea(DAT_009bb174 + 0x4a,DAT_009bb174[3] * 0x105,0), DAT_009bb174[2] != iVar5
      )))) {
    (**(code **)(*DAT_009076dc + 4))(DAT_009bb174,0);
    DAT_009bb174 = (int *)0x0;
  }
  local_18 = (undefined1 *)FUN_007f0336(param_1,&local_14,0);
  local_c = local_18;
  if (0 < local_14) {
    do {
      if (local_8 == 0) {
        local_20 = &local_40;
        local_44 = &local_28;
        local_4c = 6;
        local_48 = 0x127;
        local_28 = 5;
        local_24 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\prefetch.cpp";
        local_40 = 1;
        local_3c = "Queued File";
        local_38 = 0;
        local_8 = (**(code **)*DAT_009076dc)(0x10c,&local_4c);
      }
      iVar5 = FUN_007c97c0(local_c,0x2c);
      puVar6 = (undefined1 *)FUN_007c97c0((char *)(iVar5 + 1),0x2c);
      *puVar6 = 0;
      iVar7 = _atoi((char *)(iVar5 + 1));
      iVar5 = local_8;
      pcVar14 = puVar6 + 1;
      *(int *)(local_8 + 0x108) = iVar7;
      local_c = (undefined1 *)FUN_007c97c0(pcVar14,0xd);
      iVar7 = local_8;
      *local_c = 0;
      iVar12 = (iVar5 + 4) - (int)pcVar14;
      do {
        cVar2 = *pcVar14;
        pcVar14[iVar12] = cVar2;
        pcVar14 = pcVar14 + 1;
      } while (cVar2 != '\0');
      local_c = local_c + 2;
      if (1 < *(int *)(iVar5 + 0x108)) {
        iVar5 = local_8 + 4;
        iVar12 = FUN_007c97c0(iVar5,0x2a);
        if ((iVar12 == 0) && (iVar5 = FUN_007c97c0(iVar5,0x3f), iVar5 == 0)) {
          cVar2 = FUN_007ef0f8();
          if (cVar2 != '\x01') {
            pcVar14 = DAT_00907708;
            do {
              cVar2 = *pcVar14;
              pcVar14[(int)(local_168 + -(int)DAT_00907708)] = cVar2;
              pcVar14 = pcVar14 + 1;
            } while (cVar2 != '\0');
            pcVar3 = (char *)(local_8 + 4);
            pcVar14 = pcVar3;
            do {
              cVar2 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar2 != '\0');
            pcVar19 = &cStack_169;
            do {
              pcVar17 = pcVar19 + 1;
              pcVar19 = pcVar19 + 1;
            } while (*pcVar17 != '\0');
            pcVar17 = pcVar3;
            for (uVar4 = (uint)((int)pcVar14 - (int)pcVar3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar19 = pcVar19 + 4;
            }
            for (uVar4 = (int)pcVar14 - (int)pcVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar19 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar19 = pcVar19 + 1;
            }
            pvVar8 = CreateFileA(local_168,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                 (HANDLE)0x0);
            if (pvVar8 == (HANDLE)0xffffffff) {
              if (DAT_009bb194 != (int *)0x0) {
                piVar1 = DAT_009bb194;
                piVar13 = (int *)0x0;
                do {
                  piVar10 = piVar1;
                  if (*(int *)(local_8 + 0x108) < piVar10[0x42]) {
                    FUN_007eff01(piVar13,local_8);
                    goto LAB_007efb8f;
                  }
                  piVar1 = (int *)*piVar10;
                  piVar13 = piVar10;
                } while ((int *)*piVar10 != (int *)0x0);
              }
              FUN_007efe98(local_8);
LAB_007efb8f:
              local_8 = 0;
            }
            else {
              local_10 = FUN_007eef91(local_8 + 4);
              piVar1 = DAT_009bb174;
              puVar16 = (uint *)(DAT_009bb174 + 4);
              DVar9 = GetFileSize(pvVar8,(LPDWORD)0x0);
              uVar4 = *puVar16;
              *puVar16 = *puVar16 + DVar9;
              piVar1[5] = piVar1[5] + (uint)CARRY4(uVar4,DVar9);
              *(undefined1 *)(local_10 + 0x104) = 1;
              CloseHandle(pvVar8);
            }
          }
        }
        else {
          local_1c = *(int *)(iVar7 + 0x108);
          pcVar14 = DAT_0090770c;
          do {
            cVar2 = *pcVar14;
            pcVar14[(int)(local_168 + -(int)DAT_0090770c)] = cVar2;
            pcVar14 = pcVar14 + 1;
          } while (cVar2 != '\0');
          pcVar14 = (char *)(iVar7 + 4);
          pcVar3 = pcVar14;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          pcVar19 = &cStack_169;
          do {
            pcVar17 = pcVar19 + 1;
            pcVar19 = pcVar19 + 1;
          } while (*pcVar17 != '\0');
          pcVar17 = pcVar14;
          for (uVar4 = (uint)((int)pcVar3 - (int)pcVar14) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar4 = (int)pcVar3 - (int)pcVar14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar19 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar19 = pcVar19 + 1;
          }
          pcVar14 = (char *)(local_8 + 4);
          iVar5 = -(int)pcVar14;
          do {
            cVar2 = *pcVar14;
            pcVar14[(int)(local_26c + iVar5)] = cVar2;
            pcVar14 = pcVar14 + 1;
          } while (cVar2 != '\0');
          pcVar14 = local_26c;
          do {
            pcVar3 = pcVar14;
            pcVar14 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          pcVar14 = pcVar3 + -1;
          do {
            pcVar3 = pcVar14;
            pcVar14 = pcVar3 + -1;
          } while (*pcVar14 != '\\');
          *pcVar3 = '\0';
          cVar2 = FUN_007f083a(local_168,local_37c);
          if (cVar2 != '\0') {
            do {
              if ((local_37c[0] & 0x10) == 0) {
                if (local_8 == 0) {
                  local_5c = &local_58;
                  local_2c = &local_64;
                  local_34 = 6;
                  local_30 = 0x162;
                  local_64 = 5;
                  local_60 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\prefetch.cpp";
                  local_58 = 1;
                  local_54 = "Queued File";
                  local_50 = 0;
                  local_8 = (**(code **)*DAT_009076dc)(0x10c,&local_34);
                }
                iVar5 = local_8;
                pcVar14 = local_26c;
                iVar7 = (local_8 + 4) - (int)pcVar14;
                do {
                  cVar2 = *pcVar14;
                  pcVar14[iVar7] = cVar2;
                  pcVar14 = pcVar14 + 1;
                } while (cVar2 != '\0');
                pcVar14 = local_370;
                do {
                  cVar2 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar2 != '\0');
                uVar4 = (int)pcVar14 - (int)local_370;
                pcVar14 = (char *)(iVar5 + 3);
                do {
                  pcVar3 = pcVar14 + 1;
                  pcVar14 = pcVar14 + 1;
                } while (*pcVar3 != '\0');
                pcVar3 = local_370;
                for (uVar11 = uVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
                  pcVar3 = pcVar3 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pcVar14 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                cVar2 = FUN_007ef0f8();
                if (cVar2 == '\0') {
                  pcVar14 = DAT_00907708;
                  do {
                    cVar2 = *pcVar14;
                    pcVar14[(int)(local_168 + -(int)DAT_00907708)] = cVar2;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar2 != '\0');
                  pcVar3 = (char *)(local_8 + 4);
                  pcVar14 = pcVar3;
                  do {
                    cVar2 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar2 != '\0');
                  pcVar19 = &cStack_169;
                  do {
                    pcVar17 = pcVar19 + 1;
                    pcVar19 = pcVar19 + 1;
                  } while (*pcVar17 != '\0');
                  pcVar17 = pcVar3;
                  for (uVar4 = (uint)((int)pcVar14 - (int)pcVar3) >> 2; uVar4 != 0;
                      uVar4 = uVar4 - 1) {
                    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
                    pcVar17 = pcVar17 + 4;
                    pcVar19 = pcVar19 + 4;
                  }
                  for (uVar4 = (int)pcVar14 - (int)pcVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *pcVar19 = *pcVar17;
                    pcVar17 = pcVar17 + 1;
                    pcVar19 = pcVar19 + 1;
                  }
                  pvVar8 = CreateFileA(local_168,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                       (HANDLE)0x0);
                  if (pvVar8 == (HANDLE)0xffffffff) {
                    *(int *)(local_8 + 0x108) = local_1c;
                    piVar1 = DAT_009bb194;
                    piVar13 = (int *)0x0;
                    while (piVar10 = piVar1, piVar10 != (int *)0x0) {
                      if (local_1c < piVar10[0x42]) {
                        FUN_007eff01(piVar13,local_8);
                        goto LAB_007efdd7;
                      }
                      piVar13 = piVar10;
                      piVar1 = (int *)*piVar10;
                    }
                    FUN_007efe98(local_8);
LAB_007efdd7:
                    local_8 = 0;
                  }
                  else {
                    local_10 = FUN_007eef91(local_8 + 4);
                    piVar1 = DAT_009bb174;
                    puVar16 = (uint *)(DAT_009bb174 + 4);
                    DVar9 = GetFileSize(pvVar8,(LPDWORD)0x0);
                    uVar4 = *puVar16;
                    *puVar16 = *puVar16 + DVar9;
                    piVar1[5] = piVar1[5] + (uint)CARRY4(uVar4,DVar9);
                    *(undefined1 *)(local_10 + 0x104) = 1;
                    CloseHandle(pvVar8);
                  }
                }
              }
              cVar2 = FUN_007f0895(local_37c);
            } while (cVar2 != '\0');
            FUN_007f08e8(local_37c);
          }
        }
      }
    } while ((int)local_c - (int)local_18 < local_14);
    if (local_8 != 0) {
      (**(code **)(*DAT_009076dc + 4))(local_8,0);
    }
  }
  (**(code **)(*DAT_009076dc + 4))(local_18,0);
  FUN_007eed52();
  return;
}

