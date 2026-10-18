/* speed.exe 005fc980 FUN_005fc980; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

float10 __fastcall FUN_005fc980(int param_1)

{
  int *piVar1;
  float *pfVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  pfVar2 = (float *)FUN_00454810(0x515aa4e4,0);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar2;
}

