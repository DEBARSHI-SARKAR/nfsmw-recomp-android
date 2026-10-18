/* speed.exe 007d1300 __ftbuf; analysis pseudocode, not buildable source.
 * calls 007d7260 __flush
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2003 Debug */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  code *pcVar1;
  int iVar2;
  
  if ((_Flag != 0) && (_Flag != 1)) {
    iVar2 = __CrtDbgReport(2,&DAT_008bcc2c,0x8f,0,"flag == 0 || flag == 1");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}

