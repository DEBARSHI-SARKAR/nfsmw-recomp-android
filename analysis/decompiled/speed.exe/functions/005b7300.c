/* speed.exe 005b7300 FUN_005b7300; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b7300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x1c);
      *(int *)(param_2 + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = param_2;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_1 + 0x1c) = param_2;
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
    if (*(int *)(param_1 + 0x20) == iVar1) {
      *(int *)(param_1 + 0x20) = param_2;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(int *)(iVar1 + 0x1c) = iVar2;
    iVar2 = iVar2 + *(int *)(iVar1 + 0x18);
  }
  return;
}

