/* speed.exe 0060c840 FUN_0060c840; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0060c540 FUN_0060c540
 */

void __fastcall FUN_0060c840(int param_1)

{
  FUN_0060c540();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

