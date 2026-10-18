/* speed.exe 00592410 FUN_00592410; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00592410(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 8);
  if (*(int **)(param_1 + 8) == piVar1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == param_1 + 0x10) {
    return 0;
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = *piVar1;
    while( true ) {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -4;
      }
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 4;
      }
      if (iVar4 == iVar3) break;
      if (iVar4 == param_2) {
        return iVar2;
      }
      if (param_1 == -0x10) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 0xc;
      }
      if (iVar2 == iVar3) {
        return 0;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        iVar4 = *(int *)(iVar4 + 4);
        iVar2 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
        iVar2 = *(int *)(iVar2 + 4) + -4;
      }
    }
  }
  return 0;
}

