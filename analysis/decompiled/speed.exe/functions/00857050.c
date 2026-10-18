/* speed.exe 00857050 FUN_00857050; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls EXTERNAL:0000007c ReadFile
 * calls EXTERNAL:00000037 WaitCommEvent
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000036 GetOverlappedResult
 * calls EXTERNAL:00000011 GetTickCount
 */

undefined4 FUN_00857050(uint *param_1)

{
  LPOVERLAPPED lpOverlapped;
  HANDLE pvVar1;
  bool bVar2;
  short sVar3;
  BOOL BVar4;
  DWORD DVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint local_10;
  
  puVar13 = (uint *)(unaff_EBX + 0x10c);
  uVar7 = *(uint *)(unaff_EBX + 0x90c);
  local_10 = uVar7;
LAB_0085706e:
  do {
    bVar2 = false;
LAB_00857070:
    if ((bVar2) || ((int)uVar7 < 8)) {
      lpOverlapped = (LPOVERLAPPED)(unaff_EBX + 0x84);
      pvVar1 = *(HANDLE *)(unaff_EBX + 0x80);
      lpOverlapped->Internal = 0;
      *(undefined4 *)(unaff_EBX + 0x88) = 0;
      *(undefined4 *)(unaff_EBX + 0x8c) = 0;
      *(undefined4 *)(unaff_EBX + 0x90) = 0;
      BVar4 = ReadFile(pvVar1,(char *)((int)puVar13 + uVar7),0x800 - uVar7,
                       (LPDWORD)(unaff_EBX + 0xc0),lpOverlapped);
      if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x3e5)) {
        GetOverlappedResult(*(HANDLE *)(unaff_EBX + 0x80),lpOverlapped,(LPDWORD)(unaff_EBX + 0xc0),1
                           );
      }
      if (*(int *)(unaff_EBX + 0xc0) != 0) {
        uVar7 = uVar7 + *(int *)(unaff_EBX + 0xc0);
        local_10 = uVar7;
        goto LAB_0085706e;
      }
      DVar5 = WaitForSingleObject(*(HANDLE *)(unaff_EBX + 0xa8),0);
      if (DVar5 == 0x102) {
LAB_008572b8:
        *(uint *)(unaff_EBX + 0x90c) = uVar7;
        return 0;
      }
      pvVar1 = *(HANDLE *)(unaff_EBX + 0x80);
      lpOverlapped->Internal = 0;
      *(undefined4 *)(unaff_EBX + 0x88) = 0;
      *(undefined4 *)(unaff_EBX + 0x8c) = 0;
      *(undefined4 *)(unaff_EBX + 0x90) = 0;
      BVar4 = WaitCommEvent(pvVar1,(LPDWORD)(unaff_EBX + 0xc4),(LPOVERLAPPED)(unaff_EBX + 0x98));
      if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x3e5)) goto LAB_008572b8;
      bVar2 = true;
      goto LAB_00857070;
    }
    puVar11 = puVar13;
    if (((*(char *)puVar13 != 'G') || (*(char *)(unaff_EBX + 0x10d) != 'S')) ||
       (*(byte *)(unaff_EBX + 0x10e) != (byte)~*(byte *)(unaff_EBX + 0x10f))) {
      do {
        puVar12 = puVar11;
        uVar7 = uVar7 - 1;
        local_10 = uVar7;
        if ((int)uVar7 < 1) goto LAB_00857070;
        puVar11 = (uint *)((int)puVar12 + 1);
      } while (((*(char *)puVar11 != 'G') ||
               ((1 < (int)uVar7 && (*(char *)((int)puVar12 + 2) != 'S')))) ||
              ((3 < (int)uVar7 && (*(byte *)((int)puVar12 + 3) != (byte)~(byte)puVar12[1]))));
      if (0 < (int)uVar7) {
        puVar12 = puVar13;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)puVar12 = (char)*puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          puVar12 = (uint *)((int)puVar12 + 1);
        }
      }
      goto LAB_00857070;
    }
    uVar9 = (uint)*(byte *)(unaff_EBX + 0x10e);
    uVar10 = uVar9 + 8;
    if ((int)uVar7 < (int)(uVar9 + 0x10)) {
      bVar2 = true;
      goto LAB_00857070;
    }
    if ((*(char *)(unaff_EBX + 0x112 + uVar10) == '\r') &&
       (*(char *)(unaff_EBX + 0x113 + uVar10) == '\n')) {
      sVar3 = 0;
      pbVar6 = (byte *)(unaff_EBX + 0x110);
      for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
        sVar3 = sVar3 * 0xd + (ushort)*pbVar6;
        pbVar6 = pbVar6 + 1;
      }
      if (sVar3 == CONCAT11(*(undefined1 *)(unaff_EBX + 0x111 + uVar10),
                            *(undefined1 *)(unaff_EBX + 0x110 + uVar10))) {
        puVar12 = param_1 + 2;
        for (uVar7 = uVar10 >> 2; puVar11 = puVar11 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = *puVar11;
          puVar12 = puVar12 + 1;
        }
        for (uVar7 = uVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar12 = (char)*puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        *param_1 = uVar9;
        DVar5 = GetTickCount();
        param_1[1] = DVar5;
        uVar7 = (local_10 - uVar10) - 8;
        *(uint *)(unaff_EBX + 0x90c) = uVar7;
        if (uVar7 != 0) {
          puVar11 = (uint *)(unaff_EBX + 0x114 + uVar10);
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar13 = (char)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar13 = (uint *)((int)puVar13 + 1);
          }
        }
        return 1;
      }
    }
    *(char *)puVar13 = '\0';
  } while( true );
}

