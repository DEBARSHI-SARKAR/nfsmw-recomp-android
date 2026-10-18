/* speed.exe 00713570 FUN_00713570; analysis pseudocode, not buildable source.
 * calls 00710670 FUN_00710670
 */

void __thiscall FUN_00713570(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 - iVar1 >> 2;
  }
  FUN_00710670(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 4;
  return;
}

