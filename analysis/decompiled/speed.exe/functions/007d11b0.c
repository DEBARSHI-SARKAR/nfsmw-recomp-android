/* speed.exe 007d11b0 __stbuf; analysis pseudocode, not buildable source.
 * calls 007df010 __isatty
 * calls 007d2670 __CrtDbgReport
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __stbuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,&DAT_008bcc2c,0x41,0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = __isatty(_File->_file);
  if (iVar2 == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_00906350) {
    local_c = 0;
  }
  else {
    if (_File != (FILE *)&DAT_00906370) {
      return 0;
    }
    local_c = 1;
  }
  DAT_009baa18 = DAT_009baa18 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  if (*(int *)(&DAT_009bad70 + local_c * 4) == 0) {
    uVar3 = __malloc_dbg(0x1000,2,&DAT_008bcc2c,0x5d);
    *(undefined4 *)(&DAT_009bad70 + local_c * 4) = uVar3;
    if (*(int *)(&DAT_009bad70 + local_c * 4) == 0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = _File->_base;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_007d12de;
    }
  }
  _File->_base = *(char **)(&DAT_009bad70 + local_c * 4);
  _File->_ptr = _File->_base;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_007d12de:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}

