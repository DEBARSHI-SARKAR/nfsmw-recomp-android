/* speed.exe 0068c040 FUN_0068c040; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0068c040(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1a4);
  if (((piVar1 != (int *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 4) == piVar1[1])) {
    piVar1 = (int *)(**(code **)(*piVar1 + 4))();
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

