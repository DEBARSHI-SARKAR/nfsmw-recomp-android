/* speed.exe 0059bfb0 FUN_0059bfb0; analysis pseudocode, not buildable source.
 * calls 00593b10 FUN_00593b10
 */

void __thiscall FUN_0059bfb0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if ((piVar1 != param_2) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))();
  }
  *(int **)(param_1 + 0x34) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x24))(*(undefined4 *)(param_1 + 0x10));
  }
  FUN_00593b10();
  return;
}

