/* speed.exe 005fd240 FUN_005fd240; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 005fc030 FUN_005fc030
 */

int __fastcall FUN_005fd240(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    return (int)*(char *)(*(int *)(param_1 + 4) + 0x2a);
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    FUN_005fa780(piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    FUN_005fa780(piVar3);
  }
  piVar3 = (int *)FUN_00454810(0xdbc08d32,0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_006269b0(4);
  }
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    cVar2 = FUN_005fc030();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  else if (0x21 < iVar1) {
    return (0x42 < iVar1) + 2;
  }
  return 1;
}

