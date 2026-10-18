/* speed.exe 005b3da0 FUN_005b3da0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b3da0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x5c);
      *(int *)(param_2 + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = param_2;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_1 + 0x5c) = param_2;
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
    if (*(int *)(param_1 + 0x60) == iVar1) {
      *(int *)(param_1 + 0x60) = param_2;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return;
}

