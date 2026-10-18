/* speed.exe 0077cf20 FUN_0077cf20; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0076a9f0 FUN_0076a9f0
 */

void __fastcall FUN_0077cf20(int param_1)

{
  FUN_0076a9f0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

