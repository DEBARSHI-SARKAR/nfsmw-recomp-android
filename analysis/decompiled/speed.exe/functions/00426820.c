/* speed.exe 00426820 FUN_00426820; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00426820(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0xd4);
  if (piVar1 != *(int **)(param_1 + 0xd4)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x13c))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xd4));
  }
  return;
}

