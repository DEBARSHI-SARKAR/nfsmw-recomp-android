/* speed.exe 0085da70 __vsnwprintf; analysis pseudocode, not buildable source.
 * calls 007d47d0 __flsbuf
 * calls 0085f200 __woutput
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __vsnwprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  code *pcVar1;
  int iVar2;
  FILE local_2c;
  FILE *local_c;
  int local_8;
  
  local_c = &local_2c;
  if (_Dest == (wchar_t *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vswprint.c",0x5c,0,
                           "string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Format == (wchar_t *)0x0) {
    iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vswprint.c",0x5d,0,
                           "format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_c->_flag = 0x42;
  local_c->_base = (char *)_Dest;
  local_c->_ptr = (char *)_Dest;
  local_c->_cnt = _Count << 1;
  local_8 = __woutput(local_c,_Format,_Args);
  local_c->_cnt = local_c->_cnt + -1;
  if (local_c->_cnt < 0) {
    __flsbuf(0,local_c);
  }
  else {
    *local_c->_ptr = '\0';
    local_c->_ptr = local_c->_ptr + 1;
  }
  local_c->_cnt = local_c->_cnt + -1;
  if (local_c->_cnt < 0) {
    __flsbuf(0,local_c);
  }
  else {
    *local_c->_ptr = '\0';
    local_c->_ptr = local_c->_ptr + 1;
  }
  return local_8;
}

