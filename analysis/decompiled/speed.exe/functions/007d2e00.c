/* speed.exe 007d2e00 ___freetlocinfo; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007e1f90 ___free_lconv_mon
 * calls 007e1af0 ___free_lconv_num
 * calls 007e14a0 ___free_lc_time
 */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2003 Debug */

void ___freetlocinfo(int param_1)

{
  if (((*(int *)(param_1 + 0x3c) != DAT_009baef8) && (*(int *)(param_1 + 0x3c) != 0)) &&
     (**(int **)(param_1 + 0x2c) == 0)) {
    if (((*(int *)(param_1 + 0x34) != 0) && (**(int **)(param_1 + 0x34) == 0)) &&
       (*(int *)(param_1 + 0x34) != DAT_009c5094)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x34),2);
      ___free_lconv_mon(*(undefined4 *)(param_1 + 0x3c));
    }
    if (((*(int *)(param_1 + 0x30) != 0) && (**(int **)(param_1 + 0x30) == 0)) &&
       (*(int *)(param_1 + 0x30) != DAT_009c509c)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x30),2);
      ___free_lconv_num(*(undefined4 *)(param_1 + 0x3c));
    }
    __free_dbg(*(undefined4 *)(param_1 + 0x2c),2);
    __free_dbg(*(undefined4 *)(param_1 + 0x3c),2);
  }
  if (((*(int *)(param_1 + 0x40) != DAT_009c5090) && (*(int *)(param_1 + 0x40) != 0)) &&
     (**(int **)(param_1 + 0x40) == 0)) {
    __free_dbg(*(undefined4 *)(param_1 + 0x40),2);
    __free_dbg(*(int *)(param_1 + 0x44) + -0xfe,2);
  }
  if (((*(int *)(param_1 + 0x50) != DAT_009baef4) && (*(int *)(param_1 + 0x50) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x50) + 0xb4) == 0)) {
    ___free_lc_time(*(undefined4 *)(param_1 + 0x50));
    __free_dbg(*(undefined4 *)(param_1 + 0x50),2);
  }
  __free_dbg(param_1,2);
  return;
}

