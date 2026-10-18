/* speed.exe 0040afc0 FUN_0040afc0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0040afc0(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piStack_4;
  
  if ((param_2 != 0) && (param_1[0x8f] == 0)) {
    iVar3 = 3;
    piStack_4 = param_1;
    do {
      piVar2 = (int *)(**(code **)(*param_1 + 0x3c))();
      if (piVar2 != (int *)0x0) {
        param_2 = 0;
        (**(code **)(*piVar2 + 0x44))(0,&piStack_4,&param_2);
        if ((param_2 != 0) && (cVar1 = (**(code **)(*piVar2 + 0xc))(param_2), cVar1 != '\0')) {
          (**(code **)(*param_1 + 0x78))(param_2);
          param_1[0x8f] = param_1[0x8f] + 1;
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

