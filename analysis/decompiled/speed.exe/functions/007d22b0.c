/* speed.exe 007d22b0 get_int_arg; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _get_int_arg
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl get_int_arg(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

