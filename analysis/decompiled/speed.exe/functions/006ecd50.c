/* speed.exe 006ecd50 FUN_006ecd50; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006ecd50(int param_1)

{
  if (DAT_009885d0 == param_1) {
    DAT_009885d0 = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  DAT_00988ed0 = DAT_00988ed0 + -1;
  return;
}

