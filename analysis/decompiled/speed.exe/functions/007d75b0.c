/* speed.exe 007d75b0 __close_lk; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007e43d0 __free_osfhnd
 * calls 007cb1d0 __dosmaperr
 * calls 007e44b0 __get_osfhandle
 * calls EXTERNAL:00000006 CloseHandle
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __close_lk(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = __get_osfhandle(1);
      iVar2 = __get_osfhandle(2);
      if (iVar1 == iVar2) goto LAB_007d7603;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_007d7615;
    }
  }
LAB_007d7603:
  local_8 = 0;
LAB_007d7615:
  __free_osfhnd(param_1);
  *(undefined1 *)((&DAT_009c5340)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

