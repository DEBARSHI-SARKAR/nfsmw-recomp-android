/* speed.exe 00573bc0 FUN_00573bc0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00573bc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 < param_3) {
    return (param_2 / iVar1) * iVar1;
  }
  if (*(int *)(param_1 + 0x24) * iVar1 + param_3 < param_2) {
    return ((param_2 / iVar1 - *(int *)(param_1 + 0x24)) + 1) * iVar1;
  }
  return param_3;
}

