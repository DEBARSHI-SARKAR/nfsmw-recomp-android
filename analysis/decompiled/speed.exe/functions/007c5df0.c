/* speed.exe 007c5df0 _atexit; analysis pseudocode, not buildable source.
 * calls 007c5c90 __onexit
 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Debug */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}

