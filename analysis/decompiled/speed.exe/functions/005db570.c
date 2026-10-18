/* speed.exe 005db570 FUN_005db570; analysis pseudocode, not buildable source.
 * calls 00503c50 FUN_00503c50
 * calls 00503c30 FUN_00503c30
 */

void __thiscall FUN_005db570(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xb8);
  iVar2 = 2;
  do {
    if (*piVar1 != 0) {
      if (param_2 == '\0') {
        FUN_00503c50();
      }
      else {
        FUN_00503c30();
      }
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

