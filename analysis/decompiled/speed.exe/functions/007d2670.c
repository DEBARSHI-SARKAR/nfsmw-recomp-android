/* speed.exe 007d2670 __CrtDbgReport; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d2988 FUN_007d2988
 * calls 007c514a __local_unwind2
 * calls 007d0be0 FUN_007d0be0
 * calls EXTERNAL:0000000e LoadLibraryA
 * calls 007df530 __vsnprintf
 * calls EXTERNAL:0000000d GetProcAddress
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007df440 __snprintf
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000004c OutputDebugStringA
 * calls 007d2310 __CrtDbgBreak
 * calls 007d297d FUN_007d297d
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __CrtDbgReport
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtDbgReport(int param_1,int param_2,int param_3,undefined4 param_4,char *param_5)

{
  LONG LVar1;
  undefined4 uVar2;
  size_t nNumberOfBytesToWrite;
  int iVar3;
  undefined4 *puVar4;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  char *pcStack_3058;
  char *local_3050;
  char acStack_304c [20];
  DWORD DStack_3038;
  int local_3034;
  HMODULE local_3030;
  char local_302c;
  undefined4 local_302b;
  undefined1 local_202c;
  undefined4 local_202b;
  CHAR local_102c;
  undefined4 local_102b;
  undefined4 local_28;
  undefined4 local_24;
  va_list local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcdc0;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_28 = DAT_00906980;
  local_202c = 0;
  puVar4 = &local_202b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_102c = '\0';
  puVar4 = &local_102b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_302c = '\0';
  puVar4 = &local_302b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_20 = &stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_24 = 0xffffffff;
  }
  else {
    ExceptionList = &local_14;
    if ((param_1 == 2) &&
       (ExceptionList = &local_14, LVar1 = InterlockedIncrement((LONG *)&DAT_00906ab8), 0 < LVar1))
    {
      if ((DAT_009bad78 == (FARPROC)0x0) &&
         ((local_3030 = LoadLibraryA("user32.dll"), local_3030 == (HMODULE)0x0 ||
          (DAT_009bad78 = GetProcAddress(local_3030,"wsprintfA"), DAT_009bad78 == (FARPROC)0x0)))) {
        local_24 = 0xffffffff;
      }
      else {
        (*DAT_009bad78)(&local_102c,"Second Chance Assertion Failed: File %s, Line %d\n",param_2,
                        param_3);
        OutputDebugStringA(&local_102c);
        InterlockedDecrement((LONG *)&DAT_00906ab8);
        __CrtDbgBreak();
        local_24 = 0xffffffff;
      }
    }
    else {
      if ((param_5 != (char *)0x0) &&
         (iVar3 = __vsnprintf(&local_302c,0xfeb,param_5,local_20), iVar3 < 0)) {
        FUN_007d0bd0(&local_302c,"_CrtDbgReport: String too long or IO Error");
      }
      if (param_1 == 2) {
        if (param_5 == (char *)0x0) {
          local_3050 = "Assertion failed!";
        }
        else {
          local_3050 = "Assertion failed: ";
        }
        FUN_007d0bd0(&local_202c,local_3050);
      }
      FUN_007d0be0(&local_202c,&local_302c);
      if (param_1 == 2) {
        if ((uRam00906ac4 & 1) != 0) {
          FUN_007d0be0(&local_202c,&DAT_008bcd18);
        }
        FUN_007d0be0(&local_202c,&DAT_00894304);
      }
      if (param_2 == 0) {
        FUN_007d0bd0(&local_102c,&local_202c);
      }
      else {
        iVar3 = __snprintf(&local_102c,0x1000,"%s(%d) : %s",param_2,param_3,&local_202c);
        if (iVar3 < 0) {
          FUN_007d0bd0(&local_102c,"_CrtDbgReport: String too long or IO Error");
        }
      }
      if (DAT_009c530c == 0) {
        if ((DAT_009c5308 == (code *)0x0) ||
           (iVar3 = (*DAT_009c5308)(param_1,&local_102c,&local_24), iVar3 == 0)) {
          if (((*(uint *)(&DAT_00906abc + param_1 * 4) & 1) != 0) &&
             (*(int *)(&DAT_00906ac8 + param_1 * 4) != -1)) {
            lpOverlapped = (LPOVERLAPPED)0x0;
            lpNumberOfBytesWritten = &DStack_3038;
            nNumberOfBytesToWrite = _strlen(&local_102c);
            WriteFile(*(HANDLE *)(&DAT_00906ac8 + param_1 * 4),&local_102c,nNumberOfBytesToWrite,
                      lpNumberOfBytesWritten,lpOverlapped);
          }
          if ((*(uint *)(&DAT_00906abc + param_1 * 4) & 2) != 0) {
            OutputDebugStringA(&local_102c);
          }
          if ((*(uint *)(&DAT_00906abc + param_1 * 4) & 4) == 0) {
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00906ab8);
            }
            local_24 = 0;
          }
          else {
            if (param_3 == 0) {
              pcStack_3058 = (char *)0x0;
            }
            else {
              pcStack_3058 = __itoa(param_3,acStack_304c,10);
            }
            local_24 = _CrtMessageWindow(param_1,param_2,pcStack_3058,param_4,&local_302c);
            if (param_1 == 2) {
              InterlockedDecrement((LONG *)&DAT_00906ab8);
            }
          }
        }
        else if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_00906ab8);
        }
      }
      else {
        __lock(0xf);
        local_8 = 0;
        local_3034 = DAT_009c530c;
        while( true ) {
          if (local_3034 == 0) {
            local_8 = 0xffffffff;
            FUN_007d297d();
            uVar2 = FUN_007d2988();
            return uVar2;
          }
          iVar3 = (**(code **)(local_3034 + 0xc))(param_1,&local_102c,&local_24);
          if (iVar3 != 0) break;
          local_3034 = *(int *)(local_3034 + 4);
        }
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_00906ab8);
        }
        __local_unwind2(&local_14,0xffffffff);
      }
    }
  }
  ExceptionList = local_14;
  return local_24;
}

