/* speed.exe 008600b0 get_int64_arg; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _get_int64_arg
   
   Library: Visual Studio 2003 Debug */

undefined8 __cdecl get_int64_arg(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

