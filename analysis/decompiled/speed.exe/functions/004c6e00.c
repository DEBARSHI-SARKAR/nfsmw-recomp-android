/* speed.exe 004c6e00 FUN_004c6e00; analysis pseudocode, not buildable source.
 * calls 004c1370 FUN_004c1370
 */

void __thiscall FUN_004c6e00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_3 * 0x74 + param_1;
  piVar3 = *(int **)(iVar4 + 4);
  piVar1 = piVar3 + *(int *)(param_3 * 0x74 + 0xc + param_1);
  do {
    if (piVar3 == piVar1) {
LAB_004c6e55:
      if (piVar3 == (int *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0xc) * 4)) {
        return;
      }
      FUN_004c1370();
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
      goto LAB_004c6e55;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

