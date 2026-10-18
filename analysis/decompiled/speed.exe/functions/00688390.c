/* speed.exe 00688390 FUN_00688390; analysis pseudocode, not buildable source.
 * calls 006864a0 FUN_006864a0
 * calls 006865d0 FUN_006865d0
 */

void __thiscall FUN_00688390(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != *(int *)(param_1 + 0xac)) {
    FUN_006865d0(*(int *)(param_1 + 0xac));
    *(int *)(param_1 + 0xac) = param_2;
    FUN_006864a0(param_2);
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 4))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(param_2);
    }
  }
  return;
}

