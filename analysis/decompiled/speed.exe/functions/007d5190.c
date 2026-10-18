/* speed.exe 007d5190 ___sbh_heap_init; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000076 HeapAlloc
 */

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Debug */

bool ___sbh_heap_init(undefined4 param_1)

{
  DAT_009c52ec = HeapAlloc(DAT_009c5318,0,0x140);
  if (DAT_009c52ec != (LPVOID)0x0) {
    DAT_009c52f0 = param_1;
    DAT_009c52e4 = 0;
    DAT_009c52e8 = 0;
    DAT_009c52f8 = 0x10;
    DAT_009c52f4 = DAT_009c52ec;
  }
  return DAT_009c52ec != (LPVOID)0x0;
}

