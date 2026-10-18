/* speed.exe 00683df0 FUN_00683df0; analysis pseudocode, not buildable source.
 * calls 00675670 FUN_00675670
 * calls 006817d0 FUN_006817d0
 */

void __thiscall FUN_00683df0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_2 + 0xc))();
  piVar3 = (int *)**(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      iVar2 = (**(code **)(*(int *)piVar3[2] + 0xc))();
      if (iVar1 < iVar2) goto LAB_00683e26;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  piVar3 = *(int **)(param_1 + 4);
LAB_00683e26:
  iVar1 = FUN_00675670(piVar3,piVar3[1],&param_2);
  FUN_006817d0(1);
  piVar3[1] = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}

