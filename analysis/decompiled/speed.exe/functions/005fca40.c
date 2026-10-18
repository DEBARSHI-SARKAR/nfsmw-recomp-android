/* speed.exe 005fca40 FUN_005fca40; analysis pseudocode, not buildable source.
 * calls 005d9a10 FUN_005d9a10
 * calls 005fa780 FUN_005fa780
 */

void __fastcall FUN_005fca40(int param_1)

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
  FUN_005d9a10();
  return;
}

