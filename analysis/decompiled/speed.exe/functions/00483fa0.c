/* speed.exe 00483fa0 FUN_00483fa0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00478fc0 FUN_00478fc0
 */

void __fastcall FUN_00483fa0(int param_1)

{
  FUN_00478fc0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

