/* speed.exe 007d3b60 __setlocale_get_all; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d3e60 __strcats
 * calls 007d1120 _strcmp
 * calls 007c6700 __malloc_dbg
 * calls 007d0be0 FUN_007d0be0
 */

/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2003 Debug */

undefined1 * __setlocale_get_all(void)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_8;
  
  bVar1 = true;
  if ((DAT_00906c7c == (undefined1 *)0x0) &&
     (DAT_00906c7c = (undefined1 *)__malloc_dbg(0x351,2,"setlocal.c",0x35d),
     DAT_00906c7c == (undefined1 *)0x0)) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *DAT_00906c7c = 0;
    for (local_8 = 1;
        __strcats(DAT_00906c7c,3,*(undefined4 *)(local_8 * 0xc + 0x906c78),&DAT_008bd0ec,
                  (&DAT_00906c7c)[local_8 * 3]), local_8 < 5; local_8 = local_8 + 1) {
      FUN_007d0be0(DAT_00906c7c,&DAT_008bd0e4);
      iVar2 = _strcmp((&DAT_00906c7c)[local_8 * 3],(&DAT_00906c7c)[(local_8 + 1) * 3]);
      if (iVar2 != 0) {
        bVar1 = false;
      }
    }
    puVar3 = DAT_00906c7c;
    if (bVar1) {
      __free_dbg(DAT_00906c7c,2);
      DAT_00906c7c = (undefined1 *)0x0;
      puVar3 = PTR_DAT_00906c94;
    }
  }
  return puVar3;
}

