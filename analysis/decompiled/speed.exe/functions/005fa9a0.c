/* speed.exe 005fa9a0 FUN_005fa9a0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 004519d0 FUN_004519d0
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

undefined4 __fastcall FUN_005fa9a0(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  puVar3 = (undefined4 *)FUN_00454810(0x704f72e8,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  pcVar2 = (char *)*puVar3;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar4 = FUN_004519d0(pcVar2);
    return uVar4;
  }
  return 0;
}

