/* speed.exe 007ef205 FUN_007ef205; analysis pseudocode, not buildable source.
 * calls 007ece42 FUN_007ece42
 * calls 007f1042 FUN_007f1042
 * calls 007eed65 FUN_007eed65
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ececc FUN_007ececc
 * calls 007ecef7 FUN_007ecef7
 * calls EXTERNAL:00000043 GetFileSize
 * calls 007c94b0 __chkstk
 * calls 007eef91 FUN_007eef91
 * calls 0085d840 _bsearch
 * calls 007edd60 FUN_007edd60
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:0000007c ReadFile
 * calls EXTERNAL:0000008f SetFilePointer
 * calls 007eee8a FUN_007eee8a
 * calls EXTERNAL:00000093 CreateFileA
 * calls EXTERNAL:00000026 DeleteFileA
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000044 MoveFileA
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x007ef2f4) */
/* WARNING: Removing unreachable block (ram,0x007ef5b3) */

undefined1 FUN_007ef205(byte *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  HANDLE hFile;
  DWORD DVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  longlong lVar17;
  byte local_32c [259];
  byte bStack_229;
  byte local_228 [259];
  undefined4 uStack_125;
  int local_20;
  undefined8 local_1c;
  DWORD local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0xfbea;
  local_5 = 0;
  pcVar3 = DAT_0090770c;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_32c + -(int)DAT_0090770c)] = cVar1;
    pcVar3 = pcVar3 + 1;
    pbVar4 = param_1;
  } while (cVar1 != '\0');
  do {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar2 != 0);
  uVar5 = (int)pbVar4 - (int)param_1;
  pbVar4 = &stack0xfffffcd3;
  do {
    pbVar7 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
  } while (*pbVar7 != 0);
  pbVar7 = param_1;
  for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar4 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_20 = FUN_007ece42(local_32c,1,param_2);
  if (local_20 == 0) {
    return 0;
  }
  uVar10 = FUN_007ecef7(local_20,param_2);
  lVar17 = FUN_007edd60(DAT_00907708);
  uVar5 = 0;
  if (DAT_009bb174 == 0) {
    local_1c._4_4_ = 0;
  }
  else {
    uVar5 = *(uint *)(DAT_009bb174 + 0x10);
    local_1c._4_4_ = *(int *)(DAT_009bb174 + 0x14);
  }
  iVar11 = ((int)uVar10 >> 0x1f) + local_1c._4_4_ + (uint)CARRY4(uVar10,uVar5);
  local_1c = CONCAT44(local_1c._4_4_,(undefined4)local_1c);
  if ((iVar11 <= DAT_00907714) &&
     ((iVar11 < DAT_00907714 ||
      (local_1c = CONCAT44(local_1c._4_4_,(undefined4)local_1c), uVar10 + uVar5 < DAT_00907710)))) {
    local_1c = lVar17 - (int)uVar10;
    if (CONCAT44(DAT_0090771c,DAT_00907718) < local_1c) {
      pcVar3 = DAT_00907708;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(local_228 + -(int)DAT_00907708)] = cVar1;
        pcVar3 = pcVar3 + 1;
        pbVar4 = param_1;
      } while (cVar1 != '\0');
      do {
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar2 != 0);
      uVar5 = (int)pbVar4 - (int)param_1;
      pbVar4 = &bStack_229;
      do {
        pbVar7 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar7 != 0);
      pbVar7 = param_1;
      for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
        pbVar7 = pbVar7 + 4;
        pbVar4 = pbVar4 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar4 + 1;
      }
      FUN_007eed65();
      pcVar3 = DAT_00907708;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)&uStack_125 + (1 - (int)DAT_00907708)] = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar6 = PTR_DAT_00907738;
      } while (cVar1 != '\0');
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar6 - (int)PTR_DAT_00907738;
      puVar15 = &uStack_125;
      do {
        pcVar3 = (char *)((int)puVar15 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      } while (*pcVar3 != '\0');
      puVar14 = (undefined4 *)PTR_DAT_00907738;
      for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      if ((DAT_009bb174 == 0) ||
         (pbVar7 = (byte *)(DAT_009bb174 + 0x1c), pbVar4 = param_1, *pbVar7 == 0)) {
LAB_007ef4e8:
        hFile = CreateFileA((LPCSTR)((int)&uStack_125 + 1),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2
                            ,0x100,(HANDLE)0x0);
        iVar11 = DAT_009bb174;
        uVar13 = local_5;
        if (hFile == (HANDLE)0xffffffff) goto LAB_007ef62e;
      }
      else {
        do {
          bVar2 = *pbVar7;
          bVar16 = bVar2 < *pbVar4;
          if (bVar2 != *pbVar4) {
LAB_007ef3d4:
            iVar11 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_007ef3d9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar16 = bVar2 < pbVar4[1];
          if (bVar2 != pbVar4[1]) goto LAB_007ef3d4;
          pbVar7 = pbVar7 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar2 != 0);
        iVar11 = 0;
LAB_007ef3d9:
        if (iVar11 != 0) goto LAB_007ef4e8;
        hFile = CreateFileA((LPCSTR)((int)&uStack_125 + 1),0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3
                            ,0x100,(HANDLE)0x0);
        if (hFile != (HANDLE)0xffffffff) {
          DVar8 = GetFileSize(hFile,(LPDWORD)0x0);
          if (*(DWORD *)(DAT_009bb174 + 0x18) == DVar8) {
            local_10 = &stack0xfffffcc8;
            while( true ) {
              ReadFile(hFile,local_10,DAT_00907700,&local_14,(LPOVERLAPPED)0x0);
              if (local_14 != DAT_00907700) break;
              local_c = FUN_007f1042(local_10,DAT_00907700,local_c);
            }
            CloseHandle(hFile);
            hFile = (HANDLE)0xffffffff;
            if (*(short *)(DAT_009bb174 + 0x120) == (short)local_c) {
              hFile = CreateFileA((LPCSTR)((int)&uStack_125 + 1),0x40000000,0,
                                  (LPSECURITY_ATTRIBUTES)0x0,3,0x100,(HANDLE)0x0);
              SetFilePointer(hFile,*(LONG *)(DAT_009bb174 + 0x18),(PLONG)0x0,0);
            }
            else {
              local_c = 0xfbea;
            }
          }
          else {
            CloseHandle(hFile);
            hFile = (HANDLE)0xffffffff;
          }
        }
        iVar11 = DAT_009bb174;
        *(undefined2 *)(DAT_009bb174 + 0x120) = 0;
        *(undefined1 *)(iVar11 + 0x1c) = 0;
        *(undefined4 *)(iVar11 + 0x18) = 0;
        if (hFile == (HANDLE)0xffffffff) goto LAB_007ef4e8;
      }
      if (iVar11 == 0) {
LAB_007ef53c:
        pvVar9 = (void *)FUN_007eef91(param_1);
      }
      else {
        pvVar9 = _bsearch(param_1,(void *)(iVar11 + 0x128),*(size_t *)(iVar11 + 0xc),0x105,
                          FUN_007ef0ef);
        if (pvVar9 == (void *)0x0) goto LAB_007ef53c;
      }
      uVar5 = FUN_007eee8a(local_20,hFile,param_2,&local_c);
      CloseHandle(hFile);
      iVar11 = DAT_009bb174;
      if ((DAT_009bb158 == '\0') && (uVar5 != 0xffffffff)) {
        FUN_007ec1bd();
        iVar11 = DAT_009bb174;
        uVar10 = uVar5 + *(uint *)(DAT_009bb174 + 0x10);
        iVar12 = ((int)uVar5 >> 0x1f) + *(int *)(DAT_009bb174 + 0x14) +
                 (uint)CARRY4(uVar5,*(uint *)(DAT_009bb174 + 0x10));
        if ((DAT_00907714 < iVar12) ||
           (((DAT_00907714 <= iVar12 && (DAT_00907710 <= uVar10)) ||
            (local_1c <= CONCAT44(DAT_0090771c,DAT_00907718))))) {
          DeleteFileA((LPCSTR)((int)&uStack_125 + 1));
        }
        else {
          *(uint *)(DAT_009bb174 + 0x10) = uVar10;
          *(int *)(iVar11 + 0x14) = iVar12;
          MoveFileA((LPCSTR)((int)&uStack_125 + 1),(LPCSTR)local_228);
          *(undefined1 *)((int)pvVar9 + 0x104) = 1;
          local_5 = 1;
        }
        FUN_007ec1c8();
        uVar13 = local_5;
      }
      else {
        iVar12 = DAT_009bb174 + 0x1c;
        *(uint *)(DAT_009bb174 + 0x18) = uVar5;
        iVar12 = iVar12 - (int)param_1;
        do {
          bVar2 = *param_1;
          param_1[iVar12] = bVar2;
          param_1 = param_1 + 1;
        } while (bVar2 != 0);
        *(short *)(iVar11 + 0x120) = (short)local_c;
        DAT_009bb159 = 1;
        uVar13 = local_5;
      }
      goto LAB_007ef62e;
    }
  }
  uVar13 = 0;
LAB_007ef62e:
  FUN_007ececc(local_20,100);
  return uVar13;
}

