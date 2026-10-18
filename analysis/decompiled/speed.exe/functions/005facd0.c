/* speed.exe 005facd0 FUN_005facd0; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 * calls 005da0f0 FUN_005da0f0
 */

void __fastcall FUN_005facd0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  FUN_005da0f0();
  return;
}

