/* speed.exe 00853010 FUN_00853010; analysis pseudocode, not buildable source.
 */

int FUN_00853010(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_2;
  if (param_2 < 0) {
    iVar4 = -param_2;
  }
  piVar1 = (int *)(param_1[5] + (iVar4 % param_1[4]) * 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar3 = (int *)*piVar1;
    if (piVar3[2] == param_2) break;
    piVar2 = (int *)*piVar3;
    piVar1 = piVar3;
  }
  *piVar1 = *piVar2;
  if ((int *)param_1[3] == piVar2) {
    param_1[3] = *piVar2;
  }
  *piVar2 = param_1[7];
  param_1[7] = (int)piVar2;
  *param_1 = *param_1 + -1;
  return piVar2[1];
}

