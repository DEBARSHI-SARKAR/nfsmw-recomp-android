/* speed.exe 007e7270 ___crtGetLocaleInfoA; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000095 GetLocaleInfoW
 * calls EXTERNAL:0000008a GetLocaleInfoA
 * calls 007c94b0 __chkstk
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2003 Debug */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStackY_50;
  undefined1 *local_2c;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bf1a0;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_009baf60 == 0) {
    uStackY_50 = 0x7e72ad;
    ExceptionList = &local_14;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_009baf60 = 2;
      }
    }
    else {
      DAT_009baf60 = 1;
    }
  }
  if ((DAT_009baf60 == 2) || (DAT_009baf60 == 0)) {
    uStackY_50 = 0x7e72fa;
    local_20 = GetLocaleInfoA((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPSTR)_LCType,(int)_LpLCData);
  }
  else if (DAT_009baf60 == 1) {
    local_20 = 0;
    bVar2 = false;
    if (_CchData == 0) {
      _CchData = DAT_009badb0;
    }
    uStackY_50 = 0x7e733b;
    iVar3 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      local_20 = 0;
    }
    else {
      puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      local_2c = &stack0xffffffc4 + iVar1;
      local_8 = 0xffffffff;
      if (&stack0xffffffc4 == puVar5) {
        *(undefined4 *)(&stack0xffffffc0 + iVar1) = 0x6f;
        *(char **)(&stack0xffffffbc + iVar1) = "a_loc.c";
        *(undefined4 *)(&stack0xffffffb8 + iVar1) = 2;
        *(int *)(&stack0xffffffb4 + iVar1) = iVar3 << 1;
        *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x7e73ad;
        local_2c = (undefined1 *)__malloc_dbg();
        if (local_2c == (undefined1 *)0x0) {
          ExceptionList = local_14;
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffc0 + iVar1) = iVar3;
      *(undefined1 **)(&stack0xffffffbc + iVar1) = local_2c;
      *(LPCWSTR *)(&stack0xffffffb8 + iVar1) = _LocaleName;
      *(_locale_t *)(&stack0xffffffb4 + iVar1) = _Plocinfo;
      puVar5 = (undefined1 *)((int)&uStackY_50 + iVar1);
      *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x7e73df;
      iVar3 = GetLocaleInfoW(*(LCID *)(&stack0xffffffb4 + iVar1),
                             *(LCTYPE *)(&stack0xffffffb8 + iVar1),
                             *(LPWSTR *)(&stack0xffffffbc + iVar1),
                             *(int *)(&stack0xffffffc0 + iVar1));
      if (iVar3 != 0) {
        if (_LpLCData == (LPSTR)0x0) {
          *(undefined4 *)(puVar5 + -4) = 0;
          *(undefined4 *)(puVar5 + -8) = 0;
          *(undefined4 *)(puVar5 + -0xc) = 0;
          *(undefined4 *)(puVar5 + -0x10) = 0;
          *(undefined4 *)(puVar5 + -0x14) = 0xffffffff;
          *(undefined1 **)(puVar5 + -0x18) = local_2c;
          *(undefined4 *)(puVar5 + -0x1c) = 0;
          *(int *)(puVar5 + -0x20) = _CchData;
          puVar6 = puVar5 + -0x24;
          *(undefined4 *)(puVar5 + -0x24) = 0x7e7405;
          local_20 = WideCharToMultiByte(*(UINT *)(puVar5 + -0x20),*(DWORD *)(puVar5 + -0x1c),
                                         *(LPCWSTR *)(puVar5 + -0x18),*(int *)(puVar5 + -0x14),
                                         *(LPSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                         *(LPCSTR *)(puVar5 + -8),*(LPBOOL *)(puVar5 + -4));
          puVar5 = puVar6;
        }
        else {
          *(undefined4 *)(puVar5 + -4) = 0;
          *(undefined4 *)(puVar5 + -8) = 0;
          *(LPSTR *)(puVar5 + -0xc) = _LpLCData;
          *(LCTYPE *)(puVar5 + -0x10) = _LCType;
          *(undefined4 *)(puVar5 + -0x14) = 0xffffffff;
          *(undefined1 **)(puVar5 + -0x18) = local_2c;
          *(undefined4 *)(puVar5 + -0x1c) = 0;
          *(int *)(puVar5 + -0x20) = _CchData;
          puVar7 = puVar5 + -0x24;
          *(undefined4 *)(puVar5 + -0x24) = 0x7e7428;
          local_20 = WideCharToMultiByte(*(UINT *)(puVar5 + -0x20),*(DWORD *)(puVar5 + -0x1c),
                                         *(LPCWSTR *)(puVar5 + -0x18),*(int *)(puVar5 + -0x14),
                                         *(LPSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                         *(LPCSTR *)(puVar5 + -8),*(LPBOOL *)(puVar5 + -4));
          puVar5 = puVar7;
        }
      }
      if (bVar2) {
        *(undefined4 *)(puVar5 + -4) = 2;
        *(undefined1 **)(puVar5 + -8) = local_2c;
        *(undefined4 *)(puVar5 + -0xc) = 0x7e743c;
        __free_dbg();
      }
    }
  }
  else {
    local_20 = 0;
  }
  ExceptionList = local_14;
  return local_20;
}

