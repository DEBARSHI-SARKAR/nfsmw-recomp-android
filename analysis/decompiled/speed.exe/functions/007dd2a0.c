/* speed.exe 007dd2a0 __setmbcp; analysis pseudocode, not buildable source.
 * calls 007dd4d0 __setmbcp_lk
 * calls 007c7290 __free_dbg
 * calls 007dd470 getSystemCP
 * calls 007d0fd0 __lock
 * calls 007dd44a FUN_007dd44a
 * calls 007dd455 FUN_007dd455
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2003 Debug */

int __cdecl __setmbcp(int _CodePage)

{
  int iVar1;
  int local_28;
  int *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd838;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_28 = -1;
  ExceptionList = &pvStack_14;
  __lock(0xd);
  local_8 = 0;
  iVar1 = getSystemCP(_CodePage);
  if (iVar1 != DAT_009c51c4) {
    local_24 = DAT_009c50a4;
    if ((DAT_009c50a4 == (int *)0x0) || (*DAT_009c50a4 != 0)) {
      local_24 = (int *)__malloc_dbg(0x220,2,"mbctype.c",0x20b);
    }
    if ((local_24 != (int *)0x0) && (local_28 = __setmbcp_lk(iVar1), local_28 == 0)) {
      *local_24 = 0;
      local_24[1] = DAT_009c51c4;
      local_24[2] = DAT_009c50a8;
      local_24[3] = DAT_009c50a0;
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        *(undefined2 *)((int)local_24 + local_20 * 2 + 0x10) =
             *(undefined2 *)(&DAT_009c51d0 + local_20 * 2);
      }
      for (local_20 = 0; local_20 < 0x101; local_20 = local_20 + 1) {
        *(undefined *)((int)local_24 + local_20 + 0x1c) = (&DAT_009c50c0)[local_20];
      }
      for (local_20 = 0; local_20 < 0x100; local_20 = local_20 + 1) {
        *(undefined *)((int)local_24 + local_20 + 0x11d) = (&DAT_009c51e0)[local_20];
      }
      DAT_009c50a4 = local_24;
    }
    if ((local_28 == -1) && (local_24 != DAT_009c50a4)) {
      __free_dbg(local_24,2);
    }
  }
  local_8 = 0xffffffff;
  FUN_007dd44a();
  iVar1 = FUN_007dd455();
  return iVar1;
}

