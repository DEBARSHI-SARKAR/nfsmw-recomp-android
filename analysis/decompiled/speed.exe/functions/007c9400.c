/* speed.exe 007c9400 __unlock_file; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 007d1010 FUN_007d1010
 */

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

void __cdecl __unlock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_00906330) || ((FILE *)&DAT_00906590 < _File)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    FUN_007d1010(((int)&_File[-0x4831a]._file >> 5) + 0x10);
  }
  return;
}

