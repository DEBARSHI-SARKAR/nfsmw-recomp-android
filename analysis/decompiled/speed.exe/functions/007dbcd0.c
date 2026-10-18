/* speed.exe 007dbcd0 __write_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000072 WriteFile
 * calls 007cb1d0 __dosmaperr
 * calls 007e5980 __lseeki64_lk
 * calls 007d6cb0 __security_check_cookie
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __write_lk
   
   Library: Visual Studio 2003 Debug */

int __write_lk(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  int iVar5;
  int local_42c;
  char *local_428;
  DWORD local_424;
  ulong local_420;
  DWORD local_41c;
  char *local_418;
  char local_414 [1036];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  local_41c = 0;
  local_42c = 0;
  if (param_3 == 0) {
    local_42c = 0;
  }
  else {
    iVar5 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_009c5340)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      __lseeki64_lk(param_1,0,0,2);
    }
    if (((int)*(char *)((&DAT_009c5340)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_009c5340)[iVar5] + (param_1 & 0x1f) * 0x24),param_2,
                        param_3,&local_424,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_420 = GetLastError();
      }
      else {
        local_420 = 0;
        local_41c = local_424;
      }
    }
    else {
      local_418 = param_2;
      local_420 = 0;
      do {
        if (param_3 <= (uint)((int)local_418 - (int)param_2)) break;
        local_428 = local_414;
        while (((int)local_428 - (int)local_414 < 0x400 &&
               ((uint)((int)local_418 - (int)param_2) < param_3))) {
          cVar1 = *local_418;
          local_418 = local_418 + 1;
          if (cVar1 == '\n') {
            local_42c = local_42c + 1;
            *local_428 = '\r';
            local_428 = local_428 + 1;
          }
          *local_428 = cVar1;
          local_428 = local_428 + 1;
        }
        BVar2 = WriteFile(*(HANDLE *)((&DAT_009c5340)[iVar5] + (param_1 & 0x1f) * 0x24),local_414,
                          (int)local_428 - (int)local_414,&local_424,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_420 = GetLastError();
          break;
        }
        local_41c = local_41c + local_424;
      } while ((int)local_428 - (int)local_414 <= (int)local_424);
    }
    if (local_41c == 0) {
      if (local_420 == 0) {
        if (((*(byte *)((&DAT_009c5340)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          puVar3 = (undefined4 *)FUN_007cb270();
          *puVar3 = 0x1c;
          puVar3 = (undefined4 *)FUN_007cb280();
          *puVar3 = 0;
          local_42c = -1;
        }
        else {
          local_42c = 0;
        }
      }
      else {
        if (local_420 == 5) {
          puVar3 = (undefined4 *)FUN_007cb270();
          *puVar3 = 9;
          puVar4 = (ulong *)FUN_007cb280();
          *puVar4 = local_420;
        }
        else {
          __dosmaperr(local_420);
        }
        local_42c = -1;
      }
    }
    else {
      local_42c = local_41c - local_42c;
    }
  }
  return local_42c;
}

