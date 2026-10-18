/* speed.exe 007db6c0 __read_lk; analysis pseudocode, not buildable source.
 * calls 007e3b90 __lseek_lk
 * calls EXTERNAL:0000004a GetLastError
 * calls 007cb1d0 __dosmaperr
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 * calls EXTERNAL:0000007c ReadFile
 */

/* Library Function - Single Match
    __read_lk
   
   Library: Visual Studio 2003 Debug */

int __read_lk(uint param_1,char *param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int iVar4;
  char *local_20;
  int local_1c;
  char *local_18;
  DWORD local_14;
  DWORD local_10;
  char local_9;
  char *local_8;
  
  local_1c = 0;
  local_20 = param_2;
  if ((param_3 == 0) ||
     (iVar4 = (int)param_1 >> 5,
     (*(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 2) != 0)) {
    local_1c = 0;
  }
  else {
    if (((*(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) != 0) &&
       (*(char *)((&DAT_009c5340)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) != '\n')) {
      *param_2 = *(char *)((&DAT_009c5340)[iVar4] + 5 + (param_1 & 0x1f) * 0x24);
      local_20 = param_2 + 1;
      local_1c = 1;
      param_3 = param_3 - 1;
      *(undefined1 *)((&DAT_009c5340)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = 10;
    }
    BVar1 = ReadFile(*(HANDLE *)((&DAT_009c5340)[iVar4] + (param_1 & 0x1f) * 0x24),local_20,param_3,
                     &local_10,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 5) {
        puVar3 = (undefined4 *)FUN_007cb270();
        *puVar3 = 9;
        puVar3 = (undefined4 *)FUN_007cb280();
        *puVar3 = 5;
        local_1c = -1;
      }
      else if (DVar2 == 0x6d) {
        local_1c = 0;
      }
      else {
        __dosmaperr(DVar2);
        local_1c = -1;
      }
    }
    else {
      local_1c = local_1c + local_10;
      if (((int)*(char *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) != 0) {
        if ((local_10 == 0) || (*param_2 != '\n')) {
          *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0xfb;
        }
        else {
          *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 4;
        }
        local_18 = param_2;
        local_8 = param_2;
        while (local_8 < param_2 + local_1c) {
          if (*local_8 == '\x1a') {
            if ((*(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) {
              *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
                   *(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 2;
            }
            break;
          }
          if (*local_8 == '\r') {
            if (local_8 < param_2 + local_1c + -1) {
              if (local_8[1] == '\n') {
                local_8 = local_8 + 2;
                *local_18 = '\n';
              }
              else {
                *local_18 = *local_8;
                local_8 = local_8 + 1;
              }
              local_18 = local_18 + 1;
            }
            else {
              local_8 = local_8 + 1;
              local_14 = 0;
              BVar1 = ReadFile(*(HANDLE *)((&DAT_009c5340)[iVar4] + (param_1 & 0x1f) * 0x24),
                               &local_9,1,&local_10,(LPOVERLAPPED)0x0);
              if (BVar1 == 0) {
                local_14 = GetLastError();
              }
              if ((local_14 == 0) && (local_10 != 0)) {
                if ((*(byte *)((&DAT_009c5340)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) == 0) {
                  if ((local_18 == param_2) && (local_9 == '\n')) {
                    *local_18 = '\n';
                    local_18 = local_18 + 1;
                  }
                  else {
                    __lseek_lk(param_1,0xffffffff,1);
                    if (local_9 != '\n') {
                      *local_18 = '\r';
                      local_18 = local_18 + 1;
                    }
                  }
                }
                else {
                  if (local_9 == '\n') {
                    *local_18 = '\n';
                  }
                  else {
                    *local_18 = '\r';
                    *(char *)((&DAT_009c5340)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = local_9;
                  }
                  local_18 = local_18 + 1;
                }
              }
              else {
                *local_18 = '\r';
                local_18 = local_18 + 1;
              }
            }
          }
          else {
            *local_18 = *local_8;
            local_18 = local_18 + 1;
            local_8 = local_8 + 1;
          }
        }
        local_1c = (int)local_18 - (int)param_2;
      }
    }
  }
  return local_1c;
}

