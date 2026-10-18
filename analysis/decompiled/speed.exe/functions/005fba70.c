/* speed.exe 005fba70 FUN_005fba70; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

int __fastcall FUN_005fba70(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(param_1 + 4) + 4;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = (int *)FUN_00454810(0xa78403ec,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  return *piVar1;
}

