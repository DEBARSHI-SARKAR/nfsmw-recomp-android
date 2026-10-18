/* speed.exe 005fbb60 FUN_005fbb60; analysis pseudocode, not buildable source.
 * calls 005de810 FUN_005de810
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

float10 __fastcall FUN_005fbb60(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    fVar3 = (float10)FUN_005de810();
    return fVar3;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  pfVar2 = (float *)FUN_00454810(0x4e90219d,0);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar2;
}

