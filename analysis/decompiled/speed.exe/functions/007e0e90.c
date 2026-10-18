/* speed.exe 007e0e90 ___init_time; analysis pseudocode, not buildable source.
 * calls 007e0f30 __get_lc_time
 * calls 007c7290 __free_dbg
 * calls 007c6b60 __calloc_dbg
 * calls 007e14a0 ___free_lc_time
 */

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_009badac == 0) {
    PTR_PTR_0090729c = (undefined *)&PTR_DAT_009072a0;
    DAT_009baef4 = (undefined *)0x0;
    iVar2 = 0;
  }
  else {
    puVar1 = (undefined *)__calloc_dbg(1,0xb8,2,"inittime.c",0x45);
    if (puVar1 == (undefined *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar2 = __get_lc_time(puVar1);
      if (iVar2 == 0) {
        iVar2 = 0;
        PTR_PTR_0090729c = puVar1;
        DAT_009baef4 = puVar1;
      }
      else {
        ___free_lc_time(puVar1);
        __free_dbg(puVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

