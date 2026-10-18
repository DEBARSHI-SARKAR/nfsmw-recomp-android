/* speed.exe 007d31c0 _setlocale; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c7290 __free_dbg
 * calls 007d33c1 FUN_007d33c1
 * calls 007c514a __local_unwind2
 * calls 007d2e00 ___freetlocinfo
 * calls 007d33b6 FUN_007d33b6
 * calls 007d33e0 __setlocale_lk
 * calls 007c6700 __malloc_dbg
 * calls 007d2ff0 ___updatetlocinfo_lk
 */

/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2003 Debug */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  undefined4 *puVar2;
  int local_28;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd0d8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  if ((_Category < 0) || (5 < _Category)) {
    pcVar1 = (char *)0x0;
  }
  else {
    ExceptionList = &local_14;
    __lock(0xc);
    local_8 = 0;
    if (_Locale != (char *)0x0) {
      puVar2 = (undefined4 *)__malloc_dbg(0x54,2,"setlocal.c",0x223);
      if (puVar2 == (undefined4 *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = __setlocale_lk(_Category,_Locale);
        if (local_28 != 0) {
          *puVar2 = 0;
          puVar2[1] = DAT_009badb0;
          puVar2[2] = DAT_009badb4;
          for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
            puVar2[local_24 + 3] = *(undefined4 *)(&DAT_009bad98 + local_24 * 4);
          }
          puVar2[9] = DAT_00906ff0;
          puVar2[10] = DAT_00907258;
          puVar2[0xb] = DAT_009c5098;
          puVar2[0xc] = DAT_009c509c;
          puVar2[0xd] = DAT_009c5094;
          puVar2[0xe] = PTR_PTR_0090738c;
          puVar2[0xf] = DAT_009baef8;
          puVar2[0x10] = DAT_009c5090;
          puVar2[0x11] = DAT_009c508c;
          puVar2[0x12] = PTR_DAT_00907294;
          puVar2[0x13] = PTR_PTR_0090729c;
          puVar2[0x14] = DAT_009baef4;
          if ((*(int *)PTR_DAT_00906b3c == 0) && ((undefined4 *)PTR_DAT_00906b3c != &DAT_00906ae8))
          {
            ___freetlocinfo(PTR_DAT_00906b3c);
          }
          PTR_DAT_00906b3c = (undefined *)puVar2;
          ___updatetlocinfo_lk();
        }
      }
      if ((local_28 == 0) && (puVar2 != (undefined4 *)0x0)) {
        __free_dbg(puVar2,2);
      }
      local_8 = 0xffffffff;
      FUN_007d33b6();
      pcVar1 = (char *)FUN_007d33c1();
      return pcVar1;
    }
    pcVar1 = (char *)__setlocale_lk(_Category,0);
    __local_unwind2(&local_14,0xffffffff);
  }
  ExceptionList = local_14;
  return pcVar1;
}

