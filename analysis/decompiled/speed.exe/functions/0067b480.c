/* speed.exe 0067b480 FUN_0067b480; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0067b480(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x60);
  if (piVar1 != *(int **)(param_1 + 0x60)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x14))(param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x60));
  }
  return;
}

