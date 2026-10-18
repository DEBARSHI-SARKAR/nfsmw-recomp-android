/* speed.exe 005fce40 FUN_005fce40; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005fa780 FUN_005fa780
 * calls 005e1820 FUN_005e1820
 */

void __fastcall FUN_005fce40(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_005e1820(**(undefined4 **)(param_1 + 4));
    return;
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
  FUN_005e1820(uVar2);
  return;
}

