/* speed.exe 00867210 __strlwr; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007cd100 __getptd
 * calls 007d4090 ___crtLCMapStringA
 * calls 007c94b0 __chkstk
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007c6700 __malloc_dbg
 * calls 007d2f80 ___updatetlocinfo
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __strlwr
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __strlwr(char *_String)

{
  int iVar1;
  _ptiddata p_Var2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  BOOL unaff_EDI;
  undefined4 uStackY_64;
  char *local_30;
  undefined1 *local_24;
  pthreadlocinfo local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c8490;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  puVar5 = &stack0xffffffc0;
  ExceptionList = &local_14;
  p_Var2 = __getptd();
  local_20 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (local_20 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_20 = ___updatetlocinfo();
  }
  if (local_20->lc_category[0].wlocale == (wchar_t *)0x0) {
    for (local_30 = _String; *local_30 != '\0'; local_30 = local_30 + 1) {
      if (('@' < *local_30) && (*local_30 < '[')) {
        *local_30 = *local_30 + ' ';
      }
    }
  }
  else {
    uStackY_64 = 0x8672d1;
    iVar3 = ___crtLCMapStringA((_locale_t)local_20->lc_category[0].wlocale,(LPCWSTR)0x100,
                               (DWORD)_String,(LPCSTR)0xffffffff,0,(LPSTR)0x0,local_20->lc_codepage,
                               1,unaff_EDI);
    if (iVar3 != 0) {
      puVar4 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar4;
      local_24 = puVar5 + iVar1;
      local_8 = 0xffffffff;
      if (puVar5 == puVar4) {
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 0x69;
        *(char **)(&stack0xffffffb8 + iVar1) = "strlwr.c";
        *(undefined4 *)(&stack0xffffffb4 + iVar1) = 2;
        *(int *)(&stack0xffffffb0 + iVar1) = iVar3;
        *(undefined4 *)(&stack0xffffffac + iVar1) = 0x867343;
        local_24 = (undefined1 *)__malloc_dbg();
      }
      if (local_24 != (undefined1 *)0x0) {
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 1;
        *(uint *)(&stack0xffffffb8 + iVar1) = local_20->lc_codepage;
        *(int *)(&stack0xffffffb4 + iVar1) = iVar3;
        *(undefined1 **)(&stack0xffffffb0 + iVar1) = local_24;
        *(undefined4 *)(&stack0xffffffac + iVar1) = 0xffffffff;
        *(char **)(&stack0xffffffa8 + iVar1) = _String;
        *(undefined4 *)(&stack0xffffffa4 + iVar1) = 0x100;
        *(wchar_t **)(&stack0xffffffa0 + iVar1) = local_20->lc_category[0].wlocale;
        *(undefined4 *)((int)&uStackY_64 + iVar1) = 0x867380;
        iVar3 = ___crtLCMapStringA(*(_locale_t *)(&stack0xffffffa0 + iVar1),
                                   *(LPCWSTR *)(&stack0xffffffa4 + iVar1),
                                   *(DWORD *)(&stack0xffffffa8 + iVar1),
                                   *(LPCSTR *)(&stack0xffffffac + iVar1),
                                   *(int *)(&stack0xffffffb0 + iVar1),
                                   *(LPSTR *)(&stack0xffffffb4 + iVar1),
                                   *(int *)(&stack0xffffffb8 + iVar1),
                                   *(int *)(&stack0xffffffbc + iVar1),
                                   *(BOOL *)(&stack0xffffffc0 + iVar1));
        if (iVar3 != 0) {
          *(undefined1 **)(&stack0xffffffbc + iVar1) = local_24;
          *(char **)(&stack0xffffffb8 + iVar1) = _String;
          *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0x867394;
          FUN_007d0bd0();
        }
      }
      if (puVar5 == puVar4) {
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 2;
        *(undefined1 **)(&stack0xffffffb8 + iVar1) = local_24;
        *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0x8673a8;
        __free_dbg();
      }
    }
  }
  ExceptionList = local_14;
  return _String;
}

