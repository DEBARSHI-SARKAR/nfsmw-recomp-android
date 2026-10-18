/* speed.exe 007d7660 __freebuf; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Debug */

void __cdecl __freebuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_freebuf.c",0x30,0,"stream != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    __free_dbg(_File->_base,2);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

