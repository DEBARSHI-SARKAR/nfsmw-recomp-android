/* speed.exe 005fc560 FUN_005fc560; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

undefined1 __fastcall FUN_005fc560(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar2 = (undefined1 *)FUN_00454810(0x4393f69b,0);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_006269b0(1);
  }
  return *puVar2;
}

