/* speed.exe 007ccf50 ___crtTlsAlloc@4; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000068 TlsAlloc
 */

/* Library Function - Single Match
    ___crtTlsAlloc@4
   
   Library: Visual Studio 2003 Debug */

void ___crtTlsAlloc_4(void)

{
  TlsAlloc();
  return;
}

