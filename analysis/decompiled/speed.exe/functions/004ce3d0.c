/* speed.exe 004ce3d0 FUN_004ce3d0; analysis pseudocode, not buildable source.
 * calls 004cd280 FUN_004cd280
 */

void __thiscall FUN_004ce3d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  do {
    if (piVar1 == *(int **)(param_1 + 8)) {
LAB_004ce3f4:
      FUN_004cd280(*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                   *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3);
      return;
    }
    if (*piVar1 == param_2) {
      *piVar1 = param_3;
      goto LAB_004ce3f4;
    }
    piVar1 = piVar1 + 2;
  } while( true );
}

