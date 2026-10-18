/* speed.exe 007dd840 setSBCS; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_009c50c0)[local_8] = 0;
  }
  DAT_009c51c4 = 0;
  DAT_009c50a8 = 0;
  DAT_009c50a0 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_009c51d0 + local_8 * 2) = 0;
  }
  return;
}

