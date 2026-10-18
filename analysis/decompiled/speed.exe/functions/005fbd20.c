/* speed.exe 005fbd20 FUN_005fbd20; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

uint __fastcall FUN_005fbd20(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return *(uint *)(*(int *)(param_1 + 4) + 0x18) >> 4 & 0xffffff01;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  pbVar2 = (byte *)FUN_00454810(0x8cb01abf,0);
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = (byte *)FUN_006269b0(1);
  }
  return (uint)*pbVar2;
}

