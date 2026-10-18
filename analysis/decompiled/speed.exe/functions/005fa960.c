/* speed.exe 005fa960 FUN_005fa960; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 */

void __fastcall FUN_005fa960(int param_1)

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
  return;
}

