/* speed.exe 0082ac20 FUN_0082ac20; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0082ac20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x70))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      if (*(int *)(param_1[0x1a] + 0x10 + iVar1) == param_2) {
        return param_1[0x1a] + iVar3 * 0x28;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x28;
      iVar2 = (**(code **)(*param_1 + 0x70))();
    } while (iVar3 < iVar2);
  }
  return 0;
}

