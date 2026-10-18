/* speed.exe 005fb340 FUN_005fb340; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 005e18c0 FUN_005e18c0
 */

void __thiscall FUN_005fb340(int param_1,undefined4 param_2)

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
  puVar2 = (undefined4 *)FUN_00454810(0x7b6d296e,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(4);
  }
  FUN_005e18c0(*puVar2);
  return;
}

