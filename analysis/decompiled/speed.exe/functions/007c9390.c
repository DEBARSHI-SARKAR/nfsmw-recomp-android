/* speed.exe 007c9390 __lock_file; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2003 Debug */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_00906330) || ((FILE *)&DAT_00906590 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0x4831a]._file >> 5) + 0x10);
  }
  return;
}

