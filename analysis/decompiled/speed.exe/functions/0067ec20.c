/* speed.exe 0067ec20 FUN_0067ec20; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0067ec20(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0xa0);
  if (piVar1 != *(int **)(param_1 + 0xa0)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 8))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xa0));
  }
  return;
}

