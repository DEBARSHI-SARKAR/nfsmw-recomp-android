/* speed.exe 008572d0 FUN_008572d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000035 SetCommMask
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls EXTERNAL:00000072 WriteFile
 * calls EXTERNAL:00000011 GetTickCount
 */

undefined4 FUN_008572d0(void)

{
  byte *pbVar1;
  int iVar2;
  byte *in_EAX;
  DWORD DVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if (in_EAX != (byte *)0x0) {
    iVar2 = *(int *)in_EAX;
    uVar7 = iVar2 + 8;
    if (*(int *)(unaff_EBX + 0x1910) - *(int *)(unaff_EBX + 0x1914) < iVar2 + 0x10) {
      return 0xffffffff;
    }
    pbVar1 = (byte *)(*(int *)(unaff_EBX + 0x1918) * 0x800 + *(int *)(unaff_EBX + 0x1914) + 0x910 +
                     unaff_EBX);
    *pbVar1 = 0x47;
    pbVar1[1] = 0x53;
    pbVar1[2] = *in_EAX;
    pbVar1[3] = ~*in_EAX;
    pbVar8 = in_EAX + 8;
    pbVar9 = pbVar1;
    for (uVar6 = uVar7 >> 2; pbVar9 = pbVar9 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    sVar5 = 0;
    sVar4 = 0;
    pbVar9 = pbVar1 + 4;
    if (0 < (int)uVar7) {
      do {
        sVar4 = sVar5 * 0xd + (ushort)*pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar7 = uVar7 - 1;
        sVar5 = sVar4;
      } while (uVar7 != 0);
    }
    pbVar1[iVar2 + 0xc] = (byte)sVar4;
    pbVar1[iVar2 + 0xd] = (byte)((ushort)sVar4 >> 8);
    pbVar1[iVar2 + 0xe] = 0xd;
    pbVar1[iVar2 + 0xf] = 10;
    if (*(int *)(unaff_EBX + 0x1914) == 0) {
      SetCommMask(*(HANDLE *)(unaff_EBX + 0x80),2);
    }
    *(int *)(unaff_EBX + 0x1914) = *(int *)(unaff_EBX + 0x1914) + iVar2 + 0x10;
    DVar3 = GetTickCount();
    *(DWORD *)(unaff_EBX + 0x191c) = DVar3;
  }
  if ((*(int *)(unaff_EBX + 0x1914) != 0) &&
     (DVar3 = WaitForSingleObject(*(HANDLE *)(unaff_EBX + 0xbc),0), DVar3 != 0x102)) {
    WriteFile(*(HANDLE *)(unaff_EBX + 0x80),
              (LPCVOID)(*(int *)(unaff_EBX + 0x1918) * 0x800 + 0x910 + unaff_EBX),
              *(DWORD *)(unaff_EBX + 0x1914),(LPDWORD)(unaff_EBX + 200),
              (LPOVERLAPPED)(unaff_EBX + 0xac));
    *(uint *)(unaff_EBX + 0x1918) = *(uint *)(unaff_EBX + 0x1918) ^ 1;
    *(undefined4 *)(unaff_EBX + 0x1914) = 0;
  }
  return 0;
}

