/* speed.exe 00603cc0 FUN_00603cc0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00603cc0(int param_1)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x68));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

