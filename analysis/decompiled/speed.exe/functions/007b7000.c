/* speed.exe 007b7000 FUN_007b7000; analysis pseudocode, not buildable source.
 * calls 007b5870 FUN_007b5870
 */

void __fastcall FUN_007b7000(int param_1)

{
  if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x20) & 0xf0) != 0x10) {
    FUN_007b5870(*(int *)(param_1 + 0x58));
    *(uint *)(*(int *)(param_1 + 0x58) + 0x20) =
         *(uint *)(*(int *)(param_1 + 0x58) + 0x20) & 0xf | 0x20;
  }
  return;
}

