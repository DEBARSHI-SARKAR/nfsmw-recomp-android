/* speed.exe 007d22f0 get_short_arg; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _get_short_arg
   
   Library: Visual Studio 2003 Debug */

undefined2 __cdecl get_short_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}

