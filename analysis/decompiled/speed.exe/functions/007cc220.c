/* speed.exe 007cc220 __setenvp; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 007ddc00 ___initmbctable
 */

/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2003 Debug */

int __cdecl __setenvp(void)

{
  int iVar1;
  size_t sVar2;
  int *local_10;
  int local_c;
  char *local_8;
  
  if (DAT_009c5450 == 0) {
    ___initmbctable();
  }
  local_c = 0;
  local_8 = DAT_009ba9e4;
  if (DAT_009ba9e4 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    for (; *local_8 != '\0'; local_8 = local_8 + sVar2 + 1) {
      if (*local_8 != '=') {
        local_c = local_c + 1;
      }
      sVar2 = _strlen(local_8);
    }
    DAT_009baa40 = (int *)__malloc_dbg(local_c * 4 + 4,2,"stdenvp.c",0x75);
    if (DAT_009baa40 == (int *)0x0) {
      iVar1 = -1;
    }
    else {
      local_10 = DAT_009baa40;
      for (local_8 = DAT_009ba9e4; *local_8 != '\0'; local_8 = local_8 + sVar2 + 1) {
        sVar2 = _strlen(local_8);
        if (*local_8 != '=') {
          iVar1 = __malloc_dbg(sVar2 + 1,2,"stdenvp.c",0x82);
          *local_10 = iVar1;
          if (*local_10 == 0) {
            __free_dbg(DAT_009baa40,2);
            DAT_009baa40 = (int *)0x0;
            return -1;
          }
          FUN_007d0bd0(*local_10,local_8);
          local_10 = local_10 + 1;
        }
      }
      __free_dbg(DAT_009ba9e4,2);
      DAT_009ba9e4 = (char *)0x0;
      *local_10 = 0;
      DAT_009c5444 = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}

