/* speed.exe 00627670 FUN_00627670; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00627670(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

