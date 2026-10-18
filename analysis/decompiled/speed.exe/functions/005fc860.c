/* speed.exe 005fc860 FUN_005fc860; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

undefined4 __fastcall FUN_005fc860(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar2 = (undefined4 *)FUN_00454810(0x8069b5a9,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  return *puVar2;
}

