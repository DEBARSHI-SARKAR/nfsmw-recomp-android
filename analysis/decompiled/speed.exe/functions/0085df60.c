/* speed.exe 0085df60 FID_conflict:__findnext; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000029 FindNextFileA
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000004a GetLastError
 * calls 0085e0d0 ___timet_from_ft
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __findnext
    __wfindnext
   
   Library: Visual Studio 2003 Debug */

undefined4 FID_conflict___findnext(HANDLE param_1,uint *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  _WIN32_FIND_DATAA local_14c;
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  BVar1 = FindNextFileA(param_1,&local_14c);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    switch(DVar2) {
    case 2:
    case 3:
    case 0x12:
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 2;
      break;
    default:
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0x16;
      break;
    case 8:
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0xc;
    }
    uVar4 = 0xffffffff;
  }
  else {
    *param_2 = (local_14c.dwFileAttributes == 0x80) - 1 & local_14c.dwFileAttributes;
    uVar5 = ___timet_from_ft(&local_14c.ftCreationTime);
    param_2[1] = uVar5;
    uVar5 = ___timet_from_ft(&local_14c.ftLastAccessTime);
    param_2[2] = uVar5;
    uVar5 = ___timet_from_ft(&local_14c.ftLastWriteTime);
    param_2[3] = uVar5;
    param_2[4] = local_14c.nFileSizeLow;
    FUN_007d0bd0(param_2 + 5,local_14c.cFileName);
    uVar4 = 0;
  }
  return uVar4;
}

