/* speed.exe 00567550 FUN_00567550; analysis pseudocode, not buildable source.
 * calls 00514e20 FUN_00514e20
 */

void __fastcall FUN_00567550(int param_1)

{
  if (*(int *)(param_1 + 0xc4) == 0) {
    FUN_00514e20(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0xac));
    FUN_00514e20(*(undefined4 *)(param_1 + 0x38),0);
    FUN_00514e20(*(undefined4 *)(param_1 + 0x8c),0);
    return;
  }
  FUN_00514e20(*(undefined4 *)(param_1 + 0x90),0);
  FUN_00514e20(*(undefined4 *)(param_1 + 0x38),-*(float *)(param_1 + 0xac));
  FUN_00514e20(*(undefined4 *)(param_1 + 0x8c),-*(float *)(param_1 + 0xac));
  return;
}

