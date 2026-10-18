/* speed.exe 004cc9e0 FUN_004cc9e0; analysis pseudocode, not buildable source.
 * calls 004c9990 FUN_004c9990
 * calls 004cb560 FUN_004cb560
 */

int __thiscall FUN_004cc9e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *local_8;
  undefined4 local_4;
  
  piVar3 = param_2;
  piVar1 = *(int **)(param_1 + 8);
  local_8 = param_2;
  local_4 = 0;
  FUN_004c9990(&param_2,*(undefined4 *)(param_1 + 4),piVar1,&local_8,0);
  if ((param_2 != piVar1) && ((int *)*param_2 == piVar3)) {
    iVar2 = param_2[1];
    FUN_004cb560(&param_2,param_2);
    return iVar2;
  }
  return 0;
}

