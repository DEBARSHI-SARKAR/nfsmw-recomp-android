/* speed.exe 005fb490 FUN_005fb490; analysis pseudocode, not buildable source.
 * calls 005fb420 FUN_005fb420
 * calls 005fa780 FUN_005fa780
 * calls 00460bf0 FUN_00460bf0
 */

void __thiscall FUN_005fb490(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  uVar2 = FUN_005fb420(param_2);
  FUN_00460bf0(uVar2);
  return;
}

