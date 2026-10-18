/* speed.exe 00468800 FUN_00468800; analysis pseudocode, not buildable source.
 * calls 00502980 FUN_00502980
 */

void __fastcall FUN_00468800(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    if (DAT_00911020 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2b0) = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_00502980(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xbc) = 0x3f000000;
  }
  return;
}

