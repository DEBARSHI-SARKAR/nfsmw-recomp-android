/* speed.exe 007ef647 FUN_007ef647; analysis pseudocode, not buildable source.
 * calls 007edd60 FUN_007edd60
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:00000093 CreateFileA
 * calls 007eed65 FUN_007eed65
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000026 DeleteFileA
 * calls 007ef0f8 FUN_007ef0f8
 * calls EXTERNAL:00000072 WriteFile
 * calls EXTERNAL:00000006 CloseHandle
 * calls 007eef91 FUN_007eef91
 * calls 007ef205 FUN_007ef205
 */

undefined1 FUN_007ef647(char *param_1,LPCVOID param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  HANDLE hFile;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  CHAR local_120 [264];
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  cVar2 = FUN_007ef0f8();
  if (cVar2 != '\0') {
    return 1;
  }
  uVar9 = 0;
  if (param_2 == (LPCVOID)0x0) {
    uVar3 = FUN_007ef205(param_1,param_4);
  }
  else {
    uVar10 = FUN_007edd60(DAT_00907708);
    if (DAT_009bb174 == 0) {
      local_18 = 0;
    }
    else {
      uVar9 = *(uint *)(DAT_009bb174 + 0x10);
      local_18 = *(int *)(DAT_009bb174 + 0x14);
    }
    local_c = (int)param_3 >> 0x1f;
    local_10 = param_3;
    iVar4 = local_c + local_18 + (uint)CARRY4(param_3,uVar9);
    if ((iVar4 <= DAT_00907714) && ((iVar4 < DAT_00907714 || (param_3 + uVar9 < DAT_00907710)))) {
      iVar4 = ((int)((ulonglong)uVar10 >> 0x20) - local_c) - (uint)((uint)uVar10 < param_3);
      if ((iVar4 <= DAT_0090771c) &&
         ((iVar4 < DAT_0090771c || ((uint)uVar10 - param_3 <= DAT_00907718)))) {
        pcVar5 = DAT_00907708;
        do {
          cVar2 = *pcVar5;
          pcVar5[(int)(local_120 + -(int)DAT_00907708)] = cVar2;
          pcVar5 = pcVar5 + 1;
          pcVar6 = param_1;
        } while (cVar2 != '\0');
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        uVar9 = (int)pcVar6 - (int)param_1;
        pcVar5 = &stack0xfffffedf;
        do {
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = param_1;
        for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar5 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_007eed65();
        hFile = CreateFileA(local_120,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffff) {
          return local_5;
        }
        iVar4 = FUN_007eef91(param_1);
        WriteFile(hFile,param_2,param_3,&local_14,(LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        if (local_14 == param_3) {
          FUN_007ec1bd();
          iVar1 = DAT_009bb174;
          uVar9 = *(uint *)(DAT_009bb174 + 0x10) + local_10;
          iVar8 = *(int *)(DAT_009bb174 + 0x14) + local_c +
                  (uint)CARRY4(*(uint *)(DAT_009bb174 + 0x10),local_10);
          if ((DAT_00907714 < iVar8) || ((DAT_00907714 <= iVar8 && (DAT_00907710 <= uVar9)))) {
            DeleteFileA(local_120);
          }
          else {
            *(uint *)(DAT_009bb174 + 0x10) = uVar9;
            *(int *)(iVar1 + 0x14) = iVar8;
            *(undefined1 *)(iVar4 + 0x104) = 1;
            local_5 = 1;
          }
          FUN_007ec1c8();
          return local_5;
        }
        DeleteFileA(local_120);
        return local_5;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

