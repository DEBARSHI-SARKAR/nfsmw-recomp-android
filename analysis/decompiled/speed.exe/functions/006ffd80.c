/* speed.exe 006ffd80 FUN_006ffd80; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004b2280 FUN_004b2280
 */

undefined4 __fastcall FUN_006ffd80(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_004b2280(*(undefined4 *)(param_1 + 0x88),0);
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_004ac0e0(*(int *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return 1;
  }
  return 0;
}

