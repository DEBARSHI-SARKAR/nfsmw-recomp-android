/* speed.exe 005fb850 FUN_005fb850; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

float10 __fastcall FUN_005fb850(int param_1)

{
  int *piVar1;
  float *pfVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return (float10)*(float *)(*(int *)(param_1 + 4) + 0x1c);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  pfVar2 = (float *)FUN_00454810(0x7c11c52e,0);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar2;
}

