/* speed.exe 00860d20 __flswbuf; analysis pseudocode, not buildable source.
 * calls 007df010 __isatty
 * calls 007dbbc0 __write
 * calls 007e3a80 __lseek
 * calls 007dbb00 __getbuf
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *local_1c;
  undefined2 local_18 [2];
  uint local_14;
  uint local_10;
  FILE *local_c;
  uint local_8;
  
  if ((_File == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\_flsbuf.c",0x66,0,
                             "str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_c = _File;
  local_14 = _File->_file;
  if (((_File->_flag & 0x82U) != 0) && ((_File->_flag & 0x40U) == 0)) {
    if ((_File->_flag & 1U) != 0) {
      _File->_cnt = 0;
      if ((_File->_flag & 0x10U) == 0) {
        _File->_flag = _File->_flag | 0x20;
        return 0xffff;
      }
      _File->_ptr = _File->_base;
      _File->_flag = _File->_flag & 0xfffffffe;
    }
    _File->_flag = _File->_flag | 2;
    _File->_flag = _File->_flag & 0xffffffef;
    _File->_cnt = 0;
    local_8 = 0;
    local_10 = 0;
    if (((_File->_flag & 0x10cU) == 0) &&
       (((_File != (FILE *)&DAT_00906350 && (_File != (FILE *)&DAT_00906370)) ||
        (iVar2 = __isatty(local_14), iVar2 == 0)))) {
      __getbuf(local_c);
    }
    if ((local_c->_flag & 0x108U) == 0) {
      local_8 = 2;
      local_18[0] = (short)_Ch;
      local_10 = __write(local_14,local_18,2);
    }
    else {
      if (((int)local_c->_ptr - (int)local_c->_base < 0) &&
         (iVar2 = __CrtDbgReport(2,"f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\_flsbuf.c",0x9d,0,
                                 "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)")
         , iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      local_8 = (int)local_c->_ptr - (int)local_c->_base;
      local_c->_ptr = local_c->_base + 2;
      local_c->_cnt = local_c->_bufsiz + -2;
      if ((int)local_8 < 1) {
        if (local_14 == 0xffffffff) {
          local_1c = &DAT_00906808;
        }
        else {
          local_1c = (undefined *)((local_14 & 0x1f) * 0x24 + (&DAT_009c5340)[(int)local_14 >> 5]);
        }
        if ((local_1c[4] & 0x20) != 0) {
          __lseek(local_14,0,2);
        }
      }
      else {
        local_10 = __write(local_14,local_c->_base,local_8);
      }
      *(short *)local_c->_base = (short)_Ch;
    }
    if (local_10 == local_8) {
      uVar3 = _Ch & 0xffff;
    }
    else {
      local_c->_flag = local_c->_flag | 0x20;
      uVar3 = 0xffff;
    }
    return uVar3;
  }
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}

