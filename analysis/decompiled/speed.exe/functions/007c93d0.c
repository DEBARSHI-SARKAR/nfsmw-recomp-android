/* speed.exe 007c93d0 __lock_file2; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2003 Debug */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  }
  return;
}

