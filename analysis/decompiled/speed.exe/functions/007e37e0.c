/* speed.exe 007e37e0 ___convertcp; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls 007c7290 __free_dbg
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 007c6b60 __calloc_dbg
 * calls EXTERNAL:00000079 GetCPInfo
 * calls 007d4aa0 _memset
 * calls 007c94b0 __chkstk
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2003 Debug */

LPSTR ___convertcp(UINT param_1,UINT param_2,char *param_3,int *param_4,LPSTR param_5,int param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t sVar3;
  int iVar4;
  _cpinfo local_4c;
  undefined4 local_38;
  LPWSTR local_34;
  int local_30;
  int local_2c;
  int local_28;
  LPSTR local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008beec8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_38 = DAT_00906980;
  local_1c = &stack0xffffffa4;
  local_24 = (LPSTR)0x0;
  local_30 = 0;
  local_20 = *param_4;
  local_28 = 0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffa4;
  if (param_1 != param_2) {
    ExceptionList = &local_14;
    BVar2 = GetCPInfo(param_1,&local_4c);
    if ((((BVar2 != 0) && (local_4c.MaxCharSize == 1)) &&
        (BVar2 = GetCPInfo(param_2,&local_4c), BVar2 != 0)) && (local_4c.MaxCharSize == 1)) {
      local_28 = 1;
    }
    if (local_28 != 0) {
      if (local_20 == -1) {
        sVar3 = _strlen(param_3);
        local_2c = sVar3 + 1;
      }
      else {
        local_2c = local_20;
      }
    }
    if ((local_28 == 0) &&
       (local_2c = MultiByteToWideChar(param_1,1,param_3,local_20,(LPWSTR)0x0,0), local_2c == 0)) {
      ExceptionList = local_14;
      return (LPSTR)0x0;
    }
    local_8 = 0;
    local_34 = (LPWSTR)&stack0xffffffa4;
    local_1c = &stack0xffffffa4;
    _memset(&stack0xffffffa4,0,local_2c << 1);
    local_8 = 0xffffffff;
    if (local_34 == (LPWSTR)0x0) {
      local_34 = (LPWSTR)__calloc_dbg(2,local_2c,2,"convrtcp.c",0x7e);
      if (local_34 == (LPWSTR)0x0) {
        ExceptionList = local_14;
        return (LPSTR)0x0;
      }
      local_30 = local_30 + 1;
    }
    iVar4 = MultiByteToWideChar(param_1,1,param_3,local_20,local_34,local_2c);
    puVar1 = local_1c;
    if (iVar4 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((local_28 != 0) ||
            (local_2c = WideCharToMultiByte(param_2,0,local_34,local_2c,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0), puVar1 = local_1c, local_2c != 0)) &&
           (local_24 = (LPSTR)__calloc_dbg(1,local_2c,2,"convrtcp.c",0xa1), puVar1 = local_1c,
           local_24 != (LPSTR)0x0)) {
          local_2c = WideCharToMultiByte(param_2,0,local_34,local_2c,local_24,local_2c,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          if (local_2c == 0) {
            __free_dbg(local_24,2);
            local_24 = (LPSTR)0x0;
            puVar1 = local_1c;
          }
          else {
            puVar1 = local_1c;
            if (local_20 != -1) {
              *param_4 = local_2c;
            }
          }
        }
      }
      else {
        iVar4 = WideCharToMultiByte(param_2,0,local_34,local_2c,param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        puVar1 = local_1c;
        if (iVar4 != 0) {
          local_24 = param_5;
        }
      }
    }
  }
  local_1c = puVar1;
  if (local_30 != 0) {
    __free_dbg(local_34,2);
  }
  ExceptionList = local_14;
  return local_24;
}

