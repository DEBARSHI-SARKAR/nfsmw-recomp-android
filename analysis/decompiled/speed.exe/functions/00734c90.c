/* speed.exe 00734c90 FUN_00734c90; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_00734c90(int param_1,undefined4 *param_2)

{
  FUN_007ec1bd();
  *param_2 = *(undefined4 *)(param_1 + 0xef4);
  param_2[1] = *(undefined4 *)(param_1 + 0xef8);
  param_2[2] = *(undefined4 *)(param_1 + 0xefc);
  FUN_007ec1c8();
  return;
}

