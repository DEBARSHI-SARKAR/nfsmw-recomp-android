/* speed.exe 006b74c0 FUN_006b74c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a62a0 FUN_006a62a0
 */

void __fastcall FUN_006b74c0(int param_1)

{
  FUN_006a62a0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

