/* speed.exe 005fac10 FUN_005fac10; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

char __fastcall FUN_005fac10(int param_1)

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
  piVar1 = (int *)FUN_00454810(0x88a7e3be,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  if (*piVar1 < 0x22) {
    return '\0';
  }
  return (0x42 < *piVar1) + '\x01';
}

