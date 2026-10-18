/* speed.exe 007cc3a0 __setargv; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000005d GetModuleFileNameA
 * calls 007cc490 parse_cmdline
 * calls 007c6700 __malloc_dbg
 * calls 007ddc00 ___initmbctable
 */

/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2003 Debug */

int __cdecl __setargv(void)

{
  int iVar1;
  char *local_18;
  int local_14;
  char *local_10;
  int local_c;
  int local_8;
  
  if (DAT_009c5450 == 0) {
    ___initmbctable();
  }
  DAT_009babfc = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_009baaf8,0x104);
  DAT_009baa50 = &DAT_009baaf8;
  if ((DAT_009c6468 == (char *)0x0) || (*DAT_009c6468 == '\0')) {
    local_18 = &DAT_009baaf8;
  }
  else {
    local_18 = DAT_009c6468;
  }
  local_10 = local_18;
  parse_cmdline(local_18,0,0,&local_c,&local_14);
  local_8 = __malloc_dbg(local_14 + local_c * 4,2,"stdargv.c",0x82);
  if (local_8 == 0) {
    iVar1 = -1;
  }
  else {
    parse_cmdline(local_10,local_8,local_8 + local_c * 4,&local_c,&local_14);
    DAT_009baa34 = local_c + -1;
    DAT_009baa38 = local_8;
    iVar1 = 0;
  }
  return iVar1;
}

