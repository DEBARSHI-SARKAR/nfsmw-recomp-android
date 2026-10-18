/* speed.exe 005b5420 FUN_005b5420; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b5420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 100);
      *(int *)(param_2 + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = param_2;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_1 + 100) = param_2;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
      *(int *)(param_2 + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = param_2;
      }
      *(int *)(param_2 + 8) = iVar1;
      *(int *)(iVar1 + 4) = param_2;
    }
    if (*(int *)(param_1 + 0x68) == iVar1) {
      *(int *)(param_1 + 0x68) = param_2;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  return;
}

