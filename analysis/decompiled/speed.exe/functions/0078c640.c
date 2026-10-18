/* speed.exe 0078c640 FUN_0078c640; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00839360 FUN_00839360
 * calls 007ec1bd FUN_007ec1bd
 */

void __fastcall FUN_0078c640(int param_1)

{
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_007ec1bd();
    FUN_00839360(*(undefined4 *)(param_1 + 0xf8));
    FUN_007ec1c8();
    return;
  }
  return;
}

