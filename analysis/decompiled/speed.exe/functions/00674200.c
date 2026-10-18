/* speed.exe 00674200 FUN_00674200; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00674200(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -0x32 != (int *)0x0) {
      (**(code **)piVar1[-0x32])(1);
    }
    piVar1 = (int *)*param_1;
  }
  return;
}

