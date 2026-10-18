/* speed.exe 005095a0 FUN_005095a0; analysis pseudocode, not buildable source.
 * calls 005084c0 FUN_005084c0
 * calls 00509300 FUN_00509300
 */

void __thiscall FUN_005095a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  int *local_4;
  
  piVar3 = param_2;
  iVar1 = *param_2;
  piVar2 = *(int **)(param_1 + 0x3a0);
  local_4 = param_2;
  local_8 = iVar1;
  FUN_005084c0(&param_2,*(undefined4 *)(param_1 + 0x39c),piVar2,&local_8,0);
  piVar4 = param_2;
  if (param_2 != piVar2) {
    while (*piVar4 == iVar1) {
      if ((int *)piVar4[1] == piVar3) {
        FUN_00509300(&param_2,piVar4);
        return;
      }
      piVar4 = piVar4 + 2;
      if (piVar4 == piVar2) {
        return;
      }
    }
  }
  return;
}

