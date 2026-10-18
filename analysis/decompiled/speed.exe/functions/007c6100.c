/* speed.exe 007c6100 _sprintf; analysis pseudocode, not buildable source.
 * calls 007d47d0 __flsbuf
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  FILE local_30;
  FILE *local_10;
  int local_c;
  undefined1 *local_8;
  
  local_10 = &local_30;
  local_8 = &stack0x0000000c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5d,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (_Dest == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x5e,0,"string != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_10->_cnt = 0x7fffffff;
  local_10->_flag = 0x42;
  local_10->_base = _Dest;
  local_10->_ptr = _Dest;
  local_c = __output(local_10,_Format,local_8);
  if (_Dest != (char *)0x0) {
    local_10->_cnt = local_10->_cnt + -1;
    if (local_10->_cnt < 0) {
      __flsbuf(0,local_10);
    }
    else {
      *local_10->_ptr = '\0';
      local_10->_ptr = local_10->_ptr + 1;
    }
  }
  return local_c;
}

