/* speed.exe 007dae20 ___crtCompareStringA; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007d6cb0 __security_check_cookie
 * calls 007db390 _strncnt
 * calls 007e3780 ___ansicp
 * calls 007e37e0 ___convertcp
 * calls 007c94b0 __chkstk
 * calls 007d2670 __CrtDbgReport
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:0000007b CompareStringW
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls EXTERNAL:00000079 GetCPInfo
 * calls EXTERNAL:0000007a CompareStringA
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2003 Debug */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStackY_94;
  _cpinfo local_64;
  undefined4 local_50;
  BYTE *local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  DWORD local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd3d8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_50 = DAT_00906980;
  local_1c = &stack0xffffff88;
  ExceptionList = &local_14;
  puVar5 = &stack0xffffff88;
  if (DAT_009bad94 == 0) {
    uStackY_94 = 0x7dae6f;
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      puVar5 = local_1c;
      if (DVar3 == 0x78) {
        DAT_009bad94 = 2;
      }
    }
    else {
      DAT_009bad94 = 1;
      puVar5 = local_1c;
    }
  }
  local_1c = puVar5;
  if (0 < (int)_LpString1) {
    _LpString1 = (LPCSTR)_strncnt((char *)_DwCmpFlags,(size_t)_LpString1);
  }
  if (0 < (int)_LpString2) {
    _LpString2 = (LPCSTR)_strncnt((char *)_CchCount1,(size_t)_LpString2);
  }
  if ((DAT_009bad94 == 2) || (DAT_009bad94 == 0)) {
    local_24 = 0;
    local_2c = 0;
    if (_Plocinfo == (_locale_t)0x0) {
      _Plocinfo = DAT_009bada0;
    }
    if (_CchCount2 == 0) {
      _CchCount2 = DAT_009badb0;
    }
    local_20 = ___ansicp();
    if (local_20 == -1) {
      ExceptionList = local_14;
      return 0;
    }
    if (local_20 != _CchCount2) {
      uStackY_94 = 0x7daf45;
      local_24 = ___convertcp();
      if (local_24 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      uStackY_94 = 0x7daf71;
      _CchCount1 = ___convertcp();
      local_2c = _CchCount1;
      if (_CchCount1 == 0) {
        __free_dbg();
        ExceptionList = local_14;
        return 0;
      }
      _DwCmpFlags = local_24;
    }
    uStackY_94 = 0x7dafbc;
    local_28 = CompareStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(PCNZCH)_DwCmpFlags,(int)_LpString1
                              ,(PCNZCH)_CchCount1,(int)_LpString2);
    if (local_24 == 0) {
      ExceptionList = local_14;
      return local_28;
    }
    __free_dbg();
    __free_dbg();
    ExceptionList = local_14;
    return local_28;
  }
  if (DAT_009bad94 != 1) {
    ExceptionList = local_14;
    return 0;
  }
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  if (_CchCount2 == 0) {
    _CchCount2 = DAT_009badb0;
  }
  if ((_LpString1 == (LPCSTR)0x0) || (_LpString2 == (LPCSTR)0x0)) {
    if (_LpString1 == _LpString2) {
      ExceptionList = local_14;
      return 2;
    }
    if (1 < (int)_LpString2) {
      ExceptionList = local_14;
      return 1;
    }
    if (1 < (int)_LpString1) {
      ExceptionList = local_14;
      return 3;
    }
    BVar4 = GetCPInfo(_CchCount2,&local_64);
    if (BVar4 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if ((((_LpString1 != (LPCSTR)0x0) || (_LpString2 != (LPCSTR)0x1)) &&
        ((_LpString1 != (LPCSTR)0x1 || (_LpString2 != (LPCSTR)0x0)))) &&
       (iVar2 = __CrtDbgReport(), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    if (0 < (int)_LpString1) {
      if (local_64.MaxCharSize < 2) {
        ExceptionList = local_14;
        return 3;
      }
      local_4c = local_64.LeadByte;
      while( true ) {
        if ((*local_4c == 0) || (local_4c[1] == 0)) {
          ExceptionList = local_14;
          return 3;
        }
        if ((*local_4c <= *(byte *)_DwCmpFlags) && (*(byte *)_DwCmpFlags <= local_4c[1])) break;
        local_4c = local_4c + 2;
      }
      ExceptionList = local_14;
      return 2;
    }
    if (0 < (int)_LpString2) {
      if (local_64.MaxCharSize < 2) {
        ExceptionList = local_14;
        return 1;
      }
      local_4c = local_64.LeadByte;
      while( true ) {
        if ((*local_4c == 0) || (local_4c[1] == 0)) {
          ExceptionList = local_14;
          return 1;
        }
        if ((*local_4c <= *(byte *)_CchCount1) && (*(byte *)_CchCount1 <= local_4c[1])) break;
        local_4c = local_4c + 2;
      }
      ExceptionList = local_14;
      return 2;
    }
  }
  uStackY_94 = 0x7db1ab;
  local_34 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_DwCmpFlags,(int)_LpString1,(LPWSTR)0x0,0);
  if (local_34 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  puVar5 = (undefined1 *)(local_34 * 2 + 3U & 0xfffffffc);
  iVar2 = -(int)puVar5;
  local_1c = (undefined1 *)((int)&local_64 + iVar2 + -0x14);
  local_44 = (undefined1 *)((int)&local_64 + iVar2 + -0x14);
  local_8 = 0xffffffff;
  if (&stack0xffffff88 == puVar5) {
    *(undefined4 *)((int)&local_64 + iVar2 + -0x18) = 0x121;
    *(char **)(&stack0xffffff80 + iVar2) = "a_cmp.c";
    *(undefined4 *)(&stack0xffffff7c + iVar2) = 2;
    *(int *)(&stack0xffffff78 + iVar2) = local_34 << 1;
    *(undefined4 *)(&stack0xffffff74 + iVar2) = 0x7db220;
    local_44 = (undefined1 *)__malloc_dbg();
    if (local_44 == (undefined1 *)0x0) {
      ExceptionList = local_14;
      return 0;
    }
    local_3c = local_3c + 1;
  }
  *(int *)((int)&local_64 + iVar2 + -0x18) = local_34;
  *(undefined1 **)(&stack0xffffff80 + iVar2) = local_44;
  *(LPCSTR *)(&stack0xffffff7c + iVar2) = _LpString1;
  *(DWORD *)(&stack0xffffff78 + iVar2) = _DwCmpFlags;
  *(undefined4 *)(&stack0xffffff74 + iVar2) = 1;
  *(int *)(&stack0xffffff70 + iVar2) = _CchCount2;
  puVar5 = (undefined1 *)((int)&uStackY_94 + iVar2);
  *(undefined4 *)((int)&uStackY_94 + iVar2) = 0x7db258;
  iVar2 = MultiByteToWideChar(*(UINT *)(&stack0xffffff70 + iVar2),
                              *(DWORD *)(&stack0xffffff74 + iVar2),
                              *(LPCSTR *)(&stack0xffffff78 + iVar2),
                              *(int *)(&stack0xffffff7c + iVar2),
                              *(LPWSTR *)(&stack0xffffff80 + iVar2),
                              *(int *)((int)&local_64 + iVar2 + -0x18));
  if (iVar2 != 0) {
    *(undefined4 *)(puVar5 + -4) = 0;
    *(undefined4 *)(puVar5 + -8) = 0;
    *(LPCSTR *)(puVar5 + -0xc) = _LpString2;
    *(int *)(puVar5 + -0x10) = _CchCount1;
    *(undefined4 *)(puVar5 + -0x14) = 9;
    *(int *)(puVar5 + -0x18) = _CchCount2;
    puVar6 = puVar5 + -0x1c;
    *(undefined4 *)(puVar5 + -0x1c) = 0x7db279;
    local_48 = MultiByteToWideChar(*(UINT *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                   *(LPCSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                   *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
    puVar5 = puVar6;
    if (local_48 != 0) {
      puVar5 = (undefined1 *)(local_48 * 2 + 3U & 0xfffffffc);
      *(undefined4 *)(puVar6 + -4) = 0x7db29e;
      iVar2 = -(int)puVar5;
      local_1c = puVar6 + iVar2;
      local_30 = puVar6 + iVar2;
      local_8 = 0xffffffff;
      if (puVar6 == puVar5) {
        *(undefined4 *)(puVar6 + iVar2 + -4) = 0x144;
        *(char **)(puVar6 + iVar2 + -8) = "a_cmp.c";
        *(undefined4 *)(puVar6 + iVar2 + -0xc) = 2;
        *(int *)(puVar6 + iVar2 + -0x10) = local_48 << 1;
        *(undefined4 *)(puVar6 + iVar2 + -0x14) = 0x7db2ec;
        local_30 = (undefined1 *)__malloc_dbg();
        puVar5 = puVar6 + iVar2;
        if (local_30 == (undefined1 *)0x0) goto LAB_007db358;
        local_40 = local_40 + 1;
      }
      *(int *)(puVar6 + iVar2 + -4) = local_48;
      *(undefined1 **)(puVar6 + iVar2 + -8) = local_30;
      *(LPCSTR *)(puVar6 + iVar2 + -0xc) = _LpString2;
      *(int *)(puVar6 + iVar2 + -0x10) = _CchCount1;
      *(undefined4 *)(puVar6 + iVar2 + -0x14) = 1;
      *(int *)(puVar6 + iVar2 + -0x18) = _CchCount2;
      puVar7 = puVar6 + iVar2 + -0x1c;
      *(undefined4 *)(puVar6 + iVar2 + -0x1c) = 0x7db31f;
      iVar2 = MultiByteToWideChar(*(UINT *)(puVar6 + iVar2 + -0x18),
                                  *(DWORD *)(puVar6 + iVar2 + -0x14),
                                  *(LPCSTR *)(puVar6 + iVar2 + -0x10),
                                  *(int *)(puVar6 + iVar2 + -0xc),*(LPWSTR *)(puVar6 + iVar2 + -8),
                                  *(int *)(puVar6 + iVar2 + -4));
      puVar5 = puVar7;
      if (iVar2 != 0) {
        *(int *)(puVar7 + -4) = local_48;
        *(undefined1 **)(puVar7 + -8) = local_30;
        *(int *)(puVar7 + -0xc) = local_34;
        *(undefined1 **)(puVar7 + -0x10) = local_44;
        *(LPCWSTR *)(puVar7 + -0x14) = _LocaleName;
        *(_locale_t *)(puVar7 + -0x18) = _Plocinfo;
        puVar5 = puVar7 + -0x1c;
        *(undefined4 *)(puVar7 + -0x1c) = 0x7db341;
        local_38 = CompareStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                                  *(PCNZWCH *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                  *(PCNZWCH *)(puVar7 + -8),*(int *)(puVar7 + -4));
      }
      if (local_40 != 0) {
        *(undefined4 *)(puVar5 + -4) = 2;
        *(undefined1 **)(puVar5 + -8) = local_30;
        puVar8 = puVar5 + -0xc;
        *(undefined4 *)(puVar5 + -0xc) = 0x7db355;
        __free_dbg();
        puVar5 = puVar8 + 8;
      }
    }
  }
LAB_007db358:
  if (local_3c != 0) {
    *(undefined4 *)(puVar5 + -4) = 2;
    *(undefined1 **)(puVar5 + -8) = local_44;
    *(undefined4 *)(puVar5 + -0xc) = 0x7db369;
    __free_dbg();
  }
  ExceptionList = local_14;
  return local_38;
}

