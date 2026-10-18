/* speed.exe 005fab40 FUN_005fab40; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 004519d0 FUN_004519d0
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

undefined4 __fastcall FUN_005fab40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar2 = (undefined4 *)FUN_00454810(0xa78403ec,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  uVar3 = FUN_004519d0(*puVar2);
  return uVar3;
}

