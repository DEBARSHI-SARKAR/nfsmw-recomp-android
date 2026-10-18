/* speed.exe 007cb140 _strerror; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    _strerror
   
   Library: Visual Studio 2003 Debug */

char * __cdecl _strerror(char *_ErrMsg)

{
  _ptiddata p_Var1;
  char *pcVar2;
  char *local_10;
  char *local_8;
  
  p_Var1 = __getptd();
  if (p_Var1->_errmsg == (char *)0x0) {
    pcVar2 = (char *)__malloc_dbg(0x86,2,"strerror.c",0x5a);
    p_Var1->_errmsg = pcVar2;
    if (p_Var1->_errmsg == (char *)0x0) {
      local_8 = &DAT_009baa68;
      goto LAB_007cb18e;
    }
  }
  local_8 = p_Var1->_errmsg;
LAB_007cb18e:
  if (((int)_ErrMsg < 0) || ((int)DAT_009070a8 <= (int)_ErrMsg)) {
    local_10 = DAT_009070a8;
  }
  else {
    local_10 = _ErrMsg;
  }
  FUN_007d0bd0(local_8,(&PTR_s_No_error_00906ff8)[(int)local_10]);
  return local_8;
}

