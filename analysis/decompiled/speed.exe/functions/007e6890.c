/* speed.exe 007e6890 __chsize_lk; analysis pseudocode, not buildable source.
 * calls 007e3b90 __lseek_lk
 * calls EXTERNAL:0000004a GetLastError
 * calls 007d6cb0 __security_check_cookie
 * calls 007cb270 FUN_007cb270
 * calls 007d4aa0 _memset
 * calls 007e44b0 __get_osfhandle
 * calls 007c94b0 __chkstk
 * calls 007dbcd0 __write_lk
 * calls 007cb280 FUN_007cb280
 * calls EXTERNAL:00000094 SetEndOfFile
 * calls 007e75c0 __setmode_lk
 * calls 007d2670 __CrtDbgReport
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __chsize_lk
   
   Library: Visual Studio 2003 Debug */

int __chsize_lk(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  HANDLE hFile;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  int local_102c;
  int local_1028;
  undefined1 local_1024 [4096];
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = DAT_00906980;
  local_1c = local_1024;
  local_8 = 0;
  if ((param_2 < 0) && (iVar2 = __CrtDbgReport(2,"chsize.c",0x79,0,"size >= 0"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = __lseek_lk(param_1,0,1);
  if ((local_18 == -1) || (local_20 = __lseek_lk(param_1,0,2), local_20 == -1)) {
    return -1;
  }
  local_10 = param_2 - local_20;
  if (local_10 < 1) {
    if (local_10 < 0) {
      __lseek_lk(param_1,param_2,0);
      hFile = (HANDLE)__get_osfhandle(param_1);
      BVar5 = SetEndOfFile(hFile);
      local_8 = (BVar5 != 0) - 1;
      if (local_8 == -1) {
        puVar4 = (undefined4 *)FUN_007cb270();
        *puVar4 = 0xd;
        DVar6 = GetLastError();
        pDVar7 = (DWORD *)FUN_007cb280();
        *pDVar7 = DVar6;
      }
    }
  }
  else {
    _memset(local_1c,0,0x1000);
    local_14 = __setmode_lk(param_1,0x8000);
    do {
      if (local_10 < 0x1000) {
        local_1028 = local_10;
      }
      else {
        local_1028 = 0x1000;
      }
      local_c = local_1028;
      if (local_10 < 0x1000) {
        local_102c = local_10;
      }
      else {
        local_102c = 0x1000;
      }
      local_c = __write_lk(param_1,local_1c,local_102c);
      if (local_c == -1) {
        piVar3 = (int *)FUN_007cb280();
        if (*piVar3 == 5) {
          puVar4 = (undefined4 *)FUN_007cb270();
          *puVar4 = 0xd;
        }
        local_8 = local_c;
        break;
      }
      local_10 = local_10 - local_c;
    } while (0 < local_10);
    __setmode_lk(param_1,local_14);
  }
  __lseek_lk(param_1,local_18,0);
  return local_8;
}

