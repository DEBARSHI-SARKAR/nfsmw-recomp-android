/* speed.exe 007cd0b0 __mtterm; analysis pseudocode, not buildable source.
 * calls 007d0df0 __mtdeletelocks
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __mtterm(void)

{
  if (DAT_0090682c != -1) {
    (*DAT_009bac10)(DAT_0090682c);
    DAT_0090682c = -1;
  }
  __mtdeletelocks();
  return;
}

