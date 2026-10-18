/* speed.exe 005dac10 FUN_005dac10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005dac10(uint param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
  if (DAT_0091dfe4 == param_1) {
    DAT_0091dfe4 = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  if (DAT_0091dfe8 == param_1) {
    DAT_0091dfe8 = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  if (DAT_0091dfec == param_1) {
    DAT_0091dfec = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  if (DAT_0091dff0 == param_1) {
    DAT_0091dff0 = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  if (DAT_0091dff4 == param_1) {
    DAT_0091dff4 = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  if (DAT_0091dff8 == param_1) {
    DAT_0091dff8 = *(uint *)(param_1 + 0x24) & (*(uint *)(param_1 + 0x24) == param_1) - 1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

