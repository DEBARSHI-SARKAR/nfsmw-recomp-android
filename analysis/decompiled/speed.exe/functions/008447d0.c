/* speed.exe 008447d0 FUN_008447d0; analysis pseudocode, not buildable source.
 * calls 00856410 FUN_00856410
 */

void FUN_008447d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  FUN_00856410();
  return;
}

