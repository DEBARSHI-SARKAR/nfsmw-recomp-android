/* speed.exe 0085ffe0 write_multi_char; analysis pseudocode, not buildable source.
 * calls 0085ff80 write_char
 */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2003 Debug */

void __cdecl write_multi_char(undefined2 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char(CONCAT22((short)((uint)(param_2 + -1) >> 0x10),param_1),param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}

