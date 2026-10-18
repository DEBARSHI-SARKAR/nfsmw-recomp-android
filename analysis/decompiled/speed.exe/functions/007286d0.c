/* speed.exe 007286d0 FUN_007286d0; analysis pseudocode, not buildable source.
 * calls 0064ad40 FUN_0064ad40
 * calls 006d1cf0 FUN_006d1cf0
 */

void __fastcall FUN_007286d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  *(undefined1 *)(param_1 + 0x193) = 0;
  FUN_006d1cf0();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (*(int *)(param_1 + 0x858) != 0) {
    FUN_0064ad40(*(int *)(param_1 + 0x858),*(undefined4 *)(param_1 + 0x85c));
    *(undefined4 *)(param_1 + 0x858) = 0;
    *(undefined4 *)(param_1 + 0x85c) = 0;
  }
  return;
}

