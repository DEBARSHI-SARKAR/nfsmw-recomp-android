/* speed.exe 007e7090 ___crtGetLocaleInfoW; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000095 GetLocaleInfoW
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls EXTERNAL:0000008a GetLocaleInfoA
 * calls 007c94b0 __chkstk
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2003 Debug */

int ___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5)

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
  puStack_c = &DAT_008bf188;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_009baf5c == 0) {
    uStackY_50 = 0x7e70cd;
    ExceptionList = &local_14;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_009baf5c = 2;
      }
    }
    else {
      DAT_009baf5c = 1;
    }
  }
  if (DAT_009baf5c == 1) {
    uStackY_50 = 0x7e7111;
    local_20 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if ((DAT_009baf5c == 2) || (DAT_009baf5c == 0)) {
    local_20 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = DAT_009badb0;
    }
    uStackY_50 = 0x7e715b;
    iVar3 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar3 == 0) {
      local_20 = 0;
    }
    else {
      puVar5 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      local_2c = &stack0xffffffc4 + iVar1;
      local_8 = 0xffffffff;
      if (&stack0xffffffc4 == puVar5) {
        *(undefined4 *)(&stack0xffffffc0 + iVar1) = 0x6f;
        *(char **)(&stack0xffffffbc + iVar1) = "w_loc.c";
        *(undefined4 *)(&stack0xffffffb8 + iVar1) = 2;
        *(int *)(&stack0xffffffb4 + iVar1) = iVar3;
        *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x7e71c9;
        local_2c = (undefined1 *)__malloc_dbg();
        if (local_2c == (undefined1 *)0x0) {
          ExceptionList = local_14;
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffc0 + iVar1) = iVar3;
      *(undefined1 **)(&stack0xffffffbc + iVar1) = local_2c;
      *(LCTYPE *)(&stack0xffffffb8 + iVar1) = param_2;
      *(LCID *)(&stack0xffffffb4 + iVar1) = param_1;
      puVar5 = (undefined1 *)((int)&uStackY_50 + iVar1);
      *(undefined4 *)((int)&uStackY_50 + iVar1) = 0x7e71f8;
      iVar3 = GetLocaleInfoA(*(LCID *)(&stack0xffffffb4 + iVar1),
                             *(LCTYPE *)(&stack0xffffffb8 + iVar1),
                             *(LPSTR *)(&stack0xffffffbc + iVar1),*(int *)(&stack0xffffffc0 + iVar1)
                            );
      if (iVar3 != 0) {
        if (param_4 == 0) {
          *(undefined4 *)(puVar5 + -4) = 0;
          *(undefined4 *)(puVar5 + -8) = 0;
          *(undefined4 *)(puVar5 + -0xc) = 0xffffffff;
          *(undefined1 **)(puVar5 + -0x10) = local_2c;
          *(undefined4 *)(puVar5 + -0x14) = 1;
          *(int *)(puVar5 + -0x18) = param_5;
          puVar6 = puVar5 + -0x1c;
          *(undefined4 *)(puVar5 + -0x1c) = 0x7e721a;
          local_20 = MultiByteToWideChar(*(UINT *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                         *(LPCSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                         *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
          puVar5 = puVar6;
        }
        else {
          *(int *)(puVar5 + -4) = param_4;
          *(LPWSTR *)(puVar5 + -8) = param_3;
          *(undefined4 *)(puVar5 + -0xc) = 0xffffffff;
          *(undefined1 **)(puVar5 + -0x10) = local_2c;
          *(undefined4 *)(puVar5 + -0x14) = 1;
          *(int *)(puVar5 + -0x18) = param_5;
          puVar7 = puVar5 + -0x1c;
          *(undefined4 *)(puVar5 + -0x1c) = 0x7e7239;
          local_20 = MultiByteToWideChar(*(UINT *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                         *(LPCSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                         *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
          puVar5 = puVar7;
        }
      }
      if (bVar2) {
        *(undefined4 *)(puVar5 + -4) = 2;
        *(undefined1 **)(puVar5 + -8) = local_2c;
        *(undefined4 *)(puVar5 + -0xc) = 0x7e724d;
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

