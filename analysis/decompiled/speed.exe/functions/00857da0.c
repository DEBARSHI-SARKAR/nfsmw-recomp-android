/* speed.exe 00857da0 FUN_00857da0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000033 PurgeComm
 * calls EXTERNAL:00000032 SetCommState
 * calls 007c9470 _strncmp
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000030 SetCommConfig
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000002d SetupComm
 * calls EXTERNAL:00000035 SetCommMask
 * calls EXTERNAL:0000002e SetCommTimeouts
 * calls EXTERNAL:0000002f GetCommConfig
 * calls EXTERNAL:00000031 GetCommState
 * calls 00856fe0 FUN_00856fe0
 * calls 007c64e0 _strncpy
 * calls 007c97c0 FUN_007c97c0
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000093 CreateFileA
 * calls EXTERNAL:0000004e SetEvent
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00857da0(int param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  HANDLE pvVar4;
  byte *pbVar5;
  int iVar6;
  byte *_Str1;
  DWORD local_103c;
  _COMMTIMEOUTS local_1038;
  char local_1024 [4];
  byte local_1020;
  byte local_101f [27];
  _COMMCONFIG local_1004 [78];
  undefined4 local_4;
  
  iVar6 = 0;
  local_4 = DAT_00906980;
  local_1038.ReadIntervalTimeout = 0xffffffff;
  local_1038.ReadTotalTimeoutMultiplier = 0;
  local_1038.ReadTotalTimeoutConstant = 0;
  local_1038.WriteTotalTimeoutMultiplier = 0;
  local_1038.WriteTotalTimeoutConstant = 0;
  if ((param_2 == (char *)0x0) && (*(int *)(param_1 + 0xd0) == 4)) {
    *(undefined4 *)(param_1 + 0xd0) = 5;
    SetCommMask(*(HANDLE *)(param_1 + 0x80),2);
    PurgeComm(*(HANDLE *)(param_1 + 0x80),0xf);
    CloseHandle(*(HANDLE *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    return 0;
  }
  if (*(int *)(param_1 + 0xd0) == 1) {
    FUN_00856fe0();
  }
  else if (*(int *)(param_1 + 0xd0) != 5) {
    return 0xfffffff8;
  }
  _strncpy(local_1024,param_2,0x20);
  iVar2 = FUN_007c97c0(local_1024,0x3a);
  if (iVar2 == 0) {
    _Str1 = &DAT_00890978;
  }
  else {
    puVar3 = (undefined1 *)FUN_007c97c0(local_1024,0x3a);
    *puVar3 = 0;
    iVar2 = FUN_007c97c0(param_2,0x3a);
    _Str1 = (byte *)(iVar2 + 1);
  }
  iVar2 = _strncmp(local_1024,"TAPI",4);
  if (iVar2 == 0) {
    iVar6 = 0;
    pbVar5 = &local_1020;
    while (('/' < (char)local_1020 && ((char)local_1020 < ':'))) {
      pbVar5 = pbVar5 + 1;
      iVar6 = (local_1020 & 0xf) + iVar6 * 10;
      local_1020 = *pbVar5;
    }
    *(int *)(param_1 + 0x80) = iVar6;
  }
  else {
    pvVar4 = CreateFileA(local_1024,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0
                        );
    *(HANDLE *)(param_1 + 0x80) = pvVar4;
    if (pvVar4 == (HANDLE)0xffffffff) {
      return 0xfffffffc;
    }
  }
  SetupComm(*(HANDLE *)(param_1 + 0x80),0x2000,0x1000);
  SetCommTimeouts(*(HANDLE *)(param_1 + 0x80),&local_1038);
  SetCommMask(*(HANDLE *)(param_1 + 0x80),2);
  if (iVar6 == 0) {
    local_1004[0].dcb.DCBlength = 0x1c;
    GetCommState(*(HANDLE *)(param_1 + 0x80),&local_1004[0].dcb);
    local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffb497 | 0x13;
    local_1004[0].dcb.EvtChar = '\n';
    local_1004[0].dcb.ByteSize = '\b';
    local_1004[0].dcb.StopBits = '\0';
    if (_Str1 != (byte *)0x0) {
      while (*_Str1 != 0) {
        if (*_Str1 == 0x2c) {
          _Str1 = _Str1 + 1;
        }
        iVar6 = _strncmp((char *)_Str1,"+RTS",4);
        if (iVar6 == 0) {
          local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffefff | 0x2000;
        }
        iVar6 = _strncmp((char *)_Str1,"-RTS",4);
        if (iVar6 == 0) {
          local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xffffdfff | 0x1000;
        }
        iVar6 = _strncmp((char *)_Str1,"+CTS",4);
        if (iVar6 == 0) {
          local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ | 4;
        }
        iVar6 = _strncmp((char *)_Str1,"-CTS",4);
        if (iVar6 == 0) {
          local_1004[0].dcb._8_4_ = local_1004[0].dcb._8_4_ & 0xfffffffb;
        }
        if (('/' < (char)*_Str1) && ((char)*_Str1 < ':')) {
          local_1004[0].dcb.BaudRate = 0;
          bVar1 = *_Str1;
          while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
            local_1004[0].dcb.BaudRate = (bVar1 & 0xf) + local_1004[0].dcb.BaudRate * 10;
            _Str1 = _Str1 + 1;
            bVar1 = *_Str1;
          }
        }
        bVar1 = *_Str1;
        while ((bVar1 != 0x2c && (bVar1 != 0))) {
          pbVar5 = _Str1 + 1;
          _Str1 = _Str1 + 1;
          bVar1 = *pbVar5;
        }
      }
    }
    SetCommState(*(HANDLE *)(param_1 + 0x80),&local_1004[0].dcb);
  }
  else {
    local_103c = 0x1000;
    GetCommConfig(*(HANDLE *)(param_1 + 0x80),local_1004,&local_103c);
    INSERT(local_1004[0].dcb._8_4_,0,0xe,1);
    INSERT(local_1004[0].dcb._8_4_,0,0xb,1);
    INSERT(local_1004[0].dcb._8_4_,0,9,1);
    INSERT(local_1004[0].dcb._8_4_,0,8,1);
    INSERT(local_1004[0].dcb._8_4_,1,0,1);
    local_1004[0].dcb.EvtChar = '\n';
    SetCommConfig(*(HANDLE *)(param_1 + 0x80),local_1004,local_103c);
  }
  PurgeComm(*(HANDLE *)(param_1 + 0x80),0xc);
  SetEvent(*(HANDLE *)(param_1 + 0x94));
  SetEvent(*(HANDLE *)(param_1 + 0xa8));
  SetEvent(*(HANDLE *)(param_1 + 0xbc));
  *(uint *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) != 5) + 4;
  return 0;
}

