/* speed.exe 005fb800 FUN_005fb800; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005fa780 FUN_005fa780
 */

undefined4 __fastcall FUN_005fb800(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 4);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  uVar2 = FUN_00452430();
  return uVar2;
}

