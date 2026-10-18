/* speed.exe 007deff0 _abort; analysis pseudocode, not buildable source.
 * calls 007dcef0 _raise
 * calls 007cd740 __NMSG_WRITE
 * calls 007ca340 __exit
 */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Debug */

void __cdecl _abort(void)

{
  __NMSG_WRITE(10);
  _raise(0x16);
  __exit(3);
  return;
}

