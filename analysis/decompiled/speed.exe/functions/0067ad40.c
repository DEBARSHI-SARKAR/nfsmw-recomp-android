/* speed.exe 0067ad40 FUN_0067ad40; analysis pseudocode, not buildable source.
 * calls 0041b7b0 FUN_0041b7b0
 */

void __thiscall FUN_0067ad40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_3 * 0x60 + 4 + param_1);
  param_1 = param_3 * 0x60 + param_1;
  piVar1 = piVar3 + *(int *)(param_1 + 0xc);
  do {
    if (piVar3 == piVar1) {
LAB_0067ad95:
      if (piVar3 == (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4)) {
        return;
      }
      FUN_0041b7b0();
      return;
    }
    if (*piVar3 == param_2) {
      piVar2 = piVar3;
      if (piVar3 != piVar1) {
        while (piVar2 = piVar2 + 1, piVar2 != piVar1) {
          if (*piVar2 != param_2) {
            *piVar3 = *piVar2;
            piVar3 = piVar3 + 1;
          }
        }
      }
      goto LAB_0067ad95;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

