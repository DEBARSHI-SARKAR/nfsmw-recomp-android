/* speed.exe 007cd740 __NMSG_WRITE; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000064 GetStdHandle
 * calls 007d0be0 FUN_007d0be0
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 007de140 ___crtMessageBoxA
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000005d GetModuleFileNameA
 * calls EXTERNAL:00000072 WriteFile
 * calls 007d2670 __CrtDbgReport
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2003 Debug */

void __cdecl __NMSG_WRITE(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  size_t sVar5;
  CHAR *pCVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  CHAR *pCVar9;
  CHAR *pCVar10;
  CHAR *pCVar11;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_124 [260];
  undefined1 local_20;
  undefined4 local_18;
  char *local_14;
  undefined1 *local_10;
  DWORD local_c;
  uint local_8;
  
  local_18 = DAT_00906980;
  for (local_8 = 0; (local_8 < 0x13 && (param_1 != *(int *)(&DAT_00906838 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_00906838 + local_8 * 8)) {
    if (((param_1 != 0xfc) && (param_1 != 0xff)) && (iVar2 = __CrtDbgReport(1), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_009ba9ec == 1) || ((DAT_009ba9ec == 0 && (DAT_00906230 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_0090683c)[local_8 * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_0090683c)[local_8 * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_20 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,local_124,0x104);
      if (DVar4 == 0) {
        FUN_007d0bd0();
      }
      local_14 = local_124;
      sVar3 = _strlen(local_14);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen(local_124);
        local_14 = local_14 + (sVar3 - 0x3b);
        _strncpy(local_14,"...",3);
      }
      sVar3 = _strlen(local_14);
      sVar5 = _strlen((&PTR_s_R6002___floating_point_not_loade_0090683c)[local_8 * 2]);
      iVar2 = -(sVar3 + sVar5 + 0x1f & 0xfffffffc);
      local_10 = local_124 + iVar2 + -8;
      *(char **)(local_124 + iVar2 + -0xc) = "Runtime Error!\n\nProgram: ";
      *(undefined1 **)(local_124 + iVar2 + -0x10) = local_10;
      pCVar6 = local_124 + iVar2 + -0x14;
      pCVar6[0] = -0x16;
      pCVar6[1] = -0x28;
      pCVar6[2] = '|';
      pCVar6[3] = '\0';
      FUN_007d0bd0();
      *(char **)(local_124 + iVar2 + -0xc) = local_14;
      *(undefined1 **)(local_124 + iVar2 + -0x10) = local_10;
      pCVar7 = local_124 + iVar2 + -0x14;
      pCVar7[0] = -6;
      pCVar7[1] = -0x28;
      pCVar7[2] = '|';
      pCVar7[3] = '\0';
      FUN_007d0be0();
      *(undefined **)(local_124 + iVar2 + -0xc) = &DAT_008b9150;
      *(undefined1 **)(local_124 + iVar2 + -0x10) = local_10;
      pCVar8 = local_124 + iVar2 + -0x14;
      pCVar8[0] = '\v';
      pCVar8[1] = -0x27;
      pCVar8[2] = '|';
      pCVar8[3] = '\0';
      FUN_007d0be0();
      *(undefined **)(local_124 + iVar2 + -0xc) =
           (&PTR_s_R6002___floating_point_not_loade_0090683c)[local_8 * 2];
      *(undefined1 **)(local_124 + iVar2 + -0x10) = local_10;
      pCVar9 = local_124 + iVar2 + -0x14;
      pCVar9[0] = '\"';
      pCVar9[1] = -0x27;
      pCVar9[2] = '|';
      pCVar9[3] = '\0';
      FUN_007d0be0();
      pCVar10 = local_124 + iVar2 + -0xc;
      pCVar10[0] = '\x10';
      pCVar10[1] = ' ';
      pCVar10[2] = '\x01';
      pCVar10[3] = '\0';
      *(char **)(local_124 + iVar2 + -0x10) = "Microsoft Visual C++ Runtime Library";
      *(undefined1 **)(local_124 + iVar2 + -0x14) = local_10;
      pCVar11 = local_124 + iVar2 + -0x18;
      pCVar11[0] = '8';
      pCVar11[1] = -0x27;
      pCVar11[2] = '|';
      pCVar11[3] = '\0';
      ___crtMessageBoxA(*(LPCSTR *)(local_124 + iVar2 + -0x14),
                        *(LPCSTR *)(local_124 + iVar2 + -0x10),*(UINT *)(local_124 + iVar2 + -0xc));
    }
  }
  return;
}

