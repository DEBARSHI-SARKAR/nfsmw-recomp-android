/* speed.exe 004e0790 FUN_004e0790; analysis pseudocode, not buildable source.
 * calls 004dfe30 FUN_004dfe30
 * calls 004b8f80 FUN_004b8f80
 */

void __fastcall FUN_004e0790(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  FUN_004dfe30();
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_00914341 = 0;
  DAT_00914340 = 0;
  DAT_00914342 = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  FUN_004b8f80(param_1,0,5,0);
  return;
}

