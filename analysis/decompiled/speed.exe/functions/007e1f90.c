/* speed.exe 007e1f90 ___free_lconv_mon; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2003 Debug */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xc) != *(int *)(PTR_PTR_0090738c + 0xc)) &&
       (*(undefined **)(param_1 + 0xc) != PTR_DAT_00907368)) {
      __free_dbg(*(undefined4 *)(param_1 + 0xc),2);
    }
    if ((*(int *)(param_1 + 0x10) != *(int *)(PTR_PTR_0090738c + 0x10)) &&
       (*(undefined **)(param_1 + 0x10) != PTR_DAT_0090736c)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x10),2);
    }
    if ((*(int *)(param_1 + 0x14) != *(int *)(PTR_PTR_0090738c + 0x14)) &&
       (*(undefined **)(param_1 + 0x14) != PTR_DAT_00907370)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x14),2);
    }
    if ((*(int *)(param_1 + 0x18) != *(int *)(PTR_PTR_0090738c + 0x18)) &&
       (*(undefined **)(param_1 + 0x18) != PTR_DAT_00907374)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x18),2);
    }
    if ((*(int *)(param_1 + 0x1c) != *(int *)(PTR_PTR_0090738c + 0x1c)) &&
       (*(undefined **)(param_1 + 0x1c) != PTR_DAT_00907378)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x1c),2);
    }
    if ((*(int *)(param_1 + 0x20) != *(int *)(PTR_PTR_0090738c + 0x20)) &&
       (*(undefined **)(param_1 + 0x20) != PTR_DAT_0090737c)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x20),2);
    }
    if ((*(int *)(param_1 + 0x24) != *(int *)(PTR_PTR_0090738c + 0x24)) &&
       (*(undefined **)(param_1 + 0x24) != PTR_DAT_00907380)) {
      __free_dbg(*(undefined4 *)(param_1 + 0x24),2);
    }
  }
  return;
}

