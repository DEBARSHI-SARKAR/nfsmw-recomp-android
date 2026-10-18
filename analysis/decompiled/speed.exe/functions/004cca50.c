/* speed.exe 004cca50 FUN_004cca50; analysis pseudocode, not buildable source.
 * calls 004c99e0 FUN_004c99e0
 */

int __thiscall FUN_004cca50(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  piVar1 = *(int **)(param_1 + 8);
  local_8 = param_2;
  local_4 = 0;
  FUN_004c99e0(&param_2,*(undefined4 *)(param_1 + 4),piVar1,&local_8,0);
  if ((param_2 != piVar1) && ((int *)*param_2 == piVar2)) {
    return param_2[1];
  }
  return 0;
}

