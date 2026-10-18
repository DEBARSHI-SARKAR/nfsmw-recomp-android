/* speed.exe 007cd520 __heap_term; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000006e HeapDestroy
 * calls EXTERNAL:00000070 HeapFree
 * calls EXTERNAL:00000071 VirtualFree
 */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2003 Debug */

void __cdecl __heap_term(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_009c531c == 3) {
    local_c = DAT_009c52ec;
    for (local_8 = 0; local_8 < DAT_009c52e8; local_8 = local_8 + 1) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_009c5318,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
    }
    HeapFree(DAT_009c5318,0,DAT_009c52ec);
  }
  HeapDestroy(DAT_009c5318);
  return;
}

