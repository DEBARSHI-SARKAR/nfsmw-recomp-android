/* speed.exe 007c95b0 __fclose_lk; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d7660 __freebuf
 * calls 007d74c0 __close
 * calls 007d7260 __flush
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Debug */

int __fclose_lk(FILE *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_c;
  
  local_c = -1;
  if (param_1 == (FILE *)0x0) {
    iVar2 = __CrtDbgReport(2,"fclose.c",0x71,0,"str != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if ((param_1->_flag & 0x83U) != 0) {
    local_c = __flush(param_1);
    __freebuf(param_1);
    iVar2 = __close(param_1->_file);
    if (iVar2 < 0) {
      local_c = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      __free_dbg(param_1->_tmpfname,2);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return local_c;
}

