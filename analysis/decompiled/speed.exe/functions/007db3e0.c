/* speed.exe 007db3e0 __filbuf; analysis pseudocode, not buildable source.
 * calls 007dbb00 __getbuf
 * calls 007db5b0 __read
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __filbuf(FILE *_File)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *local_c;
  
  if (_File == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"_filbuf.c",0x66,0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (((_File->_flag & 0x83U) == 0) || ((_File->_flag & 0x40U) != 0)) {
    uVar3 = 0xffffffff;
  }
  else if ((_File->_flag & 2U) == 0) {
    _File->_flag = _File->_flag | 1;
    if ((_File->_flag & 0x10cU) == 0) {
      __getbuf(_File);
    }
    else {
      _File->_ptr = _File->_base;
    }
    iVar2 = __read(_File->_file,_File->_base,_File->_bufsiz);
    _File->_cnt = iVar2;
    if ((_File->_cnt == 0) || (_File->_cnt == -1)) {
      _File->_flag = (-(uint)(_File->_cnt != 0) & 0x10) + 0x10 | _File->_flag;
      _File->_cnt = 0;
      uVar3 = 0xffffffff;
    }
    else {
      if ((_File->_flag & 0x82U) == 0) {
        if (_File->_file == -1) {
          local_c = &DAT_00906808;
        }
        else {
          local_c = (undefined *)
                    ((_File->_file & 0x1fU) * 0x24 + (&DAT_009c5340)[_File->_file >> 5]);
        }
        if (((int)(char)local_c[4] & 0x82U) == 0x82) {
          _File->_flag = _File->_flag | 0x2000;
        }
      }
      if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
         ((_File->_flag & 0x400U) == 0)) {
        _File->_bufsiz = 0x1000;
      }
      _File->_cnt = _File->_cnt + -1;
      uVar3 = (uint)(byte)*_File->_ptr;
      _File->_ptr = _File->_ptr + 1;
    }
  }
  else {
    _File->_flag = _File->_flag | 0x20;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

