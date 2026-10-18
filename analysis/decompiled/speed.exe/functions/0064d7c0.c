/* speed.exe 0064d7c0 FUN_0064d7c0; analysis pseudocode, not buildable source.
 * calls 007ece9e FUN_007ece9e
 */

void __fastcall FUN_0064d7c0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_007ece9e(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x2c),100);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

