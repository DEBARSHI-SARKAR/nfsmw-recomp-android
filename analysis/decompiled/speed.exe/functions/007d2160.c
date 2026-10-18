/* speed.exe 007d2160 write_char; analysis pseudocode, not buildable source.
 * calls 007d47d0 __flsbuf
 */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2003 Debug */

void __cdecl write_char(byte param_1,FILE *param_2,int *param_3)

{
  uint local_8;
  
  if (((param_2->_flag & 0x40U) == 0) || (param_2->_base != (char *)0x0)) {
    param_2->_cnt = param_2->_cnt + -1;
    if (param_2->_cnt < 0) {
      local_8 = __flsbuf((int)(char)param_1,param_2);
    }
    else {
      *param_2->_ptr = param_1;
      local_8 = (uint)param_1;
      param_2->_ptr = param_2->_ptr + 1;
    }
    if (local_8 == 0xffffffff) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}

