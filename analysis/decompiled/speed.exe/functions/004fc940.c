/* speed.exe 004fc940 FUN_004fc940; analysis pseudocode, not buildable source.
 */

void FUN_004fc940(int param_1,int param_2,int param_3)

{
  param_2 = param_2 * 0x1c;
  *(undefined4 *)(param_2 + 4 + param_1) = *(undefined4 *)(param_2 + 4 + param_3);
  *(undefined4 *)(param_2 + 0x10 + param_1) = *(undefined4 *)(param_2 + 0x10 + param_3);
  *(undefined4 *)(param_2 + 0x14 + param_1) = *(undefined4 *)(param_2 + 0x14 + param_3);
  *(undefined4 *)(param_2 + 0x18 + param_1) = *(undefined4 *)(param_2 + 0x18 + param_3);
  *(undefined4 *)(param_2 + 0x1c + param_1) = *(undefined4 *)(param_2 + 0x1c + param_3);
  *(undefined4 *)(param_2 + 8 + param_1) = *(undefined4 *)(param_2 + 8 + param_3);
  *(undefined4 *)(param_2 + 0xc + param_1) = *(undefined4 *)(param_2 + 0xc + param_3);
  return;
}

