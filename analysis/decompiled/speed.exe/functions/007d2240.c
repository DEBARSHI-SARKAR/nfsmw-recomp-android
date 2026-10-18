/* speed.exe 007d2240 write_string; analysis pseudocode, not buildable source.
 * calls 007d2160 write_char
 */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Debug */

void __cdecl write_string(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  if (((*(uint *)(param_3 + 0xc) & 0x40) == 0) || (*(int *)(param_3 + 8) != 0)) {
    do {
      if (param_2 < 1) {
        return;
      }
      write_char(*param_1,param_3,param_4);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (*param_4 != -1);
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}

