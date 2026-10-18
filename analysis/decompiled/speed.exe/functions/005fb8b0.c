/* speed.exe 005fb8b0 FUN_005fb8b0; analysis pseudocode, not buildable source.
 * calls 005de810 FUN_005de810
 * calls 00454810 FUN_00454810
 * calls 007c4b80 FUN_007c4b80
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

undefined4 __fastcall FUN_005fb8b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005de810();
    uVar2 = FUN_007c4b80();
    return uVar2;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar3 = (undefined4 *)FUN_00454810(0x477ec5aa,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  return *puVar3;
}

