/* speed.exe 00592490 FUN_00592490; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00592490(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 8);
  if (((*(int **)(param_1 + 8) != piVar1) && (*(int *)(param_1 + 0x10) != param_1 + 0x10)) &&
     (param_2 != 0)) {
    iVar4 = *(int *)(param_1 + 0x28);
    iVar2 = *piVar1;
    while( true ) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -4;
      }
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 4;
      }
      if (iVar2 == iVar3) break;
      if (iVar4 == param_2) {
        return iVar2;
      }
      if (param_1 == -0x10) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 0xc;
      }
      if (iVar4 == iVar3) {
        return 0;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = *(int *)(iVar4 + 4) + -4;
      }
    }
  }
  return 0;
}

