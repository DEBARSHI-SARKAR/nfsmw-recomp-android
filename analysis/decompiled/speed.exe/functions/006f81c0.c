/* speed.exe 006f81c0 FUN_006f81c0; analysis pseudocode, not buildable source.
 * calls 006f7f70 FUN_006f7f70
 */

void FUN_006f81c0(int param_1)

{
  if (((DAT_00988ecc != 0) &&
      (FUN_006f7f70(*(undefined4 *)(param_1 + 0x3c),param_1),
      ((byte)*(undefined4 *)(param_1 + 0x1c) & 7) == 1)) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_006f7f70(*(int *)(param_1 + 0x4c),param_1);
  }
  return;
}

