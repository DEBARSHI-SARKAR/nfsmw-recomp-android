/* speed.exe 0046e760 FUN_0046e760; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_0046e760(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  switch(param_2) {
  case 0:
    piVar1 = (int *)*param_1;
    iVar3 = param_1[5];
    break;
  case 1:
    piVar1 = (int *)param_1[1];
    iVar3 = param_1[6];
    break;
  case 2:
    piVar1 = (int *)param_1[2];
    iVar3 = param_1[7];
    break;
  case 3:
    piVar1 = (int *)param_1[3];
    iVar3 = param_1[8];
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if (param_3 == *piVar1) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar2 < iVar3);
  }
  return (int *)0x0;
}

