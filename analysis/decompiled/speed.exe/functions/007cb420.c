/* speed.exe 007cb420 __ungetc_lk; analysis pseudocode, not buildable source.
 * calls 007dbb00 __getbuf
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __ungetc_lk
   
   Library: Visual Studio 2003 Debug */

uint __thiscall __ungetc_lk(undefined4 param_1,uint param_2,FILE *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 == (FILE *)0x0) &&
     (iVar2 = __CrtDbgReport(2,"ungetc.c",99,0,"str != NULL",param_1), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_2 == 0xffffffff) ||
     (((param_3->_flag & 1U) == 0 &&
      (((param_3->_flag & 0x80U) == 0 || ((param_3->_flag & 2U) != 0)))))) {
    param_2 = 0xffffffff;
  }
  else {
    if (param_3->_base == (char *)0x0) {
      __getbuf(param_3);
    }
    if (param_3->_ptr == param_3->_base) {
      if (param_3->_cnt != 0) {
        return 0xffffffff;
      }
      param_3->_ptr = param_3->_ptr + 1;
    }
    if ((param_3->_flag & 0x40U) == 0) {
      param_3->_ptr = param_3->_ptr + -1;
      *param_3->_ptr = (char)param_2;
    }
    else {
      param_3->_ptr = param_3->_ptr + -1;
      if (*param_3->_ptr != (char)param_2) {
        param_3->_ptr = param_3->_ptr + 1;
        return 0xffffffff;
      }
    }
    param_3->_cnt = param_3->_cnt + 1;
    param_3->_flag = param_3->_flag & 0xffffffef;
    param_3->_flag = param_3->_flag | 1;
    param_2 = param_2 & 0xff;
  }
  return param_2;
}

