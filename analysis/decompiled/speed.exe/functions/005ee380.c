/* speed.exe 005ee380 FUN_005ee380; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e5c10 FUN_005e5c10
 */

void __fastcall FUN_005ee380(int param_1)

{
  FUN_005e5c10();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

