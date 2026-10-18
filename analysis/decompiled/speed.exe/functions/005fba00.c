/* speed.exe 005fba00 FUN_005fba00; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

uint __fastcall FUN_005fba00(int param_1)

{
  int *piVar1;
  uint *puVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return (uint)*(byte *)(*(int *)(param_1 + 4) + 0x28);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar2 = (uint *)FUN_00454810(0xebdc165,0);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_006269b0(4);
  }
  return *puVar2;
}

