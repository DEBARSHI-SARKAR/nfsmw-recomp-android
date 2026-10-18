/* speed.exe 005ae080 FUN_005ae080; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005ae080(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    return -1;
  }
  if (iVar1 <= param_2) {
    param_2 = param_2 % iVar1;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x78);
  if ((param_2 < 0) && (param_2 = param_2 + iVar1, param_2 < 0)) {
    if (1 < iVar2) {
      return iVar2 - -param_2 % iVar2;
    }
    return 0;
  }
  return param_2 % iVar2;
}

