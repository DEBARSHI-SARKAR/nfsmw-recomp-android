/* speed.exe 00793b90 FUN_00793b90; analysis pseudocode, not buildable source.
 * calls 0078e7d0 FUN_0078e7d0
 * calls 00793b50 FUN_00793b50
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00793b90(int param_1)

{
  FUN_00793b50();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  FUN_0078e7d0();
  FUN_0078e7d0();
  *(undefined1 *)(param_1 + 0x22c) = 0;
  FUN_004655f0(*(undefined4 *)(param_1 + 0x230));
  *(undefined4 *)(param_1 + 0x230) = 0;
  return;
}

