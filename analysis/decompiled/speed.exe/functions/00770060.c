/* speed.exe 00770060 FUN_00770060; analysis pseudocode, not buildable source.
 * calls 0076d320 FUN_0076d320
 */

void __fastcall FUN_00770060(int param_1)

{
  if (DAT_009b38fc != 0) {
    FUN_0076d320(param_1);
  }
  if (*(int *)(param_1 + 0x78) == 3) {
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  return;
}

