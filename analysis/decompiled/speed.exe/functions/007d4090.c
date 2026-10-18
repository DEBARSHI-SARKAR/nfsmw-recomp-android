/* speed.exe 007d4090 ___crtLCMapStringA; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 007e3780 ___ansicp
 * calls 007e37e0 ___convertcp
 * calls 007d4600 _strncnt
 * calls 007d4aa0 _memset
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:00000075 LCMapStringW
 * calls 007c6700 __malloc_dbg
 * calls EXTERNAL:00000074 LCMapStringA
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2003 Debug */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  size_t _Size;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uStackY_84;
  undefined1 *local_44;
  int local_3c;
  undefined1 *local_38;
  int in_stack_ffffffcc;
  LPSTR local_2c;
  LPCSTR local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd100;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_009bad88 == 0) {
    uStackY_84 = 0x7d40d7;
    ExceptionList = &local_14;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_009bad88 = 2;
      }
    }
    else {
      DAT_009bad88 = 1;
    }
  }
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)_strncnt((char *)_DwMapFlag,(size_t)_LpSrcStr);
  }
  if ((DAT_009bad88 != 2) && (DAT_009bad88 != 0)) {
    if (DAT_009bad88 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    local_3c = 0;
    bVar2 = false;
    bVar1 = false;
    if (_CchDest == 0) {
      _CchDest = DAT_009badb0;
    }
    uStackY_84 = 0x7d4390;
    iVar3 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
    iVar6 = -(int)puVar5;
    local_44 = &stack0xffffff98 + iVar6;
    local_8 = 0xffffffff;
    if (&stack0xffffff98 == puVar5) {
      *(undefined4 *)(&stack0xffffff94 + iVar6) = 0x101;
      *(char **)(&stack0xffffff90 + iVar6) = "a_map.c";
      *(undefined4 *)(&stack0xffffff8c + iVar6) = 2;
      *(int *)(&stack0xffffff88 + iVar6) = iVar3 << 1;
      *(undefined4 *)(&stack0xffffff84 + iVar6) = 0x7d4405;
      local_44 = (undefined1 *)__malloc_dbg();
      if (local_44 == (undefined1 *)0x0) {
        ExceptionList = local_14;
        return 0;
      }
      bVar2 = true;
    }
    *(int *)(&stack0xffffff94 + iVar6) = iVar3;
    *(undefined1 **)(&stack0xffffff90 + iVar6) = local_44;
    *(LPCSTR *)(&stack0xffffff8c + iVar6) = _LpSrcStr;
    *(DWORD *)(&stack0xffffff88 + iVar6) = _DwMapFlag;
    *(undefined4 *)(&stack0xffffff84 + iVar6) = 1;
    *(int *)(&stack0xffffff80 + iVar6) = _CchDest;
    puVar5 = (undefined1 *)((int)&uStackY_84 + iVar6);
    *(undefined4 *)((int)&uStackY_84 + iVar6) = 0x7d443d;
    iVar6 = MultiByteToWideChar(*(UINT *)(&stack0xffffff80 + iVar6),
                                *(DWORD *)(&stack0xffffff84 + iVar6),
                                *(LPCSTR *)(&stack0xffffff88 + iVar6),
                                *(int *)(&stack0xffffff8c + iVar6),
                                *(LPWSTR *)(&stack0xffffff90 + iVar6),
                                *(int *)(&stack0xffffff94 + iVar6));
    if (iVar6 != 0) {
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0;
      *(int *)(puVar5 + -0xc) = iVar3;
      *(undefined1 **)(puVar5 + -0x10) = local_44;
      *(LPCWSTR *)(puVar5 + -0x14) = _LocaleName;
      *(_locale_t *)(puVar5 + -0x18) = _Plocinfo;
      puVar7 = puVar5 + -0x1c;
      *(undefined4 *)(puVar5 + -0x1c) = 0x7d4460;
      local_3c = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                              *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                              *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
      puVar5 = puVar7;
      if (local_3c != 0) {
        if (((uint)_LocaleName & 0x400) == 0) {
          puVar5 = (undefined1 *)(local_3c * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar7 + -4) = 0x7d44d5;
          iVar6 = -(int)puVar5;
          local_38 = puVar7 + iVar6;
          local_8 = 0xffffffff;
          if (puVar7 == puVar5) {
            *(undefined4 *)(puVar7 + iVar6 + -4) = 0x13a;
            *(char **)(puVar7 + iVar6 + -8) = "a_map.c";
            *(undefined4 *)(puVar7 + iVar6 + -0xc) = 2;
            *(int *)(puVar7 + iVar6 + -0x10) = local_3c << 1;
            *(undefined4 *)(puVar7 + iVar6 + -0x14) = 0x7d4523;
            local_38 = (undefined1 *)__malloc_dbg();
            puVar5 = puVar7 + iVar6;
            if (local_38 == (undefined1 *)0x0) goto LAB_007d45b0;
            bVar1 = true;
          }
          *(int *)(puVar7 + iVar6 + -4) = local_3c;
          *(undefined1 **)(puVar7 + iVar6 + -8) = local_38;
          *(int *)(puVar7 + iVar6 + -0xc) = iVar3;
          *(undefined1 **)(puVar7 + iVar6 + -0x10) = local_44;
          *(LPCWSTR *)(puVar7 + iVar6 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + iVar6 + -0x18) = _Plocinfo;
          puVar9 = puVar7 + iVar6 + -0x1c;
          *(undefined4 *)(puVar7 + iVar6 + -0x1c) = 0x7d4558;
          iVar3 = LCMapStringW(*(LCID *)(puVar7 + iVar6 + -0x18),*(DWORD *)(puVar7 + iVar6 + -0x14),
                               *(LPCWSTR *)(puVar7 + iVar6 + -0x10),*(int *)(puVar7 + iVar6 + -0xc),
                               *(LPWSTR *)(puVar7 + iVar6 + -8),*(int *)(puVar7 + iVar6 + -4));
          puVar5 = puVar9;
          if (iVar3 != 0) {
            if (_LpDestStr == (LPSTR)0x0) {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(undefined4 *)(puVar9 + -0xc) = 0;
              *(undefined4 *)(puVar9 + -0x10) = 0;
              *(int *)(puVar9 + -0x14) = local_3c;
              *(undefined1 **)(puVar9 + -0x18) = local_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar10 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x7d4580;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                             *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                             *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                             *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              puVar5 = puVar10;
            }
            else {
              *(undefined4 *)(puVar9 + -4) = 0;
              *(undefined4 *)(puVar9 + -8) = 0;
              *(LPSTR *)(puVar9 + -0xc) = _LpDestStr;
              *(int *)(puVar9 + -0x10) = _CchSrc;
              *(int *)(puVar9 + -0x14) = local_3c;
              *(undefined1 **)(puVar9 + -0x18) = local_38;
              *(undefined4 *)(puVar9 + -0x1c) = 0;
              *(int *)(puVar9 + -0x20) = _CchDest;
              puVar11 = puVar9 + -0x24;
              *(undefined4 *)(puVar9 + -0x24) = 0x7d45ad;
              local_3c = WideCharToMultiByte(*(UINT *)(puVar9 + -0x20),*(DWORD *)(puVar9 + -0x1c),
                                             *(LPCWSTR *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                             *(LPSTR *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                             *(LPCSTR *)(puVar9 + -8),*(LPBOOL *)(puVar9 + -4));
              puVar5 = puVar11;
            }
          }
        }
        else if ((_LpDestStr != (LPSTR)0x0) && (local_3c <= (int)_LpDestStr)) {
          *(LPSTR *)(puVar7 + -4) = _LpDestStr;
          *(int *)(puVar7 + -8) = _CchSrc;
          *(int *)(puVar7 + -0xc) = iVar3;
          *(undefined1 **)(puVar7 + -0x10) = local_44;
          *(LPCWSTR *)(puVar7 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + -0x18) = _Plocinfo;
          puVar8 = puVar7 + -0x1c;
          *(undefined4 *)(puVar7 + -0x1c) = 0x7d44aa;
          LCMapStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                       *(LPCWSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),*(LPWSTR *)(puVar7 + -8)
                       ,*(int *)(puVar7 + -4));
          puVar5 = puVar8;
        }
      }
    }
LAB_007d45b0:
    if (bVar1) {
      *(undefined4 *)(puVar5 + -4) = 2;
      *(undefined1 **)(puVar5 + -8) = local_38;
      puVar12 = puVar5 + -0xc;
      *(undefined4 *)(puVar5 + -0xc) = 0x7d45c1;
      __free_dbg();
      puVar5 = puVar12 + 8;
    }
    if (!bVar2) {
      ExceptionList = local_14;
      return local_3c;
    }
    *(undefined4 *)(puVar5 + -4) = 2;
    *(undefined1 **)(puVar5 + -8) = local_44;
    *(undefined4 *)(puVar5 + -0xc) = 0x7d45d5;
    __free_dbg();
    ExceptionList = local_14;
    return local_3c;
  }
  local_20 = (LPCSTR)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_009bada0;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_009badb0;
  }
  iVar3 = ___ansicp();
  if (iVar3 == -1) {
    ExceptionList = local_14;
    return 0;
  }
  if (iVar3 == _CchDest) {
    uStackY_84 = 0x7d431a;
    in_stack_ffffffcc =
         LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                      (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_007d431d;
  }
  uStackY_84 = 0x7d419e;
  local_20 = (LPCSTR)___convertcp();
  if (local_20 == (LPCSTR)0x0) {
    ExceptionList = local_14;
    return 0;
  }
  uStackY_84 = 0x7d41d1;
  _Size = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_20,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (_Size != 0) {
    local_8 = 0;
    local_2c = &stack0xffffff98;
    _memset(&stack0xffffff98,0,_Size);
    local_8 = 0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x68) {
      local_2c = (LPSTR)__malloc_dbg();
      if (local_2c == (LPSTR)0x0) {
        in_stack_ffffffcc = 0;
        goto LAB_007d42e6;
      }
      _memset(local_2c,0,_Size);
      bVar1 = true;
    }
    uStackY_84 = 0x7d42a0;
    iVar3 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_20,(int)_LpSrcStr,local_2c,_Size);
    if (iVar3 == 0) {
      in_stack_ffffffcc = 0;
    }
    else {
      uStackY_84 = 0x7d42cf;
      iVar3 = ___convertcp();
      if (iVar3 == 0) {
        in_stack_ffffffcc = 0;
      }
      else {
        in_stack_ffffffcc = 1;
      }
    }
  }
LAB_007d42e6:
  if (bVar1) {
    __free_dbg();
  }
LAB_007d431d:
  if (local_20 != (LPCSTR)0x0) {
    __free_dbg();
  }
  ExceptionList = local_14;
  return in_stack_ffffffcc;
}

