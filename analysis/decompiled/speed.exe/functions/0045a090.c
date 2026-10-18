/* speed.exe 0045a090 FUN_0045a090; analysis pseudocode, not buildable source.
 * calls 00459f80 FUN_00459f80
 */

void __fastcall FUN_0045a090(int param_1)

{
  if (1 < *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) - 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00459f80(param_1,*(int *)(DAT_0090dcbc + 4) + 0x38);
  return;
}

