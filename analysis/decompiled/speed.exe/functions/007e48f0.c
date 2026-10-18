/* speed.exe 007e48f0 __tsopen_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007cb1d0 __dosmaperr
 * calls EXTERNAL:00000065 GetFileType
 * calls 007e4310 __set_osfhnd
 * calls 007cb280 FUN_007cb280
 * calls EXTERNAL:00000006 CloseHandle
 * calls 007e6890 __chsize_lk
 * calls 007db6c0 __read_lk
 * calls 007e4090 __alloc_osfhnd
 * calls 007e3b90 __lseek_lk
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:00000093 CreateFileA
 * calls 007d75b0 __close_lk
 */

/* Library Function - Single Match
    __tsopen_lk
   
   Library: Visual Studio 2003 Debug */

uint __tsopen_lk(undefined4 *param_1,uint *param_2,LPCSTR param_3,uint param_4,undefined4 param_5,
                uint param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  char local_31;
  DWORD local_30;
  _SECURITY_ATTRIBUTES local_2c;
  uint local_20;
  HANDLE local_1c;
  uint local_18;
  uint local_14;
  DWORD local_10;
  uint local_c;
  byte local_5;
  
  local_2c.nLength = 0xc;
  local_2c.lpSecurityDescriptor = (LPVOID)0x0;
  bVar9 = (param_4 & 0x80) == 0;
  if (bVar9) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_2c.bInheritHandle = (BOOL)bVar9;
  if ((param_4 & 0x8000) == 0) {
    if ((param_4 & 0x4000) == 0) {
      if (DAT_009baf58 != 0x8000) {
        local_5 = local_5 | 0x80;
      }
    }
    else {
      local_5 = local_5 | 0x80;
    }
  }
  uVar8 = param_4 & 3;
  if (uVar8 == 0) {
    local_c = 0x80000000;
  }
  else if (uVar8 == 1) {
    local_c = 0x40000000;
  }
  else {
    if (uVar8 != 2) {
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x16;
      puVar2 = (undefined4 *)FUN_007cb280();
      *puVar2 = 0;
      return 0xffffffff;
    }
    local_c = 0xc0000000;
  }
  switch(param_5) {
  case 0x10:
    local_14 = 0;
    break;
  default:
    puVar2 = (undefined4 *)FUN_007cb270();
    *puVar2 = 0x16;
    puVar2 = (undefined4 *)FUN_007cb280();
    *puVar2 = 0;
    return 0xffffffff;
  case 0x20:
    local_14 = 1;
    break;
  case 0x30:
    local_14 = 2;
    break;
  case 0x40:
    local_14 = 3;
  }
  uVar8 = param_4 & 0x700;
  if (uVar8 < 0x401) {
    if (uVar8 != 0x400) {
      if (0x200 < uVar8) {
        if (uVar8 != 0x300) {
LAB_007e4ab3:
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x16;
          puVar2 = (undefined4 *)FUN_007cb280();
          *puVar2 = 0;
          return 0xffffffff;
        }
        local_30 = 2;
        goto LAB_007e4ad1;
      }
      if (uVar8 == 0x200) goto LAB_007e4aa1;
      if (uVar8 != 0) {
        if (uVar8 != 0x100) goto LAB_007e4ab3;
        local_30 = 4;
        goto LAB_007e4ad1;
      }
    }
    local_30 = 3;
  }
  else {
    if (uVar8 != 0x500) {
      if (uVar8 == 0x600) {
LAB_007e4aa1:
        local_30 = 5;
        goto LAB_007e4ad1;
      }
      if (uVar8 != 0x700) goto LAB_007e4ab3;
    }
    local_30 = 1;
  }
LAB_007e4ad1:
  local_18 = 0x80;
  if (((param_4 & 0x100) != 0) && ((~DAT_009baa1c & param_6 & 0x80) == 0)) {
    local_18 = 1;
  }
  if ((param_4 & 0x40) != 0) {
    local_18 = local_18 | 0x4000000;
    local_c = local_c | 0x10000;
    if (DAT_009baa20 == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_4 & 0x1000) != 0) {
    local_18 = local_18 | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      local_18 = local_18 | 0x10000000;
    }
  }
  else {
    local_18 = local_18 | 0x8000000;
  }
  local_20 = __alloc_osfhnd();
  if (local_20 == 0xffffffff) {
    puVar2 = (undefined4 *)FUN_007cb270();
    *puVar2 = 0x18;
    puVar2 = (undefined4 *)FUN_007cb280();
    *puVar2 = 0;
    local_20 = 0xffffffff;
  }
  else {
    *param_1 = 1;
    *param_2 = local_20;
    local_1c = CreateFileA(param_3,local_c,local_14,&local_2c,local_30,local_18,(HANDLE)0x0);
    if (local_1c == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      local_20 = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_1c);
      if (local_10 == 0) {
        CloseHandle(local_1c);
        DVar3 = GetLastError();
        __dosmaperr(DVar3);
        local_20 = 0xffffffff;
      }
      else {
        if (local_10 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (local_10 == 3) {
          local_5 = local_5 | 8;
        }
        __set_osfhnd(local_20,(intptr_t)local_1c);
        bVar7 = local_5 | 1;
        *(byte *)((&DAT_009c5340)[(int)local_20 >> 5] + 4 + (local_20 & 0x1f) * 0x24) = bVar7;
        bVar1 = local_5 & 0x48;
        local_5 = bVar7;
        if (((bVar1 == 0) && (((int)(char)bVar7 & 0x80U) != 0)) && ((param_4 & 2) != 0)) {
          iVar4 = __lseek_lk(local_20,0xffffffff,2);
          if (iVar4 == -1) {
            piVar5 = (int *)FUN_007cb280();
            if (*piVar5 != 0x83) {
              __close_lk(local_20);
              return 0xffffffff;
            }
          }
          else {
            local_31 = '\0';
            iVar6 = __read_lk(local_20,&local_31,1);
            if (((iVar6 == 0) && (local_31 == '\x1a')) &&
               (iVar4 = __chsize_lk(local_20,iVar4), iVar4 == -1)) {
              __close_lk(local_20);
              return 0xffffffff;
            }
            iVar4 = __lseek_lk(local_20,0,0);
            if (iVar4 == -1) {
              __close_lk(local_20);
              return 0xffffffff;
            }
          }
        }
        if (((local_5 & 0x48) == 0) && ((param_4 & 8) != 0)) {
          *(byte *)((&DAT_009c5340)[(int)local_20 >> 5] + 4 + (local_20 & 0x1f) * 0x24) =
               *(byte *)((&DAT_009c5340)[(int)local_20 >> 5] + 4 + (local_20 & 0x1f) * 0x24) | 0x20;
        }
      }
    }
  }
  return local_20;
}

