/* speed.exe 007d7260 __flush; analysis pseudocode, not buildable source.
 * calls 007dbbc0 __write
 */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2003 Debug */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int local_8;
  
  local_8 = 0;
  if ((((_File->_flag & 3U) == 2) && ((_File->_flag & 0x108U) != 0)) &&
     (_MaxCharCount = (int)_File->_ptr - (int)_File->_base, 0 < (int)_MaxCharCount)) {
    uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
    if (uVar1 == _MaxCharCount) {
      if ((_File->_flag & 0x80U) != 0) {
        _File->_flag = _File->_flag & 0xfffffffd;
      }
    }
    else {
      _File->_flag = _File->_flag | 0x20;
      local_8 = -1;
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return local_8;
}

