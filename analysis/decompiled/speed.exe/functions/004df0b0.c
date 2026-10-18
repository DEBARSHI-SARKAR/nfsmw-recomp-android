/* speed.exe 004df0b0 FUN_004df0b0; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 0082c730 FUN_0082c730
 */

void __fastcall FUN_004df0b0(int param_1)

{
  if ((*(int *)(param_1 + 0x148) == 1) || (*(int *)(param_1 + 0x148) == 0)) {
    FUN_00829310(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1));
    FUN_0082c730(0xf000000);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_1 + 0x11a) = 0;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}

