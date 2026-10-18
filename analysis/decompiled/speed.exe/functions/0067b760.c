/* speed.exe 0067b760 FUN_0067b760; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0067b760(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (param_2 == 0) {
    if (iVar1 != 0) goto LAB_0067b7a0;
  }
  else if ((iVar1 == 0) || (*(int *)(param_2 + 4) != *(int *)(iVar1 + 4))) goto LAB_0067b7a0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    (**(code **)(*(int *)(param_1 + -0x14) + 8))();
  }
LAB_0067b7a0:
  piVar2 = (int *)**(int **)(param_1 + 0x60);
  if (piVar2 != *(int **)(param_1 + 0x60)) {
    do {
      (**(code **)(*(int *)piVar2[2] + 0x14))(param_2);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x60));
  }
  return;
}

