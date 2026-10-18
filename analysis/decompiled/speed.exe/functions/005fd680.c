/* speed.exe 005fd680 FUN_005fd680; analysis pseudocode, not buildable source.
 * calls 005fb150 FUN_005fb150
 * calls 005d9a10 FUN_005d9a10
 * calls 005fa780 FUN_005fa780
 */

void __thiscall FUN_005fd680(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    piVar1 = *(int **)(param_1 + 0xc);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
    iVar2 = FUN_005d9a10();
    FUN_005fb150((iVar2 - param_2) + -1,param_3);
    return;
  }
  FUN_005fb150(param_2,param_3);
  return;
}

