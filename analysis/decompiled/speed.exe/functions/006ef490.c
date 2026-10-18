/* speed.exe 006ef490 FUN_006ef490; analysis pseudocode, not buildable source.
 * calls 004b4470 FUN_004b4470
 * calls 0044cc90 FUN_0044cc90
 * calls 004b8d10 FUN_004b8d10
 */

void __fastcall FUN_006ef490(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x394) != 0) {
    if (*(int *)(param_1 + 0x2fc) == 1) {
      DAT_008f7dd4._0_1_ = 0;
    }
    cVar1 = FUN_0044cc90(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(param_1 + 0x3a4),
                         *(int *)(param_1 + 0x2fc) == 1);
    if (cVar1 != '\0') {
      FUN_004b8d10(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(param_1 + 0x3a4),&LAB_006ea690);
      if (DAT_00912100 != 0) {
        FUN_004b4470(*(undefined4 *)(param_1 + 0x394));
      }
      *(undefined4 *)(param_1 + 0x2f4) = 2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x2f4) = 7;
  return;
}

