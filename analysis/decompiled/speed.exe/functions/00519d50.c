/* speed.exe 00519d50 FUN_00519d50; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00519d50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == param_1) {
    iVar1 = *(int *)(param_1 + 4);
  }
  if (iVar1 != 0) {
    return iVar1 + -4;
  }
  return 0;
}

