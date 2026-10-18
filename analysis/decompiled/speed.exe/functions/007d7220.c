/* speed.exe 007d7220 __fflush_lk; analysis pseudocode, not buildable source.
 * calls 007d7260 __flush
 * calls 007e3f80 __commit
 */

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 2003 Debug */

int __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 == 0) {
    if ((param_1->_flag & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = __commit(param_1->_file);
      iVar1 = -(uint)(iVar1 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

