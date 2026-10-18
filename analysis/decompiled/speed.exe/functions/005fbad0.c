/* speed.exe 005fbad0 FUN_005fbad0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 00527d40 FUN_00527d40
 */

float10 __fastcall FUN_005fbad0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 0x26);
    iVar3 = FUN_00527d40();
    return (float10)uVar1 / (float10)iVar3;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    FUN_005fa780(piVar2);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    FUN_005fa780(piVar2);
  }
  pfVar4 = (float *)FUN_00454810(0xf9120d73,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar4;
}

