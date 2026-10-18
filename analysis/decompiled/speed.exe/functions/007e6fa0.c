/* speed.exe 007e6fa0 ___wtomb_environ; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls 007c7290 __free_dbg
 * calls 007e76a0 ___crtsetenv
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___wtomb_environ(void)

{
  int iVar1;
  char *local_c;
  int *local_8;
  
  local_c = (LPSTR)0x0;
  local_8 = DAT_009baa48;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    local_c = (char *)__malloc_dbg(iVar1,2,"wtombenv.c",0x3d);
    if (local_c == (LPSTR)0x0) {
      return -1;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*local_8,-1,local_c,iVar1,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    iVar1 = ___crtsetenv(&local_c,0);
    if ((iVar1 < 0) && (local_c != (LPSTR)0x0)) {
      __free_dbg(local_c,2);
      local_c = (LPSTR)0x0;
    }
    local_8 = local_8 + 1;
  }
  __free_dbg(local_c,2);
  return -1;
}

