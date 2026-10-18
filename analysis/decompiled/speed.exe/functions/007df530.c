/* speed.exe 007df530 __vsnprintf; analysis pseudocode, not buildable source.
 * calls 007d1390 __output
 * calls 007d47d0 __flsbuf
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  code *pcVar1;
  int iVar2;
  FILE local_2c;
  FILE *local_c;
  int local_8;
  
  local_c = &local_2c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vsprintf.c",0x5a,0,
                           "format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_c->_cnt = _Count;
  local_c->_flag = 0x42;
  local_c->_base = _Dest;
  local_c->_ptr = _Dest;
  local_8 = __output(local_c,_Format,_Args);
  if (_Dest != (char *)0x0) {
    local_c->_cnt = local_c->_cnt + -1;
    if (local_c->_cnt < 0) {
      __flsbuf(0,local_c);
    }
    else {
      *local_c->_ptr = '\0';
      local_c->_ptr = local_c->_ptr + 1;
    }
  }
  return local_8;
}

