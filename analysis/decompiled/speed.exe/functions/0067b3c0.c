/* speed.exe 0067b3c0 FUN_0067b3c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0067b3c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (piVar1 != *(int **)(param_1 + 4)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 8))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  return;
}

