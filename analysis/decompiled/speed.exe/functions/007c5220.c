/* speed.exe 007c5220 __set_purecall_handler; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __set_purecall_handler
   
   Library: Visual Studio 2003 Debug */

_purecall_handler __cdecl __set_purecall_handler(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
  p_Var1 = DAT_009ba9f8;
  DAT_009ba9f8 = _Handler;
  return p_Var1;
}

