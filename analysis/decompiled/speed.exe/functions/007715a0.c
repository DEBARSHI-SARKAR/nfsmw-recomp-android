/* speed.exe 007715a0 FUN_007715a0; analysis pseudocode, not buildable source.
 * calls 0076a9f0 FUN_0076a9f0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_007715a0(int param_1)

{
  FUN_0076a9f0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

