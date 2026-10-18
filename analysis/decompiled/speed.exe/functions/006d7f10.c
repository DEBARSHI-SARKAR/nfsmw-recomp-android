/* speed.exe 006d7f10 FUN_006d7f10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006d7f10(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*param_1 + -0x10);
  }
  while( true ) {
    if (piVar3 == param_1 + -4) {
      return;
    }
    if (piVar3[6] == *(int *)(param_2 + 0xc)) break;
    if (piVar3[4] == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(piVar3[4] + -0x10);
    }
  }
  iVar1 = piVar3[4];
  piVar2 = (int *)piVar3[5];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  if (piVar3 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d7f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*piVar3)();
  return;
}

