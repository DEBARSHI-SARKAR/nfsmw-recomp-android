/* speed.exe 0078a290 FUN_0078a290; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0078a290(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (param_2 < iVar1) {
    param_2 = iVar1;
  }
  if (*(int *)(param_1 + 0x134) < param_2) {
    param_2 = *(int *)(param_1 + 0x134);
  }
  return param_2 - iVar1;
}

