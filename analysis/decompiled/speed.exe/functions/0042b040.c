/* speed.exe 0042b040 FUN_0042b040; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0042b040(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x10))(param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
  }
  return;
}

