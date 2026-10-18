/* speed.exe 0045f1c0 FUN_0045f1c0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0045f1c0(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != 0) {
    puVar1 = (uint *)(param_1 + 0x28);
    do {
      uVar3 = ((param_2 - param_1) - 0x30U) / *puVar1;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x24))) {
        return uVar3 + iVar4;
      }
      piVar2 = (int *)(param_1 + 0x24);
      param_1 = *(int *)(param_1 + 8);
      iVar4 = iVar4 + *piVar2;
    } while (param_1 != 0);
  }
  return -1;
}

