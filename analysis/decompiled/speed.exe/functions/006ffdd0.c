/* speed.exe 006ffdd0 FUN_006ffdd0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_006ffdd0(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined2 *)(param_1 + 0x8c) = 0;
    FUN_004ac0e0(*(int *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}

