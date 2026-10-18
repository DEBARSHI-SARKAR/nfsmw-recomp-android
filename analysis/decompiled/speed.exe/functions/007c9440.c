/* speed.exe 007c9440 __unlock_file2; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 007d1010 FUN_007d1010
 */

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_007d1010(_Index + 0x10);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  }
  return;
}

