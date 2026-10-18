/* speed.exe 0047a9c0 FUN_0047a9c0; analysis pseudocode, not buildable source.
 * calls 0047a8b0 FUN_0047a8b0
 * calls 00468fa0 FUN_00468fa0
 */

void __thiscall FUN_0047a9c0(int param_1,undefined4 param_2)

{
  FUN_0047a8b0();
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x94) = *(undefined4 *)(param_1 + 0x30);
    FUN_00468fa0(param_2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x3c));
  }
  return;
}

