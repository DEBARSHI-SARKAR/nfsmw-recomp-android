/* speed.exe 0070b300 FUN_0070b300; analysis pseudocode, not buildable source.
 * calls 00705500 FUN_00705500
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_0070b300(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  if ((param_3 == (int *)**(int **)(param_1 + 4)) && (param_4 == *(int **)(param_1 + 4))) {
    FUN_00705500();
    *param_2 = param_4;
    return;
  }
  while (piVar1 = param_3, piVar1 != param_4) {
    param_3 = (int *)*piVar1;
    if (piVar1 != *(int **)(param_1 + 4)) {
      *(int **)piVar1[1] = param_3;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_005d0370(piVar1,0xc,0);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
  }
  *param_2 = param_4;
  return;
}

