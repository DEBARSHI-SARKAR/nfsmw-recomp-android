/* speed.exe 007e4760 __unlock_fhandle; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_009c5340)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}

