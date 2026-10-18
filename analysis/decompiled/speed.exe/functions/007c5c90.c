/* speed.exe 007c5c90 __onexit; analysis pseudocode, not buildable source.
 * calls 007ca520 __lockexit
 * calls 007c5ce2 FUN_007c5ce2
 * calls 007c5d00 __onexit_lk
 * calls 007c5cdc FUN_007c5cdc
 */

/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Debug */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8128;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  __lockexit();
  local_8 = 0;
  __onexit_lk(_Func);
  local_8 = 0xffffffff;
  FUN_007c5cdc();
  p_Var1 = (_onexit_t)FUN_007c5ce2();
  return p_Var1;
}

