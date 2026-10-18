/* speed.exe 005999f0 FUN_005999f0; analysis pseudocode, not buildable source.
 * calls 00590500 FUN_00590500
 * calls 00590430 FUN_00590430
 */

int __thiscall FUN_005999f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 8) {
    iVar1 = FUN_00590430(1);
    iVar2 = FUN_00590430(0);
    return iVar1 + iVar2;
  }
  if (param_2 != 9) {
    return *(int *)(param_1 + param_2 * 4);
  }
  iVar1 = FUN_00590500();
  return iVar1;
}

