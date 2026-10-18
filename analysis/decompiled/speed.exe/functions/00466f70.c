/* speed.exe 00466f70 FUN_00466f70; analysis pseudocode, not buildable source.
 * calls 006bf530 FUN_006bf530
 */

int * __thiscall FUN_00466f70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_006bf530();
  if (iVar1 == 3) {
    iVar1 = param_1[1];
    param_1 = param_1 + 0x43;
  }
  else {
    iVar1 = *param_1;
    param_1 = param_1 + 4;
  }
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < iVar1) {
    do {
      if (param_2 == (short)*piVar3) {
        return param_1 + iVar2 * 9;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 9;
    } while (iVar2 < iVar1);
  }
  return (int *)0x0;
}

