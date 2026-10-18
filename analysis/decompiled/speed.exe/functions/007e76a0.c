/* speed.exe 007e76a0 ___crtsetenv; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000096 SetEnvironmentVariableA
 * calls 007e7b90 __mbschr
 * calls 007e6fa0 ___wtomb_environ
 * calls 007c6bf0 __realloc_dbg
 * calls 007e7a20 findenv
 * calls 007d2670 __CrtDbgReport
 * calls 007c6700 __malloc_dbg
 * calls 007d0cd0 _strlen
 * calls 007e7aa0 copy_environ
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    ___crtsetenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uchar *_Str;
  code *pcVar1;
  int iVar2;
  uchar *puVar3;
  int *piVar4;
  size_t sVar5;
  LPCSTR lpName;
  BOOL BVar6;
  bool bVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int local_14;
  int local_10;
  
  local_14 = 0;
  if (_POption == (char **)0x0) {
    iVar2 = __CrtDbgReport(2,"setenv.c",0x5a,0,"FALSE");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    local_14 = -1;
  }
  else {
    _Str = (uchar *)*_POption;
    if (((_Str == (uchar *)0x0) || (puVar3 = __mbschr(_Str,0x3d), puVar3 == (uchar *)0x0)) ||
       (_Str == puVar3)) {
      local_14 = -1;
    }
    else {
      bVar7 = puVar3[1] == '\0';
      if (DAT_009baa40 == DAT_009baa44) {
        DAT_009baa40 = (int *)copy_environ(DAT_009baa40);
      }
      if (DAT_009baa40 == (int *)0x0) {
        if ((_Primary == 0) || (DAT_009baa48 == (undefined4 *)0x0)) {
          if (bVar7) {
            return 0;
          }
          DAT_009baa40 = (int *)__malloc_dbg(4,2,"setenv.c",0x9c);
          if (DAT_009baa40 == (int *)0x0) {
            return -1;
          }
          *DAT_009baa40 = 0;
          if (DAT_009baa48 == (undefined4 *)0x0) {
            DAT_009baa48 = (undefined4 *)__malloc_dbg(4,2,"setenv.c",0xa3);
            if (DAT_009baa48 == (undefined4 *)0x0) {
              return -1;
            }
            *DAT_009baa48 = 0;
          }
        }
        else {
          iVar2 = ___wtomb_environ();
          if (iVar2 != 0) {
            return -1;
          }
        }
      }
      piVar4 = DAT_009baa40;
      local_10 = findenv(_Str,(int)puVar3 - (int)_Str);
      if ((local_10 < 0) || (*piVar4 == 0)) {
        if (bVar7) {
          __free_dbg(_Str,2);
          *_POption = (char *)0x0;
          return 0;
        }
        if (local_10 < 0) {
          local_10 = -local_10;
        }
        piVar4 = (int *)__realloc_dbg(DAT_009baa40,local_10 * 4 + 8,2,"setenv.c",0xe9);
        if (piVar4 == (int *)0x0) {
          return -1;
        }
        piVar4[local_10] = (int)_Str;
        piVar4[local_10 + 1] = 0;
        *_POption = (char *)0x0;
        DAT_009baa40 = piVar4;
      }
      else {
        __free_dbg(piVar4[local_10],2);
        if (bVar7) {
          for (; piVar4[local_10] != 0; local_10 = local_10 + 1) {
            piVar4[local_10] = piVar4[local_10 + 1];
          }
          piVar4 = (int *)__realloc_dbg(DAT_009baa40,local_10 << 2,2,"setenv.c",0xd1);
          if (piVar4 != (int *)0x0) {
            DAT_009baa40 = piVar4;
          }
        }
        else {
          piVar4[local_10] = (int)_Str;
          *_POption = (char *)0x0;
        }
      }
      if (_Primary != 0) {
        uVar10 = 0x109;
        pcVar9 = "setenv.c";
        uVar8 = 2;
        sVar5 = _strlen((char *)_Str);
        lpName = (LPCSTR)__malloc_dbg(sVar5 + 2,uVar8,pcVar9,uVar10);
        if (lpName != (LPCSTR)0x0) {
          FUN_007d0bd0(lpName,_Str);
          lpName[(int)puVar3 - (int)_Str] = '\0';
          BVar6 = SetEnvironmentVariableA
                            (lpName,(LPCSTR)(bVar7 - 1 &
                                            (uint)(lpName + ((int)puVar3 - (int)_Str) + 1)));
          if (BVar6 == 0) {
            local_14 = -1;
          }
          __free_dbg(lpName,2);
        }
      }
      if (bVar7) {
        __free_dbg(_Str,2);
      }
    }
  }
  return local_14;
}

