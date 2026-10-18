/* speed.exe 005fac80 FUN_005fac80; analysis pseudocode, not buildable source.
 * calls 005fa780 FUN_005fa780
 */

uint __fastcall FUN_005fac80(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return *(uint *)(*(int *)(param_1 + 4) + 0x18) >> 3 & 0xffffff01;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    piVar2 = (int *)FUN_005fa780(piVar2);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    piVar2 = (int *)FUN_005fa780(piVar1);
  }
  return (uint)piVar2 & 0xffffff00;
}

