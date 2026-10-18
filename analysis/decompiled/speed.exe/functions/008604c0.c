/* speed.exe 008604c0 __getdcwd_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000045 GetCurrentDirectoryA
 * calls 007cb280 FUN_007cb280
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000014 GetFullPathNameA
 * calls 007cb270 FUN_007cb270
 * calls 007c66d0 _malloc
 * calls 00860620 __validdrive
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __getdcwd_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __getdcwd_lk(uint param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  size_t local_128;
  DWORD local_124;
  LPSTR local_120;
  CHAR local_11c [268];
  undefined4 local_10;
  void *local_c;
  char local_8 [4];
  
  local_10 = DAT_00906980;
  if (param_1 == 0) {
    local_124 = GetCurrentDirectoryA(0x104,local_11c);
  }
  else {
    iVar1 = __validdrive(param_1);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_007cb280();
      *puVar2 = 0xf;
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0xd;
      return 0;
    }
    local_8[0] = (char)param_1 + '@';
    local_8[1] = 0x3a;
    local_8[2] = 0x2e;
    local_8[3] = 0;
    local_124 = GetFullPathNameA(local_8,0x104,local_11c,&local_120);
  }
  if ((local_124 == 0) || (local_128 = local_124 + 1, 0x104 < local_128)) {
    uVar3 = 0;
  }
  else {
    local_c = param_2;
    if (param_2 == (void *)0x0) {
      if ((int)local_128 <= (int)param_3) {
        local_128 = param_3;
      }
      local_c = _malloc(local_128);
      if (local_c == (void *)0x0) {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0xc;
        return 0;
      }
    }
    else if ((int)param_3 < (int)local_128) {
      puVar2 = (undefined4 *)FUN_007cb270();
      *puVar2 = 0x22;
      return 0;
    }
    uVar3 = FUN_007d0bd0(local_c,local_11c);
  }
  return uVar3;
}

