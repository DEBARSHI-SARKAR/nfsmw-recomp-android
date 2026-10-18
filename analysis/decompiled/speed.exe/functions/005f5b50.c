/* speed.exe 005f5b50 FUN_005f5b50; analysis pseudocode, not buildable source.
 * calls 005f3a00 FUN_005f3a00
 */

void __thiscall FUN_005f5b50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x80);
  piVar2 = *(int **)(param_1 + 0x7c);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_2) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      return;
    }
  }
  FUN_005f3a00(&param_2);
  return;
}

