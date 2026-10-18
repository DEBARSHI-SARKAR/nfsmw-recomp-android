/* speed.exe 007e1af0 ___free_lconv_num; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2003 Debug */

void ___free_lconv_num(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 != *(int *)PTR_PTR_0090738c) && ((undefined *)*param_1 != PTR_DAT_0090735c)) {
      __free_dbg(*param_1,2);
    }
    if ((param_1[1] != *(int *)(PTR_PTR_0090738c + 4)) &&
       ((undefined *)param_1[1] != PTR_DAT_00907360)) {
      __free_dbg(param_1[1],2);
    }
    if ((param_1[2] != *(int *)(PTR_PTR_0090738c + 8)) &&
       ((undefined *)param_1[2] != PTR_DAT_00907364)) {
      __free_dbg(param_1[2],2);
    }
  }
  return;
}

