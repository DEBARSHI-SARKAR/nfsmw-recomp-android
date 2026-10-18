/* speed.exe 007d5da0 ___sbh_alloc_new_region; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000076 HeapAlloc
 * calls EXTERNAL:00000078 VirtualAlloc
 * calls EXTERNAL:00000077 HeapReAlloc
 * calls EXTERNAL:00000070 HeapFree
 */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_009c52e8 == DAT_009c52f8) {
    pvVar1 = HeapReAlloc(DAT_009c5318,0,DAT_009c52ec,(DAT_009c52f8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_009c52f8 = DAT_009c52f8 + 0x10;
    DAT_009c52ec = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_009c52e8 * 0x14 + (int)DAT_009c52ec);
  pvVar1 = HeapAlloc(DAT_009c5318,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_009c5318,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_009c52e8 = DAT_009c52e8 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}

