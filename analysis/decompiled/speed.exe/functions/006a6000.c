/* speed.exe 006a6000 FUN_006a6000; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a5150 FUN_006a5150
 */

void __fastcall FUN_006a6000(int param_1)

{
  FUN_006a5150();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

