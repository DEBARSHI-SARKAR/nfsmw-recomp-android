/* speed.exe 007d47d0 __flsbuf; analysis pseudocode, not buildable source.
 * calls 007dbbc0 __write
 * calls 007df010 __isatty
 * calls 007dbb00 __getbuf
 * calls 007e3a80 __lseek
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  code *pcVar1;
  FILE *_File_00;
  int iVar2;
  uint uVar3;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x66,0,"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  _File_00 = _File;
  uVar3 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return -1;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    local_10 = 0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00906350 && (_File != (FILE *)&DAT_00906370)) ||
        (iVar2 = __isatty(uVar3), iVar2 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108U) == 0) {
      local_8 = 1;
      local_10 = __write(uVar3,&_Ch,1);
    }
    else {
      if (((int)_File_00->_ptr - (int)_File_00->_base < 0) &&
         (iVar2 = __CrtDbgReport(2,"_flsbuf.c",0x9d,0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      local_8 = (int)_File_00->_ptr - (int)_File_00->_base;
      _File_00->_ptr = _File_00->_base + 1;
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)local_8 < 1) {
        if (uVar3 == 0xffffffff) {
          local_18 = &DAT_00906808;
        }
        else {
          local_18 = (undefined *)((uVar3 & 0x1f) * 0x24 + (&DAT_009c5340)[(int)uVar3 >> 5]);
        }
        if ((local_18[4] & 0x20) != 0) {
          __lseek(uVar3,0,2);
        }
      }
      else {
        local_10 = __write(uVar3,_File_00->_base,local_8);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (local_10 == local_8) {
      uVar3 = _Ch & 0xff;
    }
    else {
      _File_00->_flag = _File_00->_flag | 0x20;
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  _File->_flag = _File->_flag | 0x20;
  return -1;
}

