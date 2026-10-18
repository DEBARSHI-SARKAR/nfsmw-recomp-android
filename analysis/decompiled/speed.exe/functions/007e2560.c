/* speed.exe 007e2560 ___crtGetStringTypeA; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000087 GetStringTypeW
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 007c6b60 __calloc_dbg
 * calls 007e3780 ___ansicp
 * calls 007e37e0 ___convertcp
 * calls EXTERNAL:00000086 GetStringTypeA
 * calls 007d4aa0 _memset
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2003 Debug */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  DWORD DVar4;
  LPWORD pWVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStackY_6c;
  undefined1 *local_40;
  BOOL local_30;
  DWORD local_24;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008be0c0;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar7 = &stack0xffffffb0;
  if (DAT_009baefc == 0) {
    ExceptionList = &local_14;
    BVar3 = GetStringTypeW(1,L"",1,local_20);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      puVar7 = local_1c;
      if (DVar4 == 0x78) {
        DAT_009baefc = 2;
      }
    }
    else {
      DAT_009baefc = 1;
      puVar7 = local_1c;
    }
  }
  local_1c = puVar7;
  if ((DAT_009baefc == 2) || (DAT_009baefc == 0)) {
    local_24 = 0;
    if (_Code_page == 0) {
      _Code_page = DAT_009bada0;
    }
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_009badb0;
    }
    pWVar5 = (LPWORD)___ansicp();
    if (pWVar5 == (LPWORD)0xffffffff) {
      local_30 = 0;
    }
    else {
      if (pWVar5 != _LpCharType) {
        uStackY_6c = 0x7e263f;
        _DWInfoType = ___convertcp();
        local_24 = _DWInfoType;
        if (_DWInfoType == 0) {
          ExceptionList = local_14;
          return 0;
        }
      }
      local_30 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                (LPWORD)_CchSrc);
      if (local_24 != 0) {
        __free_dbg();
      }
    }
  }
  else if (DAT_009baefc == 1) {
    local_30 = 0;
    bVar2 = false;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = DAT_009badb0;
    }
    uStackY_6c = 0x7e26e2;
    iVar6 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,(LPCSTR)_DWInfoType,
                                (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iVar6 == 0) {
      local_30 = 0;
    }
    else {
      local_8 = 0;
      puVar7 = (undefined1 *)(iVar6 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar7;
      local_40 = &stack0xffffffb0 + iVar1;
      local_1c = &stack0xffffffb0 + iVar1;
      *(int *)(&stack0xffffffac + iVar1) = iVar6 << 1;
      *(undefined4 *)(&stack0xffffffa8 + iVar1) = 0;
      *(undefined1 **)(&stack0xffffffa4 + iVar1) = &stack0xffffffb0 + iVar1;
      *(undefined4 *)(&stack0xffffffa0 + iVar1) = 0x7e2726;
      _memset(*(void **)(&stack0xffffffa4 + iVar1),*(int *)(&stack0xffffffa8 + iVar1),
              *(size_t *)(&stack0xffffffac + iVar1));
      local_8 = 0xffffffff;
      if (&stack0xffffffb0 == puVar7) {
        *(undefined4 *)(&stack0xffffffac + iVar1) = 0xa6;
        *(char **)(&stack0xffffffa8 + iVar1) = "a_str.c";
        *(undefined4 *)(&stack0xffffffa4 + iVar1) = 2;
        *(int *)(&stack0xffffffa0 + iVar1) = iVar6;
        *(undefined4 *)(&stack0xffffff9c + iVar1) = 2;
        *(undefined4 *)(&stack0xffffff98 + iVar1) = 0x7e276b;
        local_40 = (undefined1 *)__calloc_dbg();
        if (local_40 == (undefined1 *)0x0) {
          ExceptionList = local_14;
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffac + iVar1) = iVar6;
      *(undefined1 **)(&stack0xffffffa8 + iVar1) = local_40;
      *(LPCSTR *)(&stack0xffffffa4 + iVar1) = _LpSrcStr;
      *(DWORD *)(&stack0xffffffa0 + iVar1) = _DWInfoType;
      *(undefined4 *)(&stack0xffffff9c + iVar1) = 1;
      *(LPWORD *)(&stack0xffffff98 + iVar1) = _LpCharType;
      puVar8 = (undefined1 *)((int)&uStackY_6c + iVar1);
      *(undefined4 *)((int)&uStackY_6c + iVar1) = 0x7e27a0;
      iVar6 = MultiByteToWideChar(*(UINT *)(&stack0xffffff98 + iVar1),
                                  *(DWORD *)(&stack0xffffff9c + iVar1),
                                  *(LPCSTR *)(&stack0xffffffa0 + iVar1),
                                  *(int *)(&stack0xffffffa4 + iVar1),
                                  *(LPWSTR *)(&stack0xffffffa8 + iVar1),
                                  *(int *)(&stack0xffffffac + iVar1));
      puVar7 = puVar8;
      if (iVar6 != 0) {
        *(int *)(puVar8 + -4) = _CchSrc;
        *(int *)(puVar8 + -8) = iVar6;
        *(undefined1 **)(puVar8 + -0xc) = local_40;
        *(_locale_t *)(puVar8 + -0x10) = _Plocinfo;
        puVar7 = puVar8 + -0x14;
        *(undefined4 *)(puVar8 + -0x14) = 0x7e27bf;
        local_30 = GetStringTypeW(*(DWORD *)(puVar8 + -0x10),*(LPCWSTR *)(puVar8 + -0xc),
                                  *(int *)(puVar8 + -8),*(LPWORD *)(puVar8 + -4));
      }
      if (bVar2) {
        *(undefined4 *)(puVar7 + -4) = 2;
        *(undefined1 **)(puVar7 + -8) = local_40;
        *(undefined4 *)(puVar7 + -0xc) = 0x7e27d3;
        __free_dbg();
      }
    }
  }
  else {
    local_30 = 0;
  }
  ExceptionList = local_14;
  return local_30;
}

