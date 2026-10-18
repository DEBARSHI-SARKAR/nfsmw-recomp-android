/* speed.exe 0085de10 FID_conflict:__findfirst; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000004a GetLastError
 * calls 0085e0d0 ___timet_from_ft
 * calls EXTERNAL:00000028 FindFirstFileA
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __findfirst
    __wfindfirst
   
   Library: Visual Studio 2003 Debug */

HANDLE FID_conflict___findfirst(LPCSTR param_1,uint *param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  uint uVar3;
  _WIN32_FIND_DATAA local_14c;
  undefined4 local_c;
  HANDLE local_8;
  
  local_c = DAT_00906980;
  local_8 = FindFirstFileA(param_1,&local_14c);
  if (local_8 == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    switch(DVar1) {
    case 2:
    case 3:
    case 0x12:
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 2;
      break;
    default:
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x16;
      break;
    case 8:
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0xc;
    }
    local_8 = (HANDLE)0xffffffff;
  }
  else {
    *param_2 = (local_14c.dwFileAttributes == 0x80) - 1 & local_14c.dwFileAttributes;
    uVar3 = ___timet_from_ft(&local_14c.ftCreationTime);
    param_2[1] = uVar3;
    uVar3 = ___timet_from_ft(&local_14c.ftLastAccessTime);
    param_2[2] = uVar3;
    uVar3 = ___timet_from_ft(&local_14c.ftLastWriteTime);
    param_2[3] = uVar3;
    param_2[4] = local_14c.nFileSizeLow;
    FUN_007d0bd0(param_2 + 5,local_14c.cFileName);
  }
  return local_8;
}

