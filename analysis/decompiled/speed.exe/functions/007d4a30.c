/* speed.exe 007d4a30 _set_new_handler; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007d1010 FUN_007d1010
 */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = DAT_009bad90;
  DAT_009bad90 = param_1;
  FUN_007d1010(4);
  return p_Var1;
}

