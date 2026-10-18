/* speed.exe 007dbb00 __getbuf; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2003 Debug */

void __cdecl __getbuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_getbuf.c",0x2e,0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DAT_009baa18 = DAT_009baa18 + 1;
  pcVar3 = (char *)__malloc_dbg(0x1000,2,"_getbuf.c",0x3a);
  _File->_base = pcVar3;
  if (_File->_base == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return;
}

